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
        char ch = 'A';
        char chs = 'a';
        for (int i = 1; i <= Rows; i++)
        {

            for (int j = 1; j <= Col; j++)
                if (i % 2 != 0)
                {
                    cout << ch << "\t";
                    ch++;
                }
                else
                {
                    cout << chs << "\t";
                    ch++;
                }
            ch = 'A';
            chs = 'a';
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