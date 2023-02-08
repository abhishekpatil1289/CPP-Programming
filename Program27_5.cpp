#include <iostream>
using namespace std;

class pattern
{
public:
    void DisplayPattern(char *ch)
    {
        char *end = ch;
        char *start = ch;
        char temp = '\0';

        while (*end != '\0')
        {
            end++;
        }

        end--;

        while (start < end)
        {
            temp = *start;
            *start = *end;
            *end = temp;

            start++;
            end--;
        }

        cout << ch;
    }
};

int main()
{

    char ch[100];
    char i;

    cout << "Enter Character"
         << "\n";
    // scanf("%[^'\n']s", ch);
    gets(ch);

    pattern pobj;
    pobj.DisplayPattern(ch);
    return 0;
}
