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

        for (int i = 10; i != 0; i--)
        {
            cout << ivalue * i << "\t";
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print the reverse table"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print the reverse table
4
40      36      32      28      24      20      16      12      8       4

*/