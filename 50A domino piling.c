#include <stdio.h>
int main()
{
    int M,N,x,a;
    scanf("%d %d", &M, &N);
    a=M*N;
    if (a%2==0){ x=a/2; }
    else {x=(a-1)/2;}
    printf("%d", x);

}
