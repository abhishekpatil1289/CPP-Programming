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

bool AddEven(int iNo)
{
    int iSum = 0;
    for (int i = 1; i <= (iNo / 2); i++)
    {
        if (iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return (iSum == iNo);
    iSum = 0;
}

void pattern::SmallestElement()
{
    PNODE temp = First;

    while (temp != NULL)
    {
        if (AddEven(temp->data) == true)
        {
            cout << "| " << temp->data << " |";
        }
        temp = temp->next;
    }
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
