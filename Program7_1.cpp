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

        for (int i = 0; i < ivalue; i++)
        {
            cout << "$    *   ";
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print the $ and *"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print the $ and *
5
$    *   $    *   $    *   $    *   $    *

*/