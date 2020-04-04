#include <stdio.h>
int main ()
{
    long long n;
    int t,sum,k=0,i,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lli",&n);
        if(n<10)
        {
            printf("%lli\n",n);

        }
      else  if(n<100)
        {
            k=0;
                    k=n/11;
            printf("%d\n",9+k);
        }
       else if(n<1000)
        {
            k=0;
            k=n/111;
            printf("%d\n",18+k);
        }
       else if(n<10000)
        {
            k=0;
            k=n/1111;
            printf("%d\n",27+k);
        }
       else if(n<100000)
        {
            k=0;
            k=n/11111;
            printf("%d\n",36+k);
        }
       else if(n<1000000)
        {
            k=0;
            k=n/111111;
            printf("%d\n",45+k);
        }

       else if(n<10000000)
        {
            k=0;
           k=n/1111111;
            printf("%d\n",54+k);
        }
       else if(n<100000000)
        {
            k=0;
           k=n/11111111;
           printf("%d\n",k+63); }
       else if(n<1000000000)
        {
            k=0;
            k=n/111111111;
            printf("%d\n",72+k);
        }
        else if(n<=10000000000)
        {
            k=0;
               k=n/1111111111;
            printf("%d\n",81+k);
        }


    }
    return 0;
}
