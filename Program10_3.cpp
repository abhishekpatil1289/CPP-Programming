#include <iostream>
#include <iomanip>
using namespace std;

class PrintStar
{

public:
    int kilometer = 0;
    int Distance = 0;

    PrintStar(int iNo)
    {
        Distance = iNo;
    }

    void Print()
    {
        kilometer = 1000;

        int Area = 0;

        Area = Distance * kilometer;
        cout << setprecision(7);

        cout << Area;
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the Distance to calculate in kilometers "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the Distance to calculate in kilometers
5
5000

*/