#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("%d2 %d3",a,b);
    }
   else if(a+1==b)
    {
        printf("%d9 %d0",a,b);
    }
    else if(a==9 && b==1)
    {
        printf("%d %d0",a,b);
    }
    else printf("-1");
    return 0;
}
