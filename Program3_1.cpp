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
        for (int i = 0; i < (ivalue * 2); i = i + 2)
        {
            cout << i + 2 << "\t";
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
enter the numer to print even factors :-        17
2       4       6       8       12      14
*/