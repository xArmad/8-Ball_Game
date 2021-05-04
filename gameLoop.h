#include <iostream>
#include <cstdlib>

bool prgExit = false;

int loop()
{
    std::string userInput;
    while(!prgExit)
    {
        getline(std::cin, userInput);
        if(userInput.compare("exit") == 0) prgExit = true;
        if(userInput.compare("") != 0 && userInput.compare("exit") != 0)
        {
            std::cout << eightBall[rand() % ARRAY_LENGTH] << std::endl; 
            userInput = "";
        }
        std::cout << "Ask me a question!" << std::endl;
    }
    std::cout << "Game Ended" << std::endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}