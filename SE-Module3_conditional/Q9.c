//C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>

int main() {
	
	char character;

	printf("Enter your character : ");
	scanf("%c",&character);
	
	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		printf("%c is Alphabet.\n",character);
		
		if(character >= 'a' && character <= 'z') 
		{
			printf("%c is lowercase.\n", character);
		}
		else 
		{
			printf("%c is Uppercase.\n", character);
		}
	} 
	
	else if (character >= '0' && character <= '9') 
	{
		printf("%c is a Digit.\n", character);
    } 
    
	else 
	{
        printf("%c is a Special character.\n", character);
    }

	
	
	return 0;
}
