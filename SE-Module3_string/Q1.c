#include <stdio.h>
int main()
{
   //Initializing variable.
    char str[100];
    int i,length=0;
    
     //Accepting input.
    printf("Enter a string: \n");
    scanf("%s",str);

     //Initializing for loop. //janvi
    for(i=0; str[i]!='\0'; i++)
    {
        length++; //Counting the length.
    }
    
    printf("\nLength of input string: %d",length);
    
     return 0;
}
//janvi

