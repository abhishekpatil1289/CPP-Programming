#include <iostream>
using namespace std;

class pattern
{
public:
    char ch;
    pattern()
    {
        cout << "Enter Character"
             << "\n";
        cin >> ch;
    }

    void DisplayPattern()
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("Decimal %d\t Heca %x\t Octa %o", ch, ch, ch);
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}