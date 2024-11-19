#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 7; ++i)
    {
        if (i == 0 || i == 3 || i == 6)
        {
            cout << "*****" << endl;
        }
        else if (i == 1 || i == 2 || i == 4 || i == 5)
        {
            cout << "*    *" << endl;
        }
    }
    return 0;
}
