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
            if (*ch >= 'a' && *ch <= 'z')
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
    // scanf("%[^'\n']s", ch);
    gets(ch);

    pattern pobj;
    pobj.DisplayPattern(ch);
    return 0;
}
