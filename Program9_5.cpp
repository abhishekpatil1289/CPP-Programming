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
        int iMult = 1;
        int iMult2 = 1;
        for (int i = 1; i <= ivalue; i++)
        {
            if (i % 2 != 0)
            {
                iMult = iMult * i;
            }
            if (i % 2 == 0)
            {
                iMult2 = iMult2 * i;
            }
        }

        cout << iMult2 - iMult;
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print multiplcation of odd number up to N "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print multiplcation of odd number up to N
10
945
*/