//WAP to show difference between Structure and Union
#include <stdio.h>

struct employee1 {
    int id;
    char name[100];
};

// Define a union
union employee2 {
    int id;
    char name[100];
};

int main() {

    struct employee1 s_emp;
    union employee2 u_emp;
    
    printf("Enter employee ID: ");
    scanf("%d", &s_emp.id);
    printf("Enter employee name: ");
    scanf("%s", &s_emp.name);

    printf("\nStructure Example:\n");
    printf("Employee ID: %d\n", s_emp.id);
    printf("Employee Name: %s\n", s_emp.name);
	
	printf("\nEnter employee ID: ");
	scanf("%d",&u_emp.id);
	printf("Employee ID: %d",u_emp.id);
	
	printf("\nEnter employee name: ");
	scanf("%s",&u_emp.name);
	printf("Employee Name: %s\n", u_emp.name);
	
	printf("\n%d",sizeof(s_emp));
	printf("\n%d",sizeof(u_emp));
	
	return 0;
	
}
