#include <stdio.h>

int main(){
	int num = 10;
	int sz1 = sizeof num; //sizeof 는 함수가 아닌 연산자이다. 
	
	printf("sz of int : %d\n",sz1); 
	printf("size of double : %d\n",sizeof(double));
	printf("size of float : %d\n", sizeof(float));
	printf("size of long : %d\n",sizeof(long)); 
	
	
	 
}
