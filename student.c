#include <stdio.h>
#include <string.h>


struct Student{
	char first[50];
	char last[50];
	int  age[50];
	int id[50];
};

//void printStudent(struct Student studArr[50], int num){
//	for (int i = 1; i <= num; i++)	{
//		printf("\nStudent %d is:\n", i);
//		printf(" First name: %s\n", studArr[i].first);
//		printf(" Last name: %s\n" ,studArr[i].last);
//		printf(" Age: %d\n", *studArr[i].age);
//		printf(" Student ID: %d\n", *studArr[i].id);
//	}
//}

void printStudent(struct Student student[50], int num){
      for (int i = 1; i <= num; i++)  {
              printf("\nStudent %d:\n", i);
              printf(" First name: %s\n", student[i].first);
              printf(" Last name: %s\n" ,student[i].last);
              printf(" Age: %d\n", *student[i].age);
              printf(" Student ID: %d\n", *student[i].id);
      }
}
int main()
{
	struct Student student[100];
	int num = 1;
	int repeat = 0;
	char input[256];
	char str[256];
while (repeat == 0)
{
	printf("Enter the first name %d: ", num);
	fgets(input, 256, stdin);
	sscanf(input, "%s",  student[num].first);

	printf("Enter the last name %d: ", num);
	fgets(input, 256, stdin);
	sscanf(input, "%s", student[num].last);

	printf("Enter the age %d: ", num);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", student[num].age) == 1) break;
		printf("Enter a valid number.\n");
	}

	printf("Enter the ID %d: ", num);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", student[num].id) == 1) break;
		printf("Enter a valid number.\n");
	}

	printf("Enter another student? yes/no: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", input);
	printf("\n");
	if (strcmp(input, "no") == 0)
	{
		repeat = 1;
		break;
	}
	else
	{
		num++;
	}

}
	printStudent(student, num);
}
