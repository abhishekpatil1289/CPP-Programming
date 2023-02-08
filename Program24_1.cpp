#include <iostream>
using namespace std;

class pattern
{
public:
    char ch;
    // pattern()
    // {
    //     cout << "Enter Character"
    //          << "\n";
    //     cin >> ch;
    // }

    void DisplayPattern()
    {
        printf("Decimal\tHexa\tChar\t");
        for (int i = 0; i < 127; i++)
        {
            printf(" % d\t % x\t % c\t", i, i, i);
            cout << "\n";
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}