#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c) printf("%d is Maximum\n", a);
    else if(b >= a && b >= c) printf("%d is Maximum\n", b);
    else printf("%d is Maximum\n", c);
}