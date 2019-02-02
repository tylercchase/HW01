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
    //Loops until the user enters a valid input; Returns error if non-int input
    while (true) {

        cout << "Enter a positive number for the diamond to be in the dimensions of. Enter 0 to end the program" << endl;
        cin >> userInput;

        if(cin.fail()){
            cout << "Please enter a number" << endl;
            //clears the input and ignores what was entered previously, prevents endless loops
        cin.clear();
        cin.ignore(999,'\n');

        } else if (userInput >= 0)
            break;
        else
            cout << "Please enter a positive number \n" << endl;
    }
    return userInput;
}

void diamond(int radius){

    //account for center dot
    radius -= 1;

    topHalf(radius);

    bottomHalf(radius);


}
void fill(int amount){
    for(int c=0;c<amount;++c){
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
        fill(1+row*2);
    }
}

void bottomHalf(int radius) {
    for(int row = radius;row >= 0; --row){
        for(int col = 0; col <radius - row; col++){
            cout << " ";
        }
        fill(1+row*2);
    }
}