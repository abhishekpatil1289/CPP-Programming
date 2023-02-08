#include <iostream>
using namespace std;

class pattern
{
public:
    char ch;
    pattern()
    {
        cout << "Enter Character"
             << "\n";
        cin >> ch;
    }

    void DisplayPattern()
    {
        if (ch == 'A' | ch == 'a')
        {
            printf("Your Exam at 7 AM");
        }
        else if (ch == 'B' || ch == 'b')
        {
            printf("Your Exam at 8:30 AM");
        }
        else if (ch == 'C' || ch == 'c')
        {
            printf("Your Exam at 9:20 AM");
        }
        else if (ch == 'D' || ch == 'd')
        {
            printf("Your Exam at 10:30 AM");
        }
    }
};

int main()
{

    pattern pobj;

    pobj.DisplayPattern();
    return 0;
}