#include <iostream>
#include <algorithm>

using namespace std;


// Calculates the greatest common divisor of 2 numbers
// args: 
//     the 2 numbers numbers in question
// returns:
//     the greatest common divisor of the 2 numbers
int gcd(int m, int n);

int main()
{
    //Print the purpose of the programme
    cout << "This terminal programme calculates divisor of 2 integers" 
         << endl;
    
    //defines the varables that will store the useer input
    int num1, num2;

    //Prompt user to enter 2 numbers and store them
    cout << "Enter the first number:" << endl;
    cin >> num1;
    cout << endl << "Enter the second number:" << endl;
    cin >> num2;

    //Calculates the greatest common factor of the users 2 numbers
    int result = gcd(num1, num2);

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

int gcd(int m, int n)
{
    // If one of the numbers divides the other
    // return the one that divides the other
    if (n % m == 0 ||
        m % n == 0)
    {
        return min(m, n);
    } 
    // Else use the euclidean algorithm
    else 
    {
        //Set up the variables
        int dividend = m;
        int divisor = n;
        int remainder = 0;
        int result;
        //Apply the Euclidean Algorithm
        do {
            result = remainder;
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        } while (remainder != 0);

        return result;
    }   
}
