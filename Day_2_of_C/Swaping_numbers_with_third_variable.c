#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the two numbers.\n");
    scanf("%d %d", &a, &b);

    printf("Before swaping the numbers.\n");
    printf("A = %d\nB = %d\n", a, b);

    c=a;
    a=b;
    b=c;

    printf("After swaping the numbers.\n");
    printf("A = %d\nB = %d\n", a, b);

    return 0;

}