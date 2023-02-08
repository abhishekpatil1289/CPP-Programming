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
        char ch = 'A';
        for (int i = 1; i <= iSize; i++)
        {
            printf("%c", ch);
            ch++;
        }
    }
};

int main()
{
    OPERATION obj;

    obj.PrintAlpha();
    return 0;
}