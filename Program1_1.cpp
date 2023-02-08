#include <iostream>
using namespace std;

class Division
{
public:
    int Divisible(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 / iNo2;
        return iAns;
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    cout << "enter first number :- "
         << "\n";
    cin >> iValue1;

    cout << "enter first number :- "
         << "\n";
    cin >> iValue2;

    Division obj;

    iRet = obj.Divisible(iValue1, iValue2);
    cout << "Division is :- " << iRet;
    return 0;
}

/*
enter first number :-
10
enter first number :-
5
Division is :- 2
*/