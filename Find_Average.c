#include <stdio.h>
int main()
{
    int a, b, c;
    float x;
    printf("Enter three number to find their average.\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    x=(a+b+c)/3;
    printf("The Average value of Entered numbers is %f\n", x);

    return 0;
}