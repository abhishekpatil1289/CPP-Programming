#include <iostream>
using namespace std;

class NoToNoDisplay
{

public:
    int iNo = 0;
    NoToNoDisplay(int No)
    {
        iNo = No;
    }

    void Check()
    {
        for (int i = iNo; i > 0; i--)
        {
            cout << i << "\n";
        }
    }
};
int main()
{
    int iValue = 0;
    cout << "enter the number :- "
         << "\n";
    cin >> iValue;

    NoToNoDisplay obj(iValue);

    obj.Check();
}


/*
enter the number :- 5
5
4
3
2
1
*/