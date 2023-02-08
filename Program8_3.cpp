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
        int isum = 1;
        for (int i = 1; i <= ivalue; i++)
        {
            isum = isum * i;
        }
        cout << isum;
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print multiplication of Facotrs"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print multiplication of Facotrs
5
120

*/