#include <stdio.h>
#include "student.h"

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
