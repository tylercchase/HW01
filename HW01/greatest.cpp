#include <iostream>
/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: HW01 Part A
* Date: 1/28/2019
*/
int main() {
    while(true) {
        std::cout
                << "Enter a positive number, entering a 0 will end the input sequence and tell what the greatest integer entered was."
                << std::endl;
        int greatestInput = 0;
        while (true) {
            int userInput;
            std::cin >> userInput;
            //See if input is valid, and also if input is greater than the greatest number entered
            if (userInput > 0 && userInput > greatestInput) {
                greatestInput = userInput;
            }else if (userInput <= 0) {
                break;
            }
        }
        //If there was at least one valid input, output the greatest number
        if (greatestInput != 0) {
            std::cout << greatestInput << " was the greatest integer entered" << std::endl;
            break;
        } else {
            std::cout << "Please enter a number greater than 0 at least once next time \n" << std::endl;
        }
    }
    return 0;
}