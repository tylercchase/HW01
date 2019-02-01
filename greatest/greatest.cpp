#include <iostream>
/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: greatest Part A
* Date: 1/28/2019
*/
using std::endl;
using std::cin;
using std::cout;

int main() {

    //Keep running the program until it's completed at least once

    while(true) {
        cout
                << "Enter a positive number, entering a 0 will end the input sequence and tell what the greatest integer entered was."
                << endl;

        int greatestInput = 0;

        while (true) {

            int userInput;

            cout << "Enter a positive number: ";
            cin >> userInput;

            //See if input is valid, and also if input is greater than the greatest number entered

            if (userInput > 0 && userInput > greatestInput) {

                greatestInput = userInput;

            }else if (userInput <= 0) {
                break;
            }
        }

        //If there was at least one valid input, output the greatest number

        if (greatestInput != 0) {

            cout << greatestInput << " was the greatest integer entered" << endl;
            break;

        } else {

            cout << "Please enter a number greater than 0 at least once next time \n" << endl;

        }
    }
    return 0;
}