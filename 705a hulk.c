
#include <stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    printf("I hate ");
    for (i=1; i<=n; i=i+1)
    {
        if (i==n) { printf("it"); break; }
        else if (i%2==0) printf("that I hate ");
        else printf("that I love ");

            }
            return 0;
}
