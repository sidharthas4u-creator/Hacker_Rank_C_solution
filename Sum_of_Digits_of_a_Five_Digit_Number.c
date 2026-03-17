#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int i=0;
    
    while (n>0)
     {
        int t=0;
        t=n%10;
        n=(n-t)/10;
          i=i+t;
    }
     printf("%d",i);
    return 0;
}
