#include <iostream>
using namespace std;

class PrintStar
{

public:
    char ivalue = 0;
    PrintStar(char iNo)
    {
        ivalue = iNo;
    }

    void Print()
    {
        if ((ivalue == 'a' || ivalue == 'e' || ivalue == 'i' || ivalue == 'o' || ivalue == 'u') ||
            (ivalue == 'A' || ivalue == 'E' || ivalue == 'I' || ivalue == 'O' || ivalue == 'U'))
        {
            cout << "Its a Wovel"
                 << "\t";
        }
        else
        {
            cout << "Its not Wovel";
        }
    }
};

int main()
{
    char iNo = 0;
    cout << "enter the Letter to convert :-  "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print even factors :-        36
2       4       6       12      18
*/