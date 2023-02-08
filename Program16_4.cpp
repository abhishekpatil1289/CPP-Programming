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

    ~Operations()
    {
        delete[] Arr;
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
        int iCnt = 0, iNo = 0, iNo2 = 0;
        int iCounter = 0;

        cout << "the starting number "
             << "\n";
        cin >> iNo;

        cout << "the ending number "
             << "\n";
        cin >> iNo2;

        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] >= iNo && Arr[i] <= iNo2)
            {
                cout << Arr[i] << "\n";
            }
        }
    }
};

int main()
{

    Operations obj;
    obj.Accept();
    obj.Miltiples();

    return 0;
}