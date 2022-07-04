#include <stdio.h>


int main(){
	int i;
	
	
	for(i=1;i<=100;i++){
		
		if(i%7==0 && i%9==0){
			continue;
		}else{
			if(i%7==0){
				printf("%d\n",i);
			}
			else if(i%9==0){
				printf("%d\n",i);
			}
			
		}
	}
	return 0;
}
