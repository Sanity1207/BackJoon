#include <stdio.h>

double CelToFah(double cel);
double FahToCel(double fah);
int main(){
	
	while(1){
		int choice;
		double temp;
	
	
		printf("1. Cel --> Fah\n2. Fah --> Cel\n" );
		scanf("%d",&choice);
		
		if(choice == 1){
			printf("input Celcius : ");
			getchar();
			scanf("%lf",&temp);
			printf("Farenheit : %lf",CelToFah(temp));
			break;
		}else if(choice==2){
			printf("Input Farenheit : ");
			getchar();
			scanf("%lf",&temp);
			printf("Celcius : %lf",FahToCel(temp));
			break;
		}else if(choice == 0){
			break;
		}else{
			printf("Wrong input!!\n\n");
			continue;
		}
		
	
		
		
	}
		return 0;
	 
	
}

double CelToFah(double cel){
	
	return (1.8*cel +32);
}

double FahToCel(double fah){
	
	
	return (fah-32)/(1.8);
}
