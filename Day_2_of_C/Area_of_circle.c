#include <stdio.h>
int main()
{
    float r, a;
    printf("Enter the radius of circle.\n");
    scanf("%f", &r);

    a = 3.14 * r * r;

    printf("Area of circle = %.2f", a);

    return 0;

}