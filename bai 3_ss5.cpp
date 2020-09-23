#include <stdio.h>
int main(){
	int a,b,ucln;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	for (int i=1;i<=a || i<=b;i++){
		if(a%i==0 && b%i==0){
			ucln=1;
		}
	}
	printf("Uoc chung lon nha cua a va b la: %d",ucln);
	return 0;
}
