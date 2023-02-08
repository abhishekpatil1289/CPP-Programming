#include <iostream>
#include <iomanip>
using namespace std;

class PrintStar
{

public:
    float Weight = 0;
    float Height = 0;

    PrintStar(float iNo, float iNo2)
    {
        Weight = iNo;
        Height = iNo2;
    }

    void Print()
    {

        float Area = 0;

        Area = Weight * Height;
        cout << setprecision(7);

        cout << Area;
    }
};

int main()
{
    float iNo = 0, iNo2 = 0;
    cout << "enter the Weight "
         << "\n";
    cin >> iNo;

    cout << "enter the Height "
         << "\n";
    cin >> iNo2;

    PrintStar obj(iNo, iNo2);

    obj.Print();

    return 0;
}

/*

enter the Weight
5.3
enter the Height
9.78
51.834

*/