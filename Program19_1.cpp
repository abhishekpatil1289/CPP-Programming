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
        for (int i = 0; i < Rows; i++)
        {
            for (int j = 0; j < Col; j++)
            {
                cout << "*"<< "\t";
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