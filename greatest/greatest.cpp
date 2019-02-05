#include <iostream>
/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: greatest Part A
* Filename: greatest.cpp
* Purpose: Take numbers from a user and print out the greatest at the end
* Date: 1/28/2019
*/
using std::endl;
using std::cin;
using std::cout;
int getInt();

int main() {

    //Keep running the program until it's completed at least once

    while(true) {
        cout
                << "Enter a positive number, entering a 0 will end the input sequence and tell what the greatest integer entered was."
                << endl;

        int greatestInput = 0;

        while (true) {

            int userInput;

            userInput = getInt();

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

int getInt() {
    int output;
    //Loops until the user enters a valid input; Returns error if non-int input
    while (true) {
        cout << "Enter a positive number(0 to end): ";

        cin >> output;

        if(cin.fail()){

            cout << "Please enter an actual number" << endl;

            //clears the input and ignores what was entered previously, prevents endless loops
            cin.clear();

            //Ignores until it reaches 999 characters, or until it reaches a new line(end of input)
            cin.ignore(999,'\n');

        } else
            break;
    }
    return output;
}