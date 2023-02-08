#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;
    PrintStar(int iNo, int iNo2, int iNo3)
    {
        ivalue = iNo;
        ivalue2 = iNo2;
        ivalue3 = iNo3;
    }

    int iRet = 0;
    void Print()
    {
        if ((ivalue && ivalue2 && ivalue3) == 0)
        {
            cout << ivalue;
            return;
        }
        if (ivalue == 0)
        {
            ivalue = 1;
        }
        if (ivalue2 == 0)
        {
            ivalue2 = 1;
        }
        if (ivalue3 == 0)
        {
            ivalue3 = 1;
        }

        iRet = ivalue * ivalue2 * ivalue3;
        cout << iRet;
    }
};

int main()
{
    int iNo = 0, iNo2 = 0, iNo3 = 0;
    cout << "enter three number"
         << "\n";
    cin >> iNo;
    cin >> iNo2;
    cin >> iNo3;

    PrintStar obj(iNo, iNo2, iNo3);

    obj.Print();

    return 0;
}

/*

enter three number
3
2
2
12

*/