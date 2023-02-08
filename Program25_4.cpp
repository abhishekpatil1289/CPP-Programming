#include <iostream>
using namespace std;

class pattern
{
public:
    void DisplayPattern(char *ch)
    {
        while (*ch != '\0')
        {
            if (*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' || *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
            {
                cout << "True";
                return;
            }
            ch++;
        }
        cout << "False";
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
