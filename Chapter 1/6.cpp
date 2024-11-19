#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Please enter two integers:" << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;

    if (num2 != 0)
    {
        cout << "Quotient: " << num1 / num2 << endl;
        cout << "Remainder4: " << num1 % num2 << endl;
    }
    else
    {
        cout << "Division by zero is not allowed!" << endl;
    }

    return 0;
}
