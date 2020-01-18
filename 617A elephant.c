#include <stdio.h>
int main ()
{
    long int x, i;
    scanf("%li", &x);
    if (x>5){
    {     i=1;
        while (x>5)
           {
            x=x-5;
            i=i+1; }
    }
    printf("%d", i);}
    else printf("%d",1);
    return 0;
}
