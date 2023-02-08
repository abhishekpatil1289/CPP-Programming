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

        for (int i = 1; i <= 10; i++)
        {
            cout << ivalue * i << "\t";
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print the table"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print the table
5
5       10      15      20      25      30      35      40      45      50

*/