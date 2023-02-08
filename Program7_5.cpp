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
        int temp = ivalue;
        for (int i = 1; i <= 5; i++)
        {
            cout << ivalue * i << "\t";
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print reverse number"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print reverse number
5
5   10  15  20  25
*/