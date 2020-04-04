#include <stdio.h>
#include <string.h>

int main()
{
    char i,j,str[150],str1[150],k;
    int a=0;
    scanf("%s", str);
    scanf("%s", str1);

   for(i=0;str[i] != '\0'; i++){
    a++;
   }
    for(i=0; str[i] != '\0'; i++)
    {
     if(str[a-(i+1)] == str1[i]){
       j=0;
     }
     else {j=1;
       break;
     }
    }
    if(j == 0) printf("YES");
    else printf("NO");
    return 0;
}
