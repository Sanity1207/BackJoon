#include <stdio.h>

int main(){
	int num = 0;
	int count = 1;
	
	printf("몇 개 출력할까요? : ");
	scanf("%d",&num); 
	
	while(count<=num){
		printf(" %d 번째 3의 배수 : %d\n",count++, count*3);		
	}
	
}
