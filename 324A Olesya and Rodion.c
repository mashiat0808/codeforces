#include<stdio.h>
int main()
{
    int n,t,i,j,k;
    int a[105];
    scanf("%d %d",&n,&t);
    if(n==1&&t==10)
    {
        printf("-1\n");
    }
    else
    {
        if(t<10)
        {
            for(i=0; i<n; i++)
            {
                printf("%d",t);
            }
        }
        else
        {
            printf("1");
            for(i=0; i<n-1; i++)
            {
                printf("0");
            }
        }
    }
    return 0;
}
