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
        for (int i = 1; i <= ivalue; i++)
        {
            if (i % 2 == 0)
            {
                iMult = iMult * i;
            }
        }
        cout << iMult;
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to find Multiplication of all even numbers upto N"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to find Multiplication of all even numbers upto N
10
3840

*/