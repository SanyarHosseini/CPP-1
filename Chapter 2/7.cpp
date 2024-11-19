#include <iostream>
using namespace std;

int main()
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 10; i++)
    {
        cout << "Character: " << vowels[i] << ", ASCII Code: " << int(vowels[i]) << endl;
    }

    return 0;
}
