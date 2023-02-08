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

        for (int i = 1; i <= ivalue; i++)
        {
            if (ivalue % i != 0)
            {
                cout << i << "\t";
            }
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print non factors :-"
         << "\t";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print non factors :-        10
3       4       6       7       8       9

enter the numer to print non factors :-        13
2       3       4       5       6       7       8       9       10      11      12

enter the numer to print non factors :-        12
5       7       8       9       10      11
*/