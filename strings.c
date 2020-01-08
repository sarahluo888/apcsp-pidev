#include <stdio.h>
#include <string.h>

int main()
{

char str1[27];

for (int i = 0; i < 26; i++){
str1[i] = 97 + i;
}

char str2[27] = "abcdefghijklmnopqrstuvwxyz";

if (strcmp(str1, str2)==0)
printf("str1 and str2 are identical\n");

else
printf("str1 and str2 are NOT identical\n");

for (int i = 0; i < 26; i++){
str2[i] = str2[i] - 32;
}

char str3[52];
strcpy(str3, str1);
char string2[27];
strcpy(string2, str2);
strcat(str3, str2);


printf("str1 : %s\n", str1);
printf("str2 : %s\n", string2);
printf("str3 : %s\n", str3);

  }
