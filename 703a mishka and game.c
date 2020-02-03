
#include<stdio.h>
int main()
{
    int n,m,c,mi,ch,i;
    mi=0;
    ch=0;
    scanf("%d", &n);
    for (i=1;i<=n; i=i+1)
    {
        scanf("%d %d", &m, &c);
        if (m>c) mi=mi+1;
        else if (c>m) ch=ch+1;
        else { mi=mi+1;
                ch=ch+1;}
    }
    if(mi>ch) printf("Mishka");
    else if(ch>mi) printf("Chris");
    else printf("Friendship is magic!^^");
    return 0;
}
