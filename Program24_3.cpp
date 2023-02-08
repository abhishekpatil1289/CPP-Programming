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
            for (int i = ch; i <= 90; i++)
            {
                cout << ch << '\t';
                ch++;
            }
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            for (int i = ch; i <= 122; i++)
            {
                cout << ch << '\t';
                ch++;
            }
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