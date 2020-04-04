#include <stdio.h>
#include <string.h>
int main ()
{
    char c[1200];
    int i;
    gets(c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='h')
        {
            break;
        }
        if(i==strlen(c)-1) {
            printf("NO");
            return 0;
        }
    }
        for(i;i<strlen(c);i++)
    {
        if(c[i]=='e')
        {
            break;
        }
        if(i==strlen(c)-1) {
            printf("NO");
            return 0;
        }
    }
          for(i;i<strlen(c);i++)
    {
        if(c[i]=='i')
        {
            break;
        }
        if(i==strlen(c)-1) {
            printf("NO");
            return 0;
        }
    }
          for(i;i<strlen(c);i++)
    {
        if(c[i]=='d')
        {
            break;
        }
        if(i==strlen(c)-1) {
            printf("NO");
            return 0;
        }
    }
          for(i;i<strlen(c);i++)
    {
        if(c[i]=='i')
        {
            break;
        }
        if(i==strlen(c)-1) {
            printf("NO");
            return 0;
        }
    }
        printf("YES");
        return 0;
}
