//WAP program to print below output using do while loop

//#include <stdio.h>
//
//int main() 
//{
//    int number = 1;
//    do {
//    	if(number < 10)
//		{
//    		printf("0%d ",number);
//		} 
//		else 
//		{
//			printf("%d ", number);
//		}
//		number++;
//    } 
//	while (number <= 50);
//
//    return 0;
//}






//WAP program to print below output using for loop

#include <stdio.h>

int main() 
{
    int number = 1 , i;

    for (i = number; i <=50; i++) 
	{
        if (number < 10)
        {
            printf("0%d ", number);
        }
        else
        {
            printf("%d ", number);
        }
        number++;
    }

    return 0;
}

