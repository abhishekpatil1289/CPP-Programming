#include <iostream>
using namespace std;

class Division
{
public:
    int Divisible(int iNo1)
    {
        for (int i = 0; i < iNo1; i++)
        {
            cout << "Marvellous"
                 << "\n";
        }
    }
};

int main()
{
    int iValue1 = 0, iRet = 0;
    cout << "enter first number :- "
         << "\n";
    cin >> iValue1;

    Division obj;

    // iRet =
    obj.Divisible(iValue1);
    // cout << - " << iRet;
    return 0;
}

/*
enter first number :-
5
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous

*/