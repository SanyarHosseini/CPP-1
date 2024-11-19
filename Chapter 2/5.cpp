#include <iostream>
using namespace std;

int main()
{
    int n, total = 0;

    cout << "Enter n: ";
    cin >> n;

    total += --n;

    cout << "Updated total: " << total << endl;

    return 0;
}
