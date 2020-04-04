#include <stdio.h>
#include <string.h>

int main()
{
    char str[150][150];
    int i,j,k=0,x,l,n,m;

    scanf("%d%d", &n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%s", &str[i][j]);

        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(str[i][j] == 'C' || str[i][j] == 'Y' || str[i][j] == 'M')
            {
                printf("#Color");
                return 0;
            }
        }
    }
    printf("#Black&White");
    return 0;
}
