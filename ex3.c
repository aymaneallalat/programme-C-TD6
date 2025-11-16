#include <stdio.h>
int main(){
int i;
printf("les nombre paire entre 1 et 20 sont :\n");
for(i=1 ; i<=20 ; i++){
if (i % 2 == 0)
printf("%d\n",i);
}
return 0;
}