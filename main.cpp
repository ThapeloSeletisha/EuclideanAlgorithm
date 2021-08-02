#include <iostream>
using namespace std;

// Calculates the greatest common divisor of 2 numbers
// args: 
//     the 2 numbers numbers in question
// returns:
//     the greatest common divisor of the 2 numbers
unsigned int gcd(unsigned int m, unsigned int n);

int main()
{
    //Print the purpose of the programme
    cout << "This terminal programme calculates divisor of 2 integers" 
         << endl;
    
    //defines the varables that will store the useer input
    unsigned int num1, num2;

    //Prompt user to enter 2 numbers and store them
    cout << "Enter the first number:" << endl;
    cin >> num1;
    cout << endl << "Enter the second number:" << endl;
    cin >> num2;

    //Calculates the greatest common factor of the users 2 numbers
    unsigned int result = gcd(num1, num2);

    //Print the result to the terminal
    cout << "The greatest common divisor(gcd) of "
         << num1 
         << " and "
         << num2 
         << " is: "
         << result 
         << endl;
    
    return 0;
}
