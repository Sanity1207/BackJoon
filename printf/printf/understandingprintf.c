#include <stdio.h>

int main(void) {
	int num1=10, num2=20;
	int num3 = 10;
	int num4 = 20;
	int result1, result2, result3;
	

	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d",10, 20);
	printf("\n=========================\n");

	printf("num1 전위증가 : %d\n", ++num1);
	printf("num1 후위증가 : %d\n", num1++); //num1=11 인 상태에서 했으니까 똑같이 11 나오는거.

	//++ -- 는 소괄호의 영향을 받지 않고 다음 문장으로 넘어가야만 비로소 값의 증감이 이루어진다.


	printf("=========================\n");
	result1 = (num1 == num2);
	result2 = (num1 >= num2);
	result3 = (num1 <= num2);

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n", result3);

	printf("=========================\n");

	result1 = (num3 == 10 && num4 == 20);
	result2 = (num3 < 12 || num4 >100);
	result3 = (!(num3 < 12) || num4 > 200);

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n", result3);
	//C언어는 0이 아닌 모든 값을 참으로 간주한다.

}