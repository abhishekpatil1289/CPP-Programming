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

int Add(int iNo)
{
    int temp = iNo;
    int iDigit = 0;
    int Rev = 1;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            iDigit = 1;
        }
        Rev = Rev * iDigit;
        iNo = iNo / 10;
    }
    cout << "| " << Rev << " |";
}

void pattern::SmallestElement()
{
    int iCnt = First->data;
    int Second = First->data;
    int iSum = 0;
    while (First != NULL)
    {
        Add(First->data);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    pattern obj;

    obj.InsertFirst(551);
    obj.InsertFirst(6);
    obj.InsertFirst(11);
    obj.InsertFirst(151);
    obj.InsertFirst(101);
    obj.InsertFirst(28);

    obj.Display();
    obj.SmallestElement();

    return 0;
}
