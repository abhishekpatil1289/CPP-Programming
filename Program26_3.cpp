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
            if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                ch[i] = ch[i] - 32;
            }
            else if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                ch[i] = ch[i] + 32;
            }
            i++;
        }
        cout << ch;
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
