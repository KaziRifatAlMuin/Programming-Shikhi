#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int d = 0, sum = 0;
	while(n){
		d = n % 10;
		sum += d;
		n /= 10;
	}
	printf("%d\n", sum);
	
	return 0;
}