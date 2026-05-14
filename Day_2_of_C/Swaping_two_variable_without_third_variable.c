#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two Numbers.\n");
    scanf("%d %d", &a, &b);

    printf("Before swaping the numbers.\n");
    printf("A = %d\nB = %d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swaping the number\n");
    printf("A = %d\nB = %d\n", a, b);

    return 0;
}