#include <stdio.h>
#include <termios.h>
#include <iostream>

#define PASSMAX 8

int main(){
    struct termios defrsett, newrsett;
    char password[PASSMAX + 1];

    tcgetattr(fileno(stdin), &defrsett);

    newrsett = defrsett;
    newrsett.c_lflag &= ~ECHO;

    std::cout << "Password: ";

    if(tcsetattr(fileno(stdin), TCSAFLUCH, &newrsett) != 0){
        std::cout << "Error!\n";
    }else{
        fgets(password, PASSMAX, stdin);
        tcsetattr(fileno(stdin), TCSANOW, &defrsett);
        std::cout << "Your password: " << password << "\n";
    
    }

    return 0;
}