#include <stdio.h>
int main ()
{
    int n,x,k,i;
    scanf("%d",&n);k=n/2;
    printf("%d\n",k);
    if(n%2==0) {
        for(i=1;i<=k;i++)
            printf("2 ");
    }
    else {
        printf("3 ");
        for(i=1;i<k;i++)
            printf("2 ");
    }
    return 0;
}
