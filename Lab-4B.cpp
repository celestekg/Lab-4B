//Celeste Going
//Lab 4B
/*This program adds together any number of positive integers entered by the user,
calculates the sum and average, and prints the results.*/

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float num1, num2, sum;
    float avg;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << endl;

    sum = num1 + num2;

    avg = sum / 2;

    cout << setprecision(3) << "Sum of two numbers: " << sum << endl;
    cout << setprecision(3) << "Average of two numbers: " << avg << endl;
    cout << endl;

    system("PAUSE");
    return 0;
}