#include <iostream>
using namespace std;

class pattern
{
public:
    char iNo1;
    pattern()
    {
        cout << "Enter Character"
             << "\n";
        cin >> iNo1;
    }

    void DisplayPattern()
    {
        if (iNo1 >= '0' && iNo1 <= '9')
        {
            cout << "TRUE";
        }
        else
        {
            cout << "FALSE";
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}