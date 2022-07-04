#include <stdio.h>

int main(){
	
	int num1;
	char char1;
	printf("정수를 입력하세요(-128 이상 127 이하) : ");
	scanf("%d",&num1);
	
	printf("입력하신 정수를 아스키 코드로 변환하면 %c 입니다.",num1);
	getchar(); 
	
	printf("문자를 하나 입력하세요 : ");
	scanf("%c",&char1);
	printf("입력하신 문자를 정수로 변환하면 %d 입니다.",char1);
}
