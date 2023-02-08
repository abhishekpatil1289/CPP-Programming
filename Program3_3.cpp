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
        if (ivalue < 0)
        {
            ivalue = -ivalue;
        }

        for (int i = 1; i <= (ivalue / 2); i++)
        {
            if (i % 2 == 0 && ivalue % i == 0)
            {
                cout << i << "\t";
            }
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print even factors :-"
         << "\t";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print even factors :-        36
2       4       6       12      18
*/