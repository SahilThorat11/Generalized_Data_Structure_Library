#include "../include/gdsl.h"

int main()
{
    SinglyLLL<int> sobj;

    sobj.InsertFirst(10);
    sobj.InsertFirst(20);
    sobj.InsertFirst(30);

    sobj.Display();

    return 0;
}