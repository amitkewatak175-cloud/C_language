#include <stdio.h>
int main()
{
    int a, b;
    float result;
    
    printf("Enter the value of A and B\n");
    scanf("%d %d", &a, &b);
    result = a/b;

    printf("Result without type conversion: %.2f\n", result);

    result = (float)a/b;

    printf("Result with type conversion: %.2f\n", result);

    return 0;

}