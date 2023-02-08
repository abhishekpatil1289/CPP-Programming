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

void pattern::SmallestElement()
{
    int iNo = 0;
    int iCnt = 1;
    cout << "Enter the Number to Find index"
         << "\n";
    cin >> iNo;
    while (First != NULL)
    {
        if (First->data == iNo)
        {
            cout << iCnt;
            return;
        }
        iCnt++;
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    pattern obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    obj.SmallestElement();

    return 0;
}
