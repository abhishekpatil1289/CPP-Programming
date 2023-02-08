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
        int iCnt2 = -1;
        for (int i = 0; i < iNo1; i++)
        {
            for (int j = 0; j < iNo2; j++)
            {
                if (i % 2 != 0)
                {
                    cout << iCnt2-- << "\t";
                }
                else
                {
                    cout << iCnt++ << "\t";
                }
            }
            iCnt = 1;
            iCnt2 = -1;
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