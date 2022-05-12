#include <stdio.h>
int main()
{
    int x = 5;
    int y = 10;
    int *p;
    p = &x;
    printf("Address of x =%d\n", *p);
    return 0;
}