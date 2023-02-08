#include <iostream>
using namespace std;

class Divisible
{
public:
    int No = 0;
    Divisible(int iNo)
    {
        No = iNo;
    }
    int DivideBy5()
    {
        if (No % 5 == 0)
        {
            cout << No << " Divisible by 5";
        }
        else
        {
            cout << No << " is Not Divisible by 5";
        }
    }
};

int main()
{
    int ivalue;
    cout << "enter the number to check no is divisible by five or not "
         << "\n";
    cin >> ivalue;
    Divisible obj(ivalue);
    obj.DivideBy5();
}

/*
enter the number to check no is divisible by five or not :- 50
50 Divisible by 5
*/