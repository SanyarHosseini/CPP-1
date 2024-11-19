#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    y += 1;
    z -= x + y - 1;

    cout << "Updated values:\n";
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}
