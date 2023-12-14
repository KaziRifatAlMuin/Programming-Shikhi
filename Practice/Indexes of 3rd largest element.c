#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int ara[n];
	int i = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &ara[i]);
	}
	printf("%d\n", n);
	return 0;
}