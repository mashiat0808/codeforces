#include <stdio.h>
int main ()
{
    int x1,x2,x3,sum=0;
    scanf("%d %d %d",&x1,&x2,&x3);
    if(x1>=x2 && x1>=x3)
    {
        if(x2>=x3)
            sum=x1-x3;
        else sum=x1-x2;
    }
    if(x2>=x1 && x2>=x3)
    {
        if(x1>=x3)
            sum=x2-x3;
        else sum=x2-x1;
    }
    if(x3>=x2 && x3>=x1)
    {
        if(x2>=x1)
            sum=x3-x1;
        else sum=x3-x2;
    }
    printf("%d",sum);
    return 0;
}
