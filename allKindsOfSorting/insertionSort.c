#include <stdio.h>
int main(){
  int array[100], i, j, count, temp;
  printf("How many element do you want to take?");
  scanf("%d",&count);
  for(i=0;i<count;i++){
    scanf("%d",&array[i]);
  }
  for(i=1;i<count;i++){
    temp=array[i];
    j=i-1;
    while(j>=0 && array[j]>temp){
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=temp;
  }
  printf("After sorting: ");
  for(i=0;i<count;i++){
    printf("%d ",array[i]);
  }
  return 0;
}
