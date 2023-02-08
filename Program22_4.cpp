#include <iostream>
using namespace std;

class pattern
{
public:
    int iNo1 = 0;
    int iNo2 = 0;
    pattern()
    {
        cout << "Enter Number of Rows"
             << "\n";
        cin >> iNo1;

        cout << "Enter Number of Columns"
             << "\n";
        cin >> iNo2;
    }

    void DisplayPattern()
    {
        int iCnt = 1;
        for (int i = 1; i <= iNo1; i++)
        {
            for (int j = 1; j <= iNo2; j++)
            {
                if ((i == 1 || i == iNo1) || (j == 1 || j == iNo2))
                {
                    cout << "#"
                         << "\t";
                }
                else
                {
                    cout << "@"
                         << "\t";
                }
            }
            cout << "\n";
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}