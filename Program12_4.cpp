#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue1 = 0, ivalue2 = 0;
    PrintStar(int iNo)
    {
        ivalue1 = iNo;
    }

    void Print()
    {
        if (ivalue1 < 0)
        {
            ivalue1 = -ivalue1;
        }

        int iDigit = 0, iCnt = 0;

        while (ivalue1 != 0)
        {
            iDigit = ivalue1 % 10;
            if (iDigit == 4)
            {
                iCnt++;
            }
            ivalue1 = ivalue1 / 10;
        }
        cout << iCnt;
    }
};

int main()
{
    int iNo1 = 0, iNo2 = 0;
    cout << "enter the numer to Seprate Digit"
         << "\n";
    cin >> iNo1;

    PrintStar obj(iNo1);

    obj.Print();

    return 0;
}

/*

enter the numer to Seprate Digit
22464321
2

*/