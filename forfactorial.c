#include <stdio.h>

int main(){
	int i, num1;
	int total = 1;
	
	
	printf("팩토리얼  정수를 입력하세요 : ");
	scanf("%d",&num1);
	
	
	for(i=num1;i>0;i--){
		
		total *= i;
		
	} 
	
	printf("%d 의 팩토리얼은 %d 입니다.",num1, total);
	
	return 0;	
}
