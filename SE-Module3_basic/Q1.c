#include<stdio.h>

int main() {
	
	char name[50];
	int birth_date;
	int age;
	char address[100];
	
	printf("Enter your name : ");
	scanf("%s", &name);
	
	printf("Enter your Birth date : ");
	scanf("%d", &birth_date);
	
	printf("Enter your Age : ");
	scanf("%d", &age);
	
	printf("Enter your Address : ");
	scanf("%s", &address);
	
	printf("Your name is : %s\n",name);
	printf("Your Birth date is : %d\n",birth_date);
	printf("Your Age is : %d\n",age);
	printf("Your Address is : %s\n",address);
	
	return 0;
}
