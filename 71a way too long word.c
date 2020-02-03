#include <stdio.h>
int main()
{
	int x,n,i;
	char w[100];
	scanf("%d", &n);
	for (i=1; i<=n; i=i+1)
	{
		scanf ("%s", &w);
		for (x=0; w[x]!='\0'; x=x+1);
				if (x<=10)	{printf("%s\n", w);}
				else if (x>10)	{printf("%c%d%c\n", w[0], x-2, w[x-1]);}
		}

}
