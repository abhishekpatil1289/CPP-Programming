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
        int iSum = 1;
        for (int i = 1; i <= ivalue / 2; i++)
        {
            if (ivalue % i == 0)
            {
                iSum = iSum * i;
            }
        }
        return iSum;
    }
};

int main()
{
    int iNo = 0;
    int iRet = 0;
    cout << "enter the Number to make muntiplication of Factors :-  "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    iRet = obj.Print();
    cout << "Addtion of " << iNo << " Facotrs is " << iRet;
    return 0;
}

/*
enter the numer to print even factors :-        36
2       4       6       12      18
*/