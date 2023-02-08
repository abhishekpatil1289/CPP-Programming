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

    void Largest()
    {
        int iNo = Arr[0];
        int iNo2 = Arr[0];
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] < iNo)
            {
                iNo = Arr[i];
            }
            if (Arr[i] > iNo2)
            {
                iNo2 = Arr[i];
            }
        }
        cout << "Difference No is " << iNo << " - " << iNo2 << "(" << iNo2 - iNo << ")";
    }
};

int main()
{
    OPERATION obj;

    obj.Accept();
    obj.Largest();
    return 0;
}