#include <iostream>
using namespace std;

int main()
{
    short num = 32767;
    cout << "Before overflow: " << num << endl;

    num += 1;

    cout << "After overflow: " << num << endl;

    return 0;
}
