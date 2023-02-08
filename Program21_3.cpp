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
        char ch = 'a';
        int iCnt = 1;
        for (int i = 0; i < iNo1; i++)
        {
            for (int j = 0; j < iNo2; j++)
            {
                if (i % 2 != 0)
                {
                    cout << iCnt++ << "\t";
                }
                else
                {
                    cout << ch++ << "\t";
                }
            }
            ch = 'a';
            iCnt = 1;
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