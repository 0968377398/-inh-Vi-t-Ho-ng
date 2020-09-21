#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,p;
	printf("Nhap lan luot 3 canh a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	p=(a+b+c)/2;
	(a+b>=c&&b+c>=a&&a+c>=b)?printf("Chu vi tam giac la: %d/nDien tich tam giac la: %d" ,a+b+c,sqrt(p*(p-a)*(p-b)*(p-c))):printf("3 canh vua nhap khong la tam giac");
}
