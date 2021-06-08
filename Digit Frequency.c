#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char num[1000];
    scanf("%s",num);
    int a,b,c,d,e,f,g,h,p,i,j;
    a=b=c=d=e=f=g=h=p=j=0;
    for(i=0;i<strlen(num);i++)
    {
        if(num[i]=='0')
        {
            a=a+1;
        }
        if(num[i]=='1')
        {
            b=b+1;
        }
        if(num[i]=='2')
        {
            c=c+1;
        }
        if(num[i]=='3')
        {
            d=d+1;
        }
        if(num[i]=='4')
        {
            e=e+1;
        }
        if(num[i]=='5')
        {
            f=f+1;
        }
        if(num[i]=='6')
        {
            g=g+1;
        }
        if(num[i]=='7')
        {
            h=h+1;
        }
        if(num[i]=='8')
        {
            p=p+1;
        }
        if(num[i]=='9')
        {
            j=j+1;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,p,j);
    return 0;
}
