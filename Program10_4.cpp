#include <iostream>
#include <iomanip>
using namespace std;

class PrintStar
{

public:
    float Fahrenheit = 0;

    PrintStar(float iNo)
    {
        Fahrenheit = iNo;
    }

    void Print()
    {

        float Celcious = 0.0;

        Celcious = (Fahrenheit - 32) * (5.0 / 9.0);
        // cout << setprecision(7);

        cout << Celcious;
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