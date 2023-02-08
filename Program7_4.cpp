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
        for (int i = 0; i < ivalue; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << "\t";
            }
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print odd numbers upto n"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print odd numbers upto n
18
1       3       5       7       9       11      13      15      17  

*/