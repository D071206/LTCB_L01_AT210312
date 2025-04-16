#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap so ");
	scanf("%d",&n);
	int i;
	int giaithua=1;
	for(i=1;i<=n;i++){
		giaithua *= i;
	}
	printf("n! = %d\n",giaithua);
	return 0;
}