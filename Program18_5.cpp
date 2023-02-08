#include <iostream>
using namespace std;

class OPERATION
{
public:
    int iSize;

    OPERATION()
    {
        cout << "Enter numbers"
             << "\n";
        cin >> iSize;
    }

    void PrintAlpha()
    {
        for (int i = 1; i <= iSize; i++)
        {
            printf("   %d   ", i * 2);
        }
    }
};

int main()
{
    OPERATION obj;

    obj.PrintAlpha();
    return 0;
}