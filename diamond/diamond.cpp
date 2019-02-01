#include <iostream>
using std::endl;
using std::cin;
using std::cout;
void diamond(int radius);

int getInt(int userInput);

void bottomHalf(int radius);

void topHalf(int radius);

int main() {
    while(true) {
        int userInput;
        //Loops until the user gives a valid input
        userInput = getInt(userInput);
        if(userInput == 0) {
            break;
        }else {
            diamond(userInput);
        }
    }
    return 0;
}

int getInt(int userInput) {
    while (true) {

            cout << "Enter a positive number for the diamond to be in the dimensions of. Enter 0 to end the program" << endl;
            cin >> userInput;

            if (userInput >= 0)
                break;
            else
                cout << "Please enter a positive number \n" << endl;
        }
    return userInput;
}

void diamond(int radius){

    //account for center dot
    radius -= 1;

    //Print top half of diamond
    topHalf(radius);

    //Print bottom half of diamond
    bottomHalf(radius);

}

void topHalf(int radius) {//Make a row
    for(int row = 0; row < radius; ++row){

        //fill the row
        for(int col = 0; col < radius * 2 + 1; col++){

            //Test to see if the place in the for loop needs a character; uses the radius as a mid point and then adds/subtracts the row to find the range

            if(col == radius || (col <= radius +row && col >= radius - row)){
                cout << "#";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void bottomHalf(int radius) {//Make a row
    for(int row = radius; row >= 0; row--){
        //fill the row
        for(int col = 0; col < radius * 2 +1; col++){

            //Test to see if the place in the for loop needs a character; uses the radius as a mid point and then adds/subtracts the row to find the range

            if(col == radius || (col <= radius +row && col >= radius - row)){
                cout << "#";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}