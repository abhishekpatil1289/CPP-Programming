#include <iostream>
using namespace std;

class pattern
{
public:
    void DisplayPattern(char ch[])
    {
        int i = 0;
        while (ch[i] != '\0')
        {
            if (ch[i] >= '0' && ch[i] <= '9')
            {
                cout << ch[i];
            }
            i++;
        }
    }
};

int main()
{

    char ch[100];

    cout << "Enter Character"
         << "\n";
    scanf("%[^'\n']s", ch);
    // gets(ch);

    pattern pobj;
    pobj.DisplayPattern(ch);
    return 0;
}
