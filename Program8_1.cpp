#include <iostream>
using namespace std;

class PrintStar
{

public:
    int ivalue = 0;
    PrintStar(int iNo)
    {
        ivalue = iNo;
    }

    void Print()
    {
        if (ivalue < 50)
        {
            cout << "Small";
        }
        else if (ivalue < 100 && ivalue > 50)
        {
            cout << "Medium";
        }
        else if (ivalue > 100)
        {
            cout << "Large";
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to print reverse number"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*
enter the numer to print reverse number
101
Large

enter the numer to print reverse number
65
Medium
*/