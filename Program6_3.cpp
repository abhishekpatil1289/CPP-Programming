#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue = 0;
    int ivalue2 = 0;
    PrintStar(int iNo, int iNo2)
    {
        ivalue = iNo;
        ivalue2 = iNo2;
    }

    void Print()
    {
        if (ivalue2 == ivalue)
        {
            cout << "Equal";
        }
        else
        {
            cout << "Not Equal";
        }
    }
};

int main()
{
    int iNo = 0, iNo2 = 0;
    cout << "enter the numer to check equal"
         << "\n";
    cin >> iNo;

    cout << "enter the numer to check equal"
         << "\n";
    cin >> iNo2;

    PrintStar obj(iNo, iNo2);

    obj.Print();

    return 0;
}

/*

enter the numer to check equal
6
enter the numer to check equal
6
Equal

*/