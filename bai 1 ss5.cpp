#include<stdio.h>
int main(){
	int n,s;
	printf("Nhap n:");
	scanf("&d",&n);
	s=0;
	for(int i=1;i<=n;i++){
		s+=1;
	}
	printf("Tong S la %d",s);
}
