#include <stdio.h>
#include <string.h>
int LuckyDivision(int n)
{
	int c = 0;

	int a[10] = {4, 7, 47, 74, 447, 474, 477, 744, 747, 777};
	for (int i = 0; i < 10; i++)
	{
		if (n==a[i] && n % a[i] == 0 && n>0)
			c=c+1;
	}
	if (c > 0)printf("YES");
	else
		printf("NO");
}

int main()
{
	char s[19];
	int i=0, x=0, k=0;
	scanf("%s", &s);
	for ( ; i<strlen(s); i++)
	{
		if(s[i]=='4' || s[i]=='7')	x++;
	}

	LuckyDivision(x);

}
