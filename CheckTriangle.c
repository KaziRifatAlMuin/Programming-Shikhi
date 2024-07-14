#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) printf("This is a Equilateral Triangle!\n");
    else if(a == b || b == c || c == a) printf("This is a Isosceles Triangle!\n");
    else printf("This is a Isosceles Scalene!\n");
    return 0;
}