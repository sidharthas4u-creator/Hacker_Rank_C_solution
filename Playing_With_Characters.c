#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{   
char ch1[10];
char ch2[50];
char ch3[100];
scanf("%s\n",&ch1);
scanf("%s\n",&ch2);
scanf("%[^\n]s",&ch3);
printf("%s\n%s\n%s",ch1,ch2,ch3);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
