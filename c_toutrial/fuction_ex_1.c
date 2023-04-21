#include <stdio.h>
int fun();
void main()
{
    for (fun(); fun(); fun())
        printf("%d ", fun());
}

int fun()
{
    static int num = 16;
    return num--;
}
