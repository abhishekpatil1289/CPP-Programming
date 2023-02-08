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

        for (int i = 0; i < (ivalue * 2); i++)
        {
            if (ivalue > i)
            {
                cout << "*"
                     << "\t";
            }
            else
            {
                cout << "#"
                     << "\t";
            }
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print * and #"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print * and #
5
*       *       *       *       *       #       #       #       #       #

*/