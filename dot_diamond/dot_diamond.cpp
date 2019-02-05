#include <iostream>
/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: HW01 Part C
* Filename: dot_diamond.cpp
* Purpose: Take a number from the user and print a diamond of that length
* Date: 1/28/2019
*/
using std::endl;
using std::cin;
using std::cout;
void diamond(int radius);

int getInt();

void bottomHalf(int radius);

void topHalf(int radius);

int main() {
    while(true) {
        //int userInput;
        int userInput = getInt();
        if(userInput == 0) {
            break;
        }else {
            diamond(userInput);
        }
    }
    return 0;
}

int getInt() {
    int output;
    //Loops until the user enters a valid input; Returns error if non-int input
    while (true) {

        cout << "Enter a positive number for the diamond to be in the dimensions of. Enter 0 to end the program" << endl;
        cin >> output;

        if(cin.fail()){

            cout << "Please enter a number \n" << endl;

            //clears the input and ignores what was entered previously, prevents endless loops
            cin.clear();

            //Ignores until it reaches 999 characters, or until it reaches a new line(end of input)
            cin.ignore(999,'\n');

        } else if (output >= 0)
            break;
        else
            cout << "Please enter a positive number \n" << endl;
    }
    return output;
}

void diamond(int radius){

    //account for center dot
    radius -= 1;

    topHalf(radius);

    bottomHalf(radius);


}

void fill(int amount){

    for(int c=0;c<amount;++c){
        //Alternates the characters in the diamond
        if(c % 2 == 0)
            cout << "#";
        else
            cout << ".";
    }
    cout << endl;

}

void topHalf(int radius){

    for(int row = 0;row < radius; ++row){

        for(int col = 0; col < radius - row; col++){
            cout << " ";
        }
        //Every row requires two more characters than the previous, starting at 1
        fill(1+row*2);
    }
}

void bottomHalf(int radius) {

    for(int row = radius;row >= 0; --row){

        for(int col = 0; col <radius - row; col++){
            cout << " ";
        }
        //Every row requires two more characters than the previous, starting at 1
        fill(1+row*2);
    }
}