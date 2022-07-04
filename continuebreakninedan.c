#include <stdio.h>

int main(){
	
	int i,j;
	
	for(i=1;i<=9;i++){//바깥단 
		if(i%2){
			continue;
		}
		for(j=1;j<=9;j++){//내부 단  
		
			if(i<j){break;}
			printf("%d * %d = %2d\n", i,j,i*j);	
			
			 
		}
		
	}
}
