#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue1 = 0, ivalue2 = 0;

    void SumOfEvenOdd(int Arr[], int iSize)
    {
        int Even = 0, Odd = 0;
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] % 2 == 0)
            {
                Even = Even + Arr[i];
            }
            else
            {
                Odd = Odd + Arr[i];
            }
        }
        cout << Even - Odd << "  (" << Even << " - " << Odd << ")";
    }
};

int main()
{
    int *Arr, iNo2 = 0;
    cout << "How many numbers you want to store"
         << "\n";
    cin >> iNo2;

    Arr = new int[iNo2];

    cout << "enter the numbers";

    for (int i = 0; i < iNo2; i++)
    {
        cin >> Arr[i];
    }

    PrintStar obj;

    obj.SumOfEvenOdd(Arr, iNo2);

    return 0;
}

/*



*/