#include <stdio.h>
void checkEvenOdd(int number){
	if (number % 2==0){
		printf("%d is Even\n",number);
	}else{
		printf("%d is Odd\n",number);
	}
}
	
	


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	checkEvenOdd(num);
	return 0;
}