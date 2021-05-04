/*
Made by Armad
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "answers.h"
#include "gameLoop.h"


int main(int argc, char *argv[])
{
    answer();
    std::cout << "\t" " MAGIC 8-BALL " << std::endl;
    std::cout << "Ask me a Yes/No Question" << std::endl; 
    loop();
}