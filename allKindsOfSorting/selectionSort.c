#include <stdio.h>
int main(){
  int i, j, n, temp, array[200];
  printf("Enter the number of value: ");
  scanf("%d",&n);
  printf("Enter all value: ");
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(array[i] > array[j]){

            temp=array[i];
            array[i]=array[j];
            array[j]=temp;

        }
    }
  }
  printf("After sorting: ");
  for(i=0;i<n;i++){
    printf("%d ",array[i]);
  }

  return 0;
}
