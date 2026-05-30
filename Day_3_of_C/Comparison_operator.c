#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of A and B.\n");
    scanf("%d\n%d", &a, &b);
    printf("%d.\n", a>b);
    printf("%d.\n", a<b);
    printf("%d.\n", a>=b);
    printf("%d.\n", a<=b);
    printf("%d.\n", a==b);
    printf("%d.\n", a!=b);
}