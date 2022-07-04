#include <stdio.h>


int main(){
	int num,num2;
	num = Add(1,2);
	
	printf("%d\n",num);
	
	num2 = GetNum();
	return 0;
	
}


int Add(int num1, int num2){
	
	return num1 + num2;
}

int ShowAddResult(int num1, int num2){
	printf("%d",num1+num2);
	
}

int GetNum(){
	int num;
	printf("숫자를 입력하세요 : ");
	
	scanf("%d",&num);
	return num;	
}
