//Employee records system

#include<stdio.h>
#include <stdlib.h>

struct empDetails{
	int empid;
	char empName[25];
	int age;
	long int phNo;
	int salary;
}; 

static int a = 0;
struct empDetails emp[20];

void enterDetails();
void viewDetails();
void viewAll();
void dot(char ch);

int main()
{
	int ch;
	
	while(1)
	{
		dot('*');
		printf("Employee Records");
		printf("\n1.Add");
		printf("\n2.View detailed");
		printf("\n3.View All");
		printf("\n4.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		dot('*');
		
		switch(ch)
		{
			case 1 :
				enterDetails();
				break;
			case 2 :
				viewDetails();
				break;
			case 3 :
				viewAll();
				break;
			case 4 :
				exit(0);
		}
	}
	
	return 1;
}

void enterDetails()
{
	dot('=');
	printf("Enter name: ");
	scanf("%s",emp[a].empName);
	printf("Enter Age : ");
	scanf("%d",&emp[a].age);
	printf("Enter Phone Number: ");
	scanf("%ld",&emp[a].phNo);
	printf("Enter Salary: ");
	scanf("%d",&emp[a].salary);
	dot('=');
	a++;
}

void viewDetails()
{
	int n;
	dot('=');
	printf("Enter employee ID\n");
	scanf("%d",&n);
	if(n-1<a)
	{
		printf("Name: %s\n",emp[n-1].empName);
		printf("Age: %d\n",emp[n-1].age);
		printf("Phone Number: %ld\n",emp[n-1].phNo);
		printf("Salary: %d\n",emp[n-1].salary);
		dot('=');	
	}else
	printf("\nInvalid ID");
}

void viewAll()
{
	int i;
	for(i=1;i<a+1;i++)
	{
		dot('=');
		printf("Employee ID: %d",i);
		printf("\nEmployee Name: %s",emp[i-1].empName);
		dot('=');
	}
}

void dot(char ch)                                     //Creates a design of which ever character you want
{
  printf("\n");
  int i;
  for (i=80;i>0;i--)
  printf("%c",ch);
  printf("\n");
}
