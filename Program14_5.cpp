#include <iostream>
using namespace std;

class Operations
{
public:
    int *Arr;
    int iSize;
    Operations()
    {
        cout << "How many Element you want to store in Array"
             << "\n";
        cin >> iSize;
        Arr = new int[iSize];
    }

    void Accept()
    {
        cout << "Element the element in array:-"
             << "\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }

    void Miltiples()
    {
        Accept();

        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] % 11 == 0)
            {
                cout << Arr[i] << "\t";
            }
        }
    }
};

int main()
{

    Operations obj;

    obj.Miltiples();

    return 0;
}