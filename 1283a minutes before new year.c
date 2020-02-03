#include <stdio.h>
int main()
{
    int t,h,m,n,y,i;
    scanf("%d", &t);
    for (i=1; i<=t; i=i+1)
    {    scanf("%d %d", &h, &m);
        {
        n=60-m;
        y=24-(h+1);
    }  printf("%d\n", y*60+n);
    if(h==0&& m==0)
        break;  }
        return 0;
}
