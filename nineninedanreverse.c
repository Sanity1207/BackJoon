#include <stdio.h>

int main(){
	int dan = 0;
	int num = 1;
	
	printf("몇 단을 출력할까요? : ");
	
	scanf("%d",&dan);
	
	while(num<10){
		printf("%d x %d = %d\n",dan,10-num++,dan*(10-num));
		
	}
	return 0;	
}
