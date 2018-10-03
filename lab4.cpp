/* NAME: Jeffrey C. Slocum  */

#include <iostream>
using namespace std;

int main()
{
    char operation;  //user's choice of operation
    int first_num, second_num, //user's choice of real numbers
    	   result;

    // Display greeting:
    cout << "Welcome to my super deluxe calculator 2000!\n";

    // Get user input:
    cout << "Enter the first number\n";
    cin >> first_num;

    cout << "Enter the desired operation (+ - * /)\n";
    cin >> operation;

    cout << "Enter the second number\n";
    cin >> second_num;

    // TODO: Use a switch statement to evaluate what operator the user selected,
    // and thus which operation to perform. Handle error checking


    switch (operation)
    {
        case '+':
        result = first_num + second_num;
        break;

        case '-':
        result = first_num - second_num;
        break;

        case '*':
        result = first_num * second_num;
        break;

        case '/':
            switch (second_num)
            {
            case 0:
                cout << endl << "Invalid Operation" << endl;
                return 0;
                break;

            default:
                result = first_num / second_num;
                break;
            }


        result = first_num / second_num;
        break;

        default:
        cout << "ERROR: Invalid Operator" << endl;

    }

    cout << endl << result << endl;
    // Exit the program:

    return 0;
}
