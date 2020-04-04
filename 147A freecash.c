#include <stdio.h>
int main ()
{

	int n, h, m, h1, m1, x=1, c=1;
	scanf("%d %d %d",&n,&h1,&m1);
	while(--n)
	{
		scanf("%d %d",&h,&m);
		if(h==h1 && m==m1)
		{
			x++;
			if(x>c)
				c=x;
		}
		else
			x=1;
		h1=h;
		m1=m;
	}
	printf("%d",c);
	return 0;
}
