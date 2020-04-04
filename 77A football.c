#include <stdio.h>
#include <string.h>
int main ()
{
    int i=0,j,k=0;
    char a[100];

    gets(a);

    for(j=0;j<strlen(a);j++)
        {
             if(a[j]==a[j+1]){
                k++;
             }

              if(k==6) {
                printf("YES");
                return 0;
            }
            if(a[j]!=a[j+1]) k=0;

        }
    printf("NO");
    return 0;

}
