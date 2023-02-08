#include <iostream>
#include <iomanip>
using namespace std;

class PrintStar
{

public:
    float Area = 0;

    PrintStar(float iNo)
    {
        Area = iNo;
    }

    void Print()
    {
        float SquareFeet = 0;

        SquareFeet = Area * 0.0929;
        cout << setprecision(7);

        cout << SquareFeet;
    }
};

int main()
{
    float iNo = 0;
    cout << "enter the temperature "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the temperature
10
-12.2222

*/