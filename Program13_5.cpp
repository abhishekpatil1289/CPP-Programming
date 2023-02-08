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
        int iDigit = 0, iEven = 0, iOdd = 0;
        while (ivalue1 != 0)
        {
            iDigit = ivalue1 % 10;
            if (iDigit % 2 == 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }
        }
        cout << iEven - iOdd << "  (" << iEven << " - " << iOdd << ")";
    }
};

int main()
{
    int Arr, iNo2 = 0;
    cout << "enter the number to store "
         << "\n";
    cin >> iNo2;

    PrintStar obj(iNo2);

    return 0;
}

/*



*/