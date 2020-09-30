#include <stdio.h>
int main(){
	int a, b, max, step, j;
	
	a = 3;
	b = 4;
	j = 0;
	
	if(a < b){
		max = step = a;
	}else{
		max = step = b;
	}
	while(1){
		if(max%a == 0 && max%b == 0){
			j = max;
			break;
		}
		max += step;
	}
	printf("BSCNN = %d", j);
	return 0;
}
