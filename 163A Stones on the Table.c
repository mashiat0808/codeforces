#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,k=0;
    char a[50];
    scanf("%d",&n);
    getchar();    gets(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1]) k++;
    }
    printf("%d",k);
    return 0;
}
