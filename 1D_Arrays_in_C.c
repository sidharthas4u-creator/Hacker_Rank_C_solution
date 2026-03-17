#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {   
        scanf("%d",&arr[i]);
    }
    int m=0;
    for(int i=0;i<a;i++)
    {
         m=m+arr[i];
    }
    printf("%d",m);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
