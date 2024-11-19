#include <iostream>
using namespace std;

int main()
{
    double inches, centimeters;

    cout << "Enter inch: ";
    cin >> inches;

    centimeters = inches * 2.54;

    cout << inches << " inches is equal to " << centimeters << " centimeters." << endl;

    return 0;
}
