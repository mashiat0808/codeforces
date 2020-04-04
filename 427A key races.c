#include <Stdio.h>
int main ()
{
    int s,v1,v2,t1,t2,p1,p2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    p1=s*v1+t1*2;
    p2=s*v2+t2*2;
    if(p1<p2) {printf("First");
        return 0;}
    if(p1>p2) {printf("Second");
        return 0;}
    if(p1==p2) {printf("Friendship");
        return 0;}
    return 0;
}
