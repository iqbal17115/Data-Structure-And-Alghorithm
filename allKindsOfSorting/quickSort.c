#include <stdio.h>
int array[100];
void quickSort(int low,int high){
    if(low<high){
        int pivot, i, j, temp;
        pivot=high;
        i=low,j=high;
        while(i<j){
            while(array[i]<=array[pivot] && i<high){
                i++;
            }
            while(array[j]>array[pivot]){
                j--;
            }
            if(i<j){
              temp=array[i];
              array[i]=array[j];
              array[j]=temp;
            }
        }
        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;
        quickSort(low,j-1);
        quickSort(j+1,high);
    }
}
int main(){
   int num, i;
   printf("Enter the number of element: ");
   scanf("%d",&num);
   for(i=0;i<num;i++){
    scanf("%d",&array[i]);
   }
   quickSort(0, num-1);
   printf("After Sorting: ");
   for(i=0;i<num;i++){
    printf("%d ",array[i]);
   }
}
