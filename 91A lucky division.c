#include <stdio.h>
#include <string.h>
int main()
{
	int n,i;
	int a[15]={4,7,44,77,47,74,444,447,474,477,744,747,774,777,799};
	scanf("%d",&n);
	for(i=0;i<=14;i++)
    {
        if(n==a[i])
        {printf("YES");
        return 0;
        }
        if(n%a[i]==0)
        {printf("YES");
        return 0;
        }

    }

    printf("NO");
    return 0;


}
