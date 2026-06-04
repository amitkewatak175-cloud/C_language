#include <stdio.h>
int main()
{
    int a, b, c, result;
    printf("Enter the value of A, B and C.\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    result = a + b * c;
    printf("Result = %d.\n", result);

    return 0;
}