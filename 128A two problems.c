#include <stdio.h>
int main ()
{
    int x,t,a,b,da,db,i,j;
    scanf("%d %d %d %d %d %d",&x,&t,&a,&b,&da,&db);
    for(i=0;i<t;i++){
         for(j=0;j<t;j++)
    {
         if(x==(a+b-i*da-j*db))
        {
            printf("YES");
            return 0;
        }
    }
    if(x==(a-i*da)) {
            printf("YES");
            return 0;
        }
        if(x==(b-i*db))
            {
            printf("YES");
            return 0;
            }
        if(x==0) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}
