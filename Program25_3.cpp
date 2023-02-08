#include <iostream>
using namespace std;

class pattern
{
public:
    void DisplayPattern(char *ch)
    {
        int i = 0, j = 0;
        while (*ch != '\0')
        {
            if (*ch >= 'a' && *ch <= 'z')
            {
                i++;
            }
            else if (*ch >= 'A' && *ch <= 'Z')
            {
                j++;
            }
            ch++;
        }
        cout << i - j << "\t"
             << "(" << i << "-" << j << ")";
    }
};

int main()
{

    char ch[100];

    cout << "Enter Character"
         << "\n";
    // scanf("%[^'\n']s", ch);
    gets(ch);

    pattern pobj;
    pobj.DisplayPattern(ch);
    return 0;
}
