#include <stdio.h>
int main()
{
    int a=10;
    printf("The value of A is %d.\n", a);
    a = ++a;
    printf("The value of A is %d.\n", a);
    a = --a;
    printf("The value of A is %d.\n", a);
    a += 5;
    printf("The value of A is %d.\n", a);
    a -= 5;
    printf("The value of A is %d.\n", a);
    a *= 5;
    printf("The value of A is %d.\n", a);

    return 0;
}