#include <iostream>
/*
 * Name: Tyler Chase
 * Teacher: John Quan
 * Class: CS201
 * Assignment: HW01 Part C
 * Date: 1/28/2019
 */
using std::endl;
using std::cout;
using std::cin;

void diamond(int radius);

int main() {
    while(true) {
        int userInput;

        //Loops until the user gives a valid input
        while (true) {
            cout << "Enter a positive number for the diamond to be in the dimensions of. Enter 0 to end the program" << endl;
            cin >> userInput;

            if (userInput >= 0)
                break;
            else
                cout << "Please enter a positive number \n" << endl;
        }
        if(userInput == 0) {
            break;
        }else {
            diamond(userInput);
        }
    }
    return 0;
}

void diamond(int radius) {
    //account for center dot
    radius -= 1;
    //Print top half of diamond
    //Make a row
    for(int i = 0; i < radius; ++i){
        //Fill the row
        for(int c = 0; c < radius * 2 + 1; c++){

            //Test to see if the place in the for loop needs a character; uses the radius as a mid point and then adds/subtracts the row to find the range

            if(c == radius || (c <= radius +i && c >= radius - i)){
                //Subtract the row number then add the space in the line, this accounts for the blank space at the start of the line
                if((radius-i+c)%2==1){
                    cout << ".";
                }else{
                    cout << "#";
                }

            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    //Print bottom half of diamond

    //Make a row
    for(int i = radius; i >= 0; i--){

        //Fill the row
        for(int c = 0; c < radius * 2 + 1; c++){

            //Test to see if the place in the for loop needs a character; uses the radius as a mid point and then adds/subtracts the row to find the range

            if(c == radius || (c <= radius +i && c >= radius - i)){
                //Subtract the row number then add the space in the line, this accounts for the blank space at the start of the line
                if((radius-i+c)%2==1){
                    cout << ".";
                }else{
                    cout << "#";
                }

            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

}
