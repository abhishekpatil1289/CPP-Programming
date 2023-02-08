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
        if (ivalue > 0)
        {
            int temp = ivalue;
            temp = -temp;
            for (int i = ivalue; i >= temp; i--)
            {
                cout << i << '\t';
            }
        }
        //          -5  < 0
        else if (ivalue < 0)
        {
            //  -5   = -5
            int temp = ivalue;

            if (ivalue < 0)
            {
                ivalue = -ivalue;
            }

            for (int i = temp; i <= ivalue; i++)
            {
                cout << i << '\t';
            }
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print reverse number"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print reverse number
-5
-5      -4      -3      -2      -1      0       1       2       3       4       5

enter the numer to print reverse number
5
5       4       3       2       1       0       -1      -2      -3      -4      -5
*/