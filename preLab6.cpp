// Finish the following program which adds up all integers from 0 to 
// the user's given number inclusively using a While Loop. The total should be 
// assigned to the variable 'total'.
#include <iostream>

using namespace std; 
 
int main() 
{ 
 
    int number;
    int total = 0; 
    int counter = 0; //initialize the variable
 
    // user enters a number
    cout << "Enter a positive integer to find the summation of "; 
    cout << "all numbers from 0 to the given number up to 100." << endl;
    cin >> number;
 
    // check for invalid user input 
    if (number < 1  || number > 100) 
    { 
        cout << "Invalid Input" << endl; 
        return -1; // terminate program 
    }
 
    // TODO - add your code here.  
    // hint: increment a counter variable inside the loop.

    do {

        //total plus counter starting at zero
        total += counter;
        //add 1 to counter every loop
        counter ++;
    }

    //assuming you want to include the users number
    while ( number >= counter);
    //if you do not want to include the users number uncomment line 39
    //while ( number != counter);

    cout << "Your total is :" << total << endl;
 
    return 0; 
}

