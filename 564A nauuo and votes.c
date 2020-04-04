#include <stdio.h>
int main ()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y+z) {
        printf("+");
        return 0;
    }
    if(x+z<y) {
        printf("-");
        return 0;
    }
    if(x==y && x>0 && z>0)
    {
        printf("?");
        return 0;
    }
    if(x==y && x!=0 && x>z) {
        printf("0");
        return 0;
    }
    if(x==0 && x==y && x==z){
        printf("0");
        return 0;
    }
    if(x==y && x>0 && z>0)
    {
        printf("?");
        return 0;
    }
    else printf("?");
    return 0;

}
