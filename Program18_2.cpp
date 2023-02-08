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
        // char ch = 'A';
        for (int i = iSize; i > 0; i--)
        {
            printf("%d   #   ", i);
            // ch++;
        }
    }
};

int main()
{
    OPERATION obj;

    obj.PrintAlpha();
    return 0;
}