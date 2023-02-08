#include <iostream>
using namespace std;

class OPERATION
{
public:
    int *Arr;
    int iSize;

    OPERATION()
    {
        cout << "How many numbers you wnt to store"
             << "\n";
        cin >> iSize;
        Arr = new int[iSize];
    }

    void Accept()
    {
        cout << "Enter the Elements "
             << "\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }

    int Count(int iNo)
    {
        int iDigit = 0, iCnt = 0;
        while (iNo != 0)
        {
            iCnt++;
            iDigit = iNo % 10;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    void Largest()
    {
        int iNo = Arr[0];
        int iNo2 = Arr[0];
        for (int i = 0; i < iSize; i++)
        {
            if (Count(Arr[i]) == 3)
            {
                cout << Arr[i] << "\t";
            }
        }
    }
};

int main()
{
    OPERATION obj;

    obj.Accept();
    obj.Largest();
    return 0;
}