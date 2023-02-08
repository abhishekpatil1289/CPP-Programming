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

        for (int i = 0; i < iSize; i++)
        {
            int iDigit = 0, iSum = 0;
            while (Arr[i] != 0)
            {
                iDigit = Arr[i] % 10;
                iSum = iSum + iDigit;
                Arr[i] = Arr[i] / 10;
            }
            cout << iSum << "\t";
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