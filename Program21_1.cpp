#include <iostream>
using namespace std;

class Program21_1
{
public:
    int iNo = 0;
    int iNo2 = 0;
    Program21_1(int iSize, int iSize2)
    {
        iNo = iSize;
        iNo2 = iSize2;
    }

    void Pattern()
    {
        int iCnt = 0;
        for (int i = 0; i < iNo; i++)
        {
            for (int i = 0; i < iNo2; i++)
            {
                cout << ((iCnt % 10)+1) << "\t";
                iCnt++;
            }
            cout << "\n";
        }
    }
};

int main()
{
    int iNo = 0, iNo2 = 0;

    cout << "Enter the Number of rows"
         << "\n";
    cin >> iNo;

    cout << "Enter the Number of Columns"
         << "\n";
    cin >> iNo2;

    Program21_1 obj(iNo, iNo2);

    obj.Pattern();

    return 0;
}