#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue1 = 0, ivalue2 = 0;
    PrintStar(int iNo, int iNo2)
    {
        ivalue1 = iNo;
        ivalue2 = iNo2;
    }

    void Print()
    {
        if (ivalue1 > ivalue2)
        {
            cout << "Invalid Numbers ";
            return;
        }

        int iSum = 0;
        for (int i = ivalue1; i <= ivalue2; i++)
        {
            iSum = iSum + i;
        }
        cout << iSum;
    }
};

int main()
{
    int iNo1 = 0, iNo2 = 0;
    cout << "enter the numer to start number"
         << "\n";
    cin >> iNo1;

    cout << "enter the numer to end number on"
         << "\n";
    cin >> iNo2;

    PrintStar obj(iNo1, iNo2);

    obj.Print();

    return 0;
}

/*



*/