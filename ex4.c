#include <stdio.h>
int main(){
int n , b = 0;
printf("entrer un entier :\n");
scanf("%d",&n);
if (n==0){
    b=1;
}
else if(n<0)
  n = -n;
  while (n>0){
    n=n/10;
    b++;
  }
  printf("le nombre contien %d chiffres \n",b);
  return 0;
}