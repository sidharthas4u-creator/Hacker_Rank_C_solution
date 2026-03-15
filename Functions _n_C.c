#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    void great( int a,int b,int c,int d)
    { 
        int g;
        if(a>b && a>c && a>d)
        {
            g=a;
        }  
        else if(b>a && b>c && b>d)
        {
            g=b;
        }
        else if(c>a && c>b && c>d)
        {
            g=c;
        }
        else
        {
            g=d;
        }
        printf("%d",g);
    }
    great(a,b,c,d);
    return 0;
}
