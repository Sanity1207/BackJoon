#include <stdio.h>



int main(){
	
	int num,i;
	
	printf("1 이상의 수를 입력하세요 : ");
	scanf("%d",&num);
	
	for(i=1;i<num+1;i++){
		printf("%d\t", Pivo(i));
	}
	return 0; 	
	
}

int Pivo(int num){
	
	//num = 수의 개수.
	
	if(num==1){
		return 0;
	}else if(num==2){
		return 1;
		
	}else{
		return Pivo(num-1) + Pivo(num-2);
	}
	
}
