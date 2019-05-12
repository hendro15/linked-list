#include <iostream>
#include "MemberFunction.h"
using namespace std;

int main()
{
    insertAtFront(1);
    insertAtFront(10);
    insertAtFront(2);

    insertAtBack(3);
    insertAtBack(11);
    insertAtFront(15);

    removeFromBack();
    removeFromBack();
    removeFromFront();
    return 0;
}
