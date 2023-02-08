#include <iostream>
using namespace std;

class OPERATION
{
public:
    int Rows;
    int Col;

    OPERATION()
    {
        cout << "Enter Rows"
             << "\n";
        cin >> Rows;
        cout << "Enter Rows"
             << "\n";
        cin >> Col;
    }

    void PrintAlpha()
    {
        int iCnt = 1;
        for (int i = 1; i <= Rows; i++)
        {
            for (int j = 1; j <= Col; j++)
            {
                cout << iCnt << "\t";
                iCnt++;
            }
            cout << "\n";
        }
    }
};

int main()
{
    OPERATION obj;

    obj.PrintAlpha();
    PrintAlpha();
    return 0;
}