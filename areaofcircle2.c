#include <stdio.h>
#include <math.h>

float myArea(float radius)
{
	float area = M_PI * radius * radius;
	return area;
}


int main(int argc, char* argv[])
{
	if (argc == 3)
	{
	        int arg1;
       		int found = sscanf(argv[1], "%d", &arg1);
       		if (found != 1)
       		{
               		printf("first arg is not an integer, enter two ints\n");
               		return 1;
       		}

	        int arg2;
       		found = sscanf(argv[2], "%d", &arg2);
       		if  (found != 1)
       		{
               		printf("second arg is not an integer, enter two ints\n");
                	return 1;
		}
		for (int i = arg1; i <= arg2; i++)
                {
                        float ans = myArea(i);
                        printf("%f\n", ans);
                }
	}

	else
	{
		char input[256];
		float lower;
		float upper;
		printf("Enter the lower bound radius: ");
		while (1)
		{
			fgets(input, 256, stdin);
			if (sscanf(input, "%f", &lower) == 1) break;
			printf("Please enter a valid number.\n");
		}
		printf("Enter the upper bound radius: ");
		while (1)
		{
			fgets(input, 256, stdin);
			if (sscanf(input, "%f", &upper) == 1) break;
			printf("Please enter a valid number.\n");
		}
		for (int i = lower; i <= upper; i++)
       		{
       	        	float ans = myArea(i);
       	        	printf("%f\n", ans);
       		}

	}
}


