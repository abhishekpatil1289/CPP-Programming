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

    int Print()
    {
        int iCnt = 0;
        while (iCnt < ivalue)
        {
            cout << "*"
                 << "\t";
            iCnt++;
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print the star"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print the star :- 10
*       *       *       *       *       *       *       *       *       *
*/