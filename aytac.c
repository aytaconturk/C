#include <stdio.h>

int main() {
	int number = 0;
int rem;
printf("\n");
	printf("Enter a positive number : ");
	scanf("%d", &number);

	while (number <= 0)
	{
		printf("Sorry! You didn't give a positive number!!!\n");
		printf("Enter a positive number : ");
		scanf("%d", &number);

}

while(number!=0){
rem= number%10;
number= number/10;
switch (rem) 
		{
		
		case 1:
			printf("one\t");
			break;
		case 2:
			printf("two\t");
			break;
		case 3:
			printf("three\t");
			break;
		case 4:
			printf("four\t");
			break;
		case 5:
			printf("five\t");
			break;
		case 6:
			printf("six\t");
			break;
		case 7:
			printf("seven\t");
			break;
		case 8:
			printf("eight\t");
			break;
		case 9:
			printf("nine\t");
			break;
		default:
			break;
}
}

printf("\n");
printf("\n");
return 0;}
