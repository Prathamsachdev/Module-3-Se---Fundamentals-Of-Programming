//Find the Character Is Vowel or Not

#include<stdio.h>

int main() 
{
	char alpha;
	
	printf("Enter Alphabet : ");
	scanf("%c",&alpha);
	
	if( (alpha == 'a') || (alpha == 'e') || (alpha == 'i') || (alpha == 'o') || (alpha == 'u') ) 
	{
		printf("Character is Vowel : ",alpha);
	}
	else 
	{
		printf("Character is not Vowel : ",alpha);
	}
	
	return 0;
}
