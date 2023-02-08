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
        if (ivalue1 % 2 == 0)
        {
            cout << "number is ever";
        }
        else
        {
            cout << "number is not even";
        }
    }
};

int main()
{
    int iNo1 = 0, iNo2 = 0;
    cout << "enter the number to check is No is even or not "
         << "\n";
    cin >> iNo1;

    PrintStar obj(iNo1);

    obj.Print();

    return 0;
}

/*
enter the number to check is No is even or not
34
number is ever
*/