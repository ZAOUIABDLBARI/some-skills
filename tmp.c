#include <stdio.h>
#include <stdlib.h>


int main ()  {
 
int p,q;

printf("donner le premier numero: ");
scanf("%d",&p);
printf("donner le deuxieme numero: ");
scanf("%d",&q);
p = p + q;
q = p - q;
p = p - q;
printf("%d   ||   %d",p,q);

return 0;
}