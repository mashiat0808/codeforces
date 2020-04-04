#include <stdio.h>
int main ()
{
    long n,i,sum=0;
    scanf("%li",&n);
    if(n<7)
    {   if(n==6)
    {
        printf("1 2");
        return 0;
    }
        if(n==1)
        {
            printf("%d %d",0,1);
            return 0;
        }if(n>1)
        {printf("%d %d",0,2);
        return 0;}

    }
    if(n%7==0)
    {
        printf("%d %d",n*2/7,n*2/7);
        return 0;
    }
    else
    {
        for(i=1;;i++)
        {
            n=n-7;
            if(n<7)break;
        }
        if(n==1)
        {
          printf("%d %d",i*2,i*2+1);
          return 0;
        }
        if(n==6)
        {
            printf("%d %d",i*2+1,i*2+2);
            return 0;
        }
        else {printf("%d %d",i*2,i*2+2);
        return 0;}

    }

    return 0;
}
