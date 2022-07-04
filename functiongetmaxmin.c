#include <stdio.h>
int GetMax(int num1, int num2, int num3);
int GetMin(int num1, int num2, int num3);
int main(){
	int num1, num2, num3;
	
	printf("정수 세 개를 입력하세요 : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("최대값 : %d\n",GetMax(num1,num2,num3));
	printf("최솟값 : %d\n",GetMin(num1,num2,num3));
	
}

int GetMax(int num1, int num2, int num3){
	
	if(num1>num2){
		
		if(num1>num3){
			return num1;
		}
		
	}else{
		if(num2>num3){
			return num2;
		}else{
			return num3;
		}
		
	}
	
}

int GetMin(int num1, int num2, int num3){
	
	if(num1<num2){
		if(num1<num3){
			return num1;
		}else{
			return num3;
		}
		
	}else{
		if(num2<num3){
			return num2;
		}else{
			return num3;
		}
	}
	
	
}
