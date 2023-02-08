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
        int iCnt = 0, iNo = 0;
        cout << "which number you want to find"
             << "\n";
        cin >> iNo;
        
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] == iNo)
            {
                iCnt++;
            }
        }
        cout << iCnt;
    }
};

int main()
{

    Operations obj;
    obj.Accept();
    obj.Miltiples();

    return 0;
}