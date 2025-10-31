#include <iostream>
#include <cstdlib>


int main(int argc, char* argv []){
    if (argc == 1) 
    // Un seul argument --> nom du programme 
    {
        std::cerr << "not enough arguments" << std::endl;
        return -1;
    } else 
    // Sinon on somme les arguments suivants
    {
        int sum = 0;
        for (int i = 1; i < argc; i++)
        {
            sum = sum + std::stoi(argv[i]);
        }
        std::cout << sum << std::endl;
        return 0;
    }
}