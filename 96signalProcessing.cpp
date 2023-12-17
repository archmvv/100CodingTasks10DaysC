#include <csignal>
#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <cstdlib>

namespace {
    std::atomic<bool> gWakeUp(false);
}

void signal_handler(int signal) {
    gWakeUp = true;
    std::cout << "Wake up!\n";
}

void sleep_and_print() {
    while (!gWakeUp) {
        std::cout << "...Zzz...\n" << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
}

int main() {
    std::signal(SIGINT, signal_handler);

    std::thread sleepThread(sleep_and_print);

    std::cout << "Press any key to wake up...\n";
    std::getchar(); 

    gWakeUp = true;

    sleepThread.join();

    std::cout << "Exiting gracefully...Bye\n";

    return 0;
}