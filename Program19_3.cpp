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
        for (int i = 1; i <= Col; i++)
        {
            for (int j = Rows; j >= 1; j--)
            {
                cout << j << "\t";
            }
            cout << "\n";
        }
    }
};

int main()
{
    OPERATION obj;

    obj.PrintAlpha();
    return 0;
}