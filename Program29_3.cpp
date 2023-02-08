#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class pattern
{
public:
    PNODE First;
    int iCount;

    pattern();

    void InsertFirst(int iNo);
    void SmallestElement();

    void Display();
};

pattern::pattern()
{
    First = NULL;
    iCount = 0;
}

void pattern::InsertFirst(int iNo)
{
    PNODE newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

void pattern::Display()
{
    PNODE temp = First;
    while (temp != NULL)
    {
        cout << "| " << temp->data << " |";
        temp = temp->next;
    }
    cout << "\n";
}

// bool AddEven(int iNo)
// {
//     int iSum = 0;
//     bool Flag = true;
//     for (int i = 1; i <= (iNo / 2); i++)
//     {
//         if (iNo % i == 0)
//         {
//             return false;
//         }
//     }
//     return Flag;
// }

void pattern::SmallestElement()
{
    PNODE temp = First;
    int iSum = 0;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            iSum = iSum + temp->data;
        }
        temp = temp->next;
    }
    cout << iSum;
}

int main()
{
    PNODE Head = NULL;

    pattern obj;

    obj.InsertFirst(551);
    obj.InsertFirst(6);
    obj.InsertFirst(11);
    obj.InsertFirst(101);
    obj.InsertFirst(28);
    obj.InsertFirst(151);

    obj.Display();
    obj.SmallestElement();

    return 0;
}
