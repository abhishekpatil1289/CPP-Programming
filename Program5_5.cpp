#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue = 0;
    PrintStar(int iNo)
    {
        ivalue = iNo;
    }

    void Print()
    {
        if (ivalue < 0)
        {
            ivalue = -ivalue;
        }
        int iSum = 0, iSum2 = 0;
        for (int i = 1; i <= ivalue; i++)
        {
            if (ivalue % i != 0)
            {
                iSum = iSum + i;
            }
        }

        for (int i = 1; i <= ivalue / 2; i++)
        {
            if (ivalue % i == 0)
            {
                iSum2 = iSum2 + i;
            }
        }

        cout << iSum << "\t";
        cout << iSum2 << "\n";
        cout << iSum2 - iSum;
    }
};

int main()
{
    int iNo = 0;
    int iRet = 0;
    cout << "enter the numer to print Sum of all non Factor :-"
         << "\t";
    cin >> iNo;

    PrintStar obj(iNo);

    // iRet =
    obj.Print();
    // cout << iRet;
    return 0;
}

/*

enter the numer to print Sum of all non Factor :-       12
50      16
-34

enter the numer to print Sum of all non Factor :-       10
37      8
-29

*/