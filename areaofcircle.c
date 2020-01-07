#include <stdio.h>

float areaOfCircle(float r, float A);

float areaOfCircle(float r, float A)
{
A = 3.14*r*r;
return A;
}

int main(){
for(float i = 3.5; i <= 12.5; i++)
{
float A = areaOfCircle(i, A);
printf("%f\n", A);
}

}
