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
        switch (ivalue)
        {
        case 9:
            printf("NINE");
            break;

        case 8:
            printf("EIGHT");
            break;

        case 7:
            printf("SAVEN");
            break;

        case 6:
            printf("SIX");
            break;

        case 5:
            printf("FIVE");
            break;

        case 4:
            printf("FOUR");
            break;

        case 3:
            printf("THREE");
            break;

        case 2:
            printf("TWO");
            break;

        case 1:
            printf("ONE");
            break;

        default:
            printf("Invalid Entry");
            break;
        }
    }
};

int main()
{
    int iNo = 0;
    cout << "enter the number to print its speeling"
         << "\n";
    cin >> iNo;

    PrintStar obj(iNo);

    obj.Print();

    return 0;
}

/*

enter the number to print its speeling
9
NINE
*/