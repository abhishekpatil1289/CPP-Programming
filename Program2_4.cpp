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
        for (int i = 0; i < ivalue1; i++)
        {
            cout << ivalue2 << "\t";
        }
    }
};

int main()
{
    int iNo1 = 0, iNo2 = 0;
    cout << "enter the numer to print by times"
         << "\n";
    cin >> iNo1;

    cout << "enter the numer to print"
         << "\n";
    cin >> iNo2;

    PrintStar obj(iNo1, iNo2);

    obj.Print();

    return 0;
}

/*
enter the numer to print by times
7
enter the numer to print
2
2       2       2       2       2       2       2
*/