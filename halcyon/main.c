/* В последовательности чисел a1, a2, …, an
 * найти минимальное среди нечетных. */

#include <stdio.h>
#define N 4
int main() {
   int iMin,min,i,A[N];

   // Ввод массива

   for (i=0;i<N;i++) { 
       scanf("%d",&A[i]);
   }

   // Определение минимального элемента

   for (i=0;i<N;i++) {
        if ((A[i]%2==1) || (A[i]%2==-1)) {
            min = A[i];
        }
   }

// Поиск минимального элемента среди нечетных

   for (i=0;i<N;i++) {
       if ((A[i]%2==1) || (A[i]%2==-1)) {
           if (A[i] < min) {
           min = A[i];
           }
       }
   }

   printf("\nМинимальный элемент = %d",min);

}
