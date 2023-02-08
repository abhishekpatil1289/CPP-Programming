#include <iostream>
using namespace std;

class pattern
{
public:
    void DisplayPattern(char *ch)
    {
        int i = 0;
        while (*ch != '\0')
        {
            if (*ch >= 'A' && *ch <= 'Z')
            {
                i++;
            }
            ch++;
        }
        cout << i;
    }
};

int main()
{

    char ch[20];

    cout << "Enter Character"
         << "\n";
    // cin >> ch;
    // scanf("%[^'\n']s", ch);
    gets(ch);
    cout << ch;
    pattern pobj;
    pobj.DisplayPattern(ch);
    return 0;
}
