#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int ara[n] = {0}, help[n] = {0};
	int i = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &ara[i]);
	}
	int maxi = 0;
	for(i = 0; i < n; i++){
		if(ara[i] > maxi){
			maxi = ara[i];
		}
	}
	for(i = 0; i < n; i++){
		if(ara[i] == maxi){
			help[i] = 1;
			ara[i] = 0;
		}
	}
	maxi = 0;
	for(i = 0; i < n; i++){
		if(ara[i] > maxi){
			maxi = ara[i];
		}
	}
	for(i = 0; i < n; i++){
		if(ara[i] == maxi){
			help[i] = 2;
			ara[i] = 0;
		}
	}
	maxi = 0;
	for(i = 0; i < n; i++){
		if(ara[i] > maxi){
			maxi = ara[i];
		}
	}
	for(i = 0; i < n; i++){
		if(ara[i] == maxi){
			help[i] = 3;
			ara[i] = 0;
		}
	}

	for(i = 0; i < n; i++){
		if(help[i] == 3){
			printf("%d ", i+1);
		}
	}


	return 0;
}