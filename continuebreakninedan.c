#include <stdio.h>

int main(){
	
	int i,j;
	
	for(i=1;i<=9;i++){//�ٱ��� 
		if(i%2){
			continue;
		}
		for(j=1;j<=9;j++){//���� ��  
		
			if(i<j){break;}
			printf("%d * %d = %2d\n", i,j,i*j);	
			
			 
		}
		
	}
}
