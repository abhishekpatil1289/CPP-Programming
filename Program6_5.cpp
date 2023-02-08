#include <iostream>
using namespace std;

class PrintStar
{

public:
    float ivalue = 0;
    float ivalue2 = 0;

    PrintStar(float iNo, float iNo2)
    {
        ivalue = iNo;
        ivalue2 = iNo2;
    }

    float iRet = 0.0f;
    void Print()
    {
        if (ivalue > ivalue2 || ivalue2 == 0)
        {
            printf("Wrong Data Enter");
            return;
        }
        iRet = ivalue / ivalue2 * 100;
        printf("  %0.1f%%", iRet);
        // cout << iRet;
    }
};

int main()
{
    float iNo = 0, iNo2 = 0;
    printf("How many marks of the paper was => ");
    cin >> iNo;

    printf("Total marks you obtain => ");
    cin >> iNo2;

    PrintStar obj(iNo2, iNo);

    obj.Print();
    return 0;
}

/*
How many marks of the paper was => 100
Total marks you obtain => 84
  84.0%
*/