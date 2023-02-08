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
        if (ivalue < 0) // Filter
        {
            ivalue = -ivalue;
        }

        for (int i = ivalue; i > 0; i--)
        {
            cout << i << '\t';
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
4
4       3       2       1
*/