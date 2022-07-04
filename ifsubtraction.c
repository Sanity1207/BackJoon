#include <stdio.h>

int main(){
	
	int num1, num2, sub;
	
	
	printf("두 수의 차를 구하는 프로그램입니다.\n");
	
	printf("첫 번째 수를 입력하세요 : ");
	scanf("%d",&num1);
	
	
	printf("두  번째 수를 입력하세요 : ");
	scanf("%d",&num2);
//	
//	if(num1>num2){
//		
//		sub = num1 - num2;
//		
//	}else{
//		sub = num2 - num1;
//	}

	sub = (num1>num2)?num1-num2:num2-num1;
	
	printf("두 수의 차는 %d 입니다. ",sub);
	
	return 0;
}

