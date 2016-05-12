/* 11 Даны действительное число а, натуральное n. Вычислить:
a(a-n)(a-2n)...(a-n*n) */

#include <stdio.h>

int main(){
   float a,P;
   int n,i;
   printf("\nVvedite a");
   scanf("%f",&a);
   printf("\nVvedite n");
   scanf("%d",&n);
   P=1; 
   i=1;
   while (i<n) {
       P=P*(a-i*n); 
       i++;
   }

   printf("\nP=%f",P);

}
