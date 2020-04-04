#include <stdio.h>
int main ()
{
    int i,j, number[50000];
    long n;
    scanf("%li",&n);
    if(n%2==0)
    {
        for(i=0; i<50000; i++)
        {
            number[i]=1;
            n=n-2;
            if(n==0)
                break;
        }
    }
    else
    {
        for(i=0; i<50000; i++)
        {  if(n%2==0)
        {
            number[i]=1;
            n=n-2;
            if(n==0)
                break;
        }

             else if (n>=3)
               {
                   number[i]=7;
                   n=n-3;
               }

                if(n<2) break;
    }
            }


        for(j=0; j<=i; j++)
        printf("%d",number[j]);
    return 0;


}
