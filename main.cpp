#include <iostream>
using namespace std;

unsigned int gcd(unsigned int m, unsigned int n);

int main()
{
    cout << "This terminal programme calculates divisor of 2 integers" 
         << endl;
    
    unsigned int num1, num2;

    cout << "Enter the first number:" << endl;

    cin >> num1;
    
    cout << endl << "Enter the second number:" << endl;

    cin >> num2;

    unsigned int output = gcd(num1, num2);

    cout << "The greatest common divisor(gcd) of "
         << num1 
         << " and "
         << num2 
         << " is: "
         << output 
         << endl;
    
    return 0;
}