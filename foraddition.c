#include <stdio.h>

int main(){
	int i, num1, num2;
	int total = 0;
	
	
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d",&num1);
	
	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d",&num2);
	
	for(i=num1;i<=num2;i++){
		
		total += i;
		
		
	}
	
	printf("덧셈 결과 : %d", total);
	return 0;
}
