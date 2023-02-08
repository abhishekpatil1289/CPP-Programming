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
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 32;
            cout << ch;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
            cout << ch;
        }
        else
        {
            cout << ch;
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}