#include <iostream>
using std::endl;
using std::cin;
using std::cout;
void diamond(int radius);
int main() {
    while(true) {
        std::cout << "No";
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
void diamond(int radius){

    //account for center dot
    radius -= 1;

    //Print top half of diamond
    //Make a row
    for(int i = 0; i < radius; ++i){

        //fill the row
        for(int c = 0; c < radius * 2 + 1; c++){

            //Test to see if the place in the for loop needs a character; uses the radius as a mid point and then adds/subtracts the row to find the range

            if(c == radius || (c <= radius +i && c >= radius - i)){
                cout << "#";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    //Print bottom half of diamond
    //Make a row
    for(int i = radius; i >= 0; i--){
        //fill the row
        for(int c = 0; c < radius * 2 +1; c++){

            //Test to see if the place in the for loop needs a character; uses the radius as a mid point and then adds/subtracts the row to find the range

            if(c == radius || (c <= radius +i && c >= radius - i)){
                cout << "#";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

}