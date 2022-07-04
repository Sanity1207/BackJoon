#include <stdio.h>

int main(){
	int num=0, answer = 0;
	int divnum;
	double avg; 
	
	printf("입력하실 정수의 개수를 입력하세요 : ");
	scanf("%d",&num);
	divnum = num;
	
	while(num>0){
		int temp;		
		printf("%d 번째 정수를 입력하세요 : ",num);
		scanf("%d", &temp);		
		answer += temp;		
		num--;
	}
	printf("answer : %d",answer);
	printf("divnum = %d",divnum);
	avg = answer /(double)divnum;
	printf("average : %lf",avg);
}
