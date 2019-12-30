#include <stdio.h>
int main(){
   int n, i, j, temp, array[200];
   printf("Enter the number of value: ");
   scanf("%d",&n);
   printf("Enter all value: ");
   for(i=0;i<n;i++){
      scanf("%d",&array[i]);
   }
   for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(array[j]>array[j+1]){
          temp=array[j];
          array[j]=array[j+1];
          array[j+1]=temp;
        }
    }
   }
   printf("After Sorting: ");
   for(i=0;i<n;i++){
      printf("%d ",array[i]);
   }
   return 0;
}
