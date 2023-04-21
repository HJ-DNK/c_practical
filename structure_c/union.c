#include <stdio.h>
union st
{
    int j;
    char name[12];
    float m;
};
void main()
{
    union st d;
    printf("%d\n", sizeof(union st));
}