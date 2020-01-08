#include <stdio.h>

int main()
{
float a;
float d;
float* ptrtod;
float e;
float* ptrtoe;
float* ptrtoa;

ptrtoa = &a;
ptrtod = &d;
ptrtoe = &e;

d = 4;
printf("The value of d is %f\n", d);
printf("The address of d is %f\n", ptrtod);
e = 3;
printf("The value of e is %f\n", e);
printf("The address of e is %f\n", ptrtoe);

a = d;
d = e;
e = a;


*ptrtod = e;
*ptrtoe = d;
printf("The value of d is %f\n", *ptrtod);
printf("The value of e is %f\n", *ptrtoe);

}
