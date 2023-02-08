#include <iostream>
#include <iomanip>
using namespace std;

class PrintStar
{

public:
    float Radius = 0;

    PrintStar(float iNo)
    {
        Radius = iNo;
    }

    void Print()
    {
        float PI = 3.14;
        float Area = 0.00;

        Area = PI * Radius * Radius;
        cout << setprecision(7);

        cout << Area;
    }
};

int main()
{
    float iNo = 0;
    cout << "enter the numer to print multiplcation of odd number up to N "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to print multiplcation of odd number up to N
10.4
339.6224

*/