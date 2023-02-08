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
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            cout << "False";
        }
        else
        {
            cout << "True";
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}