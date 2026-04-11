#include <stdio.h>
int main()
{
    int l, b, x;
    
    printf("Enter the length and breadth of rectangle\n");
    scanf("%d\n %d", &l, &b);
    x=l*b;
    printf("Area of rectangle is %d", x);
    
    return 0;
}