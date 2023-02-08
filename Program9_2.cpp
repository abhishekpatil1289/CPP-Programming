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
        cout << "price in Dollor " << ivalue * 70 << "\t";
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the numer to check indian to dollar rate "
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the numer to check indian to dollar rate 
5
price in Dollor 350

*/