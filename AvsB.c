#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if(m > n) printf("%d\n", m - n);
    else printf("0\n");
    return 0;
}