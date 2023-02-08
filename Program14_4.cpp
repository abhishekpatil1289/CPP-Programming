#include <iostream>
using namespace std;

class PrintStar
{
public:
    int *Arr;
    int iSize;

    PrintStar()
    {
        cout << "How many Element you want to store in array"
             << "\n";
        cin >> iSize;
        Arr = new int[iSize]; // Arr = (int *)malloc(iSize * sizeof(int));
    }

    void Accept()
    {
        cout << "Enter the elements in array : "
             << "\n";

        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt]; // scanf("%d",&Arr[iCnt]);
        }
    }

    void Differenc()
    {
        int iEven = 0, iOdd = 0;
        for (int i = 0; i < iSize; i++)
        {
            if ((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))
            {
                cout << Arr[i] << "\t";
            }
        }
    }
};

int main()
{
    PrintStar obj;

    obj.Accept();
    obj.Differenc();

    return 0;
}