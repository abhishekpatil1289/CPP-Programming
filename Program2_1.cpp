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
        for (int i = 0; i < ivalue; i++)
        {
            cout << "*"
                 << "\t";
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
enter the numer to print the star
5
*       *       *       *       *
*/