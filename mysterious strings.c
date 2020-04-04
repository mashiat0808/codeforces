#include<stdio.h>
#include<string.h>
int main ()
{
    char a[40][20]={ "Washington", "Adams", "Jefferson", "Madison", "Monroe", "Adams", "Jackson", "Van Buren", "Harrison", "Tyler", "Polk", "Taylor", "Fillmore", "Pierce", "Buchanan", "Lincoln", "Johnson", "Grant", "Hayes", "Garfield", "Arthur", "Cleveland", "Harrison",
                        "Cleveland", "McKinley","Roosevelt", "Taft", "Wilson", "Harding", "Coolidge", "Hoover", "Roosevelt", "Truman", "Eisenhower", "Kennedy", "Johnson", "Nixon", "Ford", "Carter", "Reagan"};
      int n,i;
      scanf("%d",&n);
      n--;
      printf("%s",a[n]);
      return 0;



}
