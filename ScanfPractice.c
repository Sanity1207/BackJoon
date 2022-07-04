#include <stdio.h>

int main(){
	int result;
	int num1,num2,num3;
	
	printf("세 개의 정수 입력\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	result=num1+num2+num3;
	printf("Answer = %d",result);
	
	return 0;
}
