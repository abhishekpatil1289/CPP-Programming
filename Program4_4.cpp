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
        if (ivalue < 0)
        {
            ivalue = -ivalue;
        }
        int iSum = 0;
        for (int i = 1; i <= ivalue; i++)
        {
            if (ivalue % i != 0)
            {
                iSum = iSum + i;
            }
        }
        return iSum;
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

    iRet = obj.Print();
    cout << iRet;
    return 0;
}

/*
enter the numer to print Sum of all non Factor :-   12

50

enter the numer to print Sum of all non Factor :-   10

37
*/