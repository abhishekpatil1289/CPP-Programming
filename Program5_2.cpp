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

        for (int i = ivalue / 2; i >= 0; i--)
        {
            if (ivalue % i == 0)
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
enter the numer to print even factors :-        12
6       4       3       2       1

enter the numer to print even factors :-        13
1

enter the numer to print even factors :-        10
5       2       1
*/