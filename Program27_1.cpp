#include <iostream>
using namespace std;

class pattern
{
public:
    void DisplayPattern(char ch[], char Character)
    {
        int i = 0;
        while (ch[i] != '\0')
        {
            if (ch[i] == Character)
            {
                cout << "TRUE";
                return;
            }
            i++;
        }
        cout << "False";
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

    cout << "enter word to fing"
         << "\n";
    cin >> i;

    pattern pobj;
    pobj.DisplayPattern(ch, i);
    return 0;
}