#include <iostream>
#include <cstdlib>
#include <cstring>

int main(){
    const int MAX_COMMAND_LENGTH = 1024;
    char command[MAX_COMMAND_LENGTH];

    for (;;){
        std::cout << "mysh: ";

        if (fgets(command, sizeof(command), stdin) == NULL){
            std::cout << "\n";
            return 0;
        }

        command[strlen(command) - 1] = '\0';

        int result = std::system(command);

        if (result == -1) {
            std::cerr << "Error executing command.\n";
            return 1;  
        }

        std::cout << "\n";
    }

    return 0;
}
