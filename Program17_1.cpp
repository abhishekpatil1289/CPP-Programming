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
             << "\t";
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
            if (Arr[i] > iNo)
            {
                iNo = Arr[i];
            }
        }
        cout << "Largest No is " << iNo;
    }
};

int main()
{
    OPERATION obj;

    obj.Accept();
    obj.Largest();
    return 0;
}