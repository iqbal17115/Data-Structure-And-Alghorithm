#include <stdio.h>
int array[100],array1[100],max;
void mergeSort(int low, int mid, int high){
     int low1, low2, i;
     for(low1=low,low2=mid+1,i=low;low1<=mid && low2<=high;i++){
        if(array[low1]<=array[low2]){
         array1[i]=array[low1++];
        }else{
         array1[i]=array[low2++];
        }
     }
     while(low1<=mid){
        array1[i++]=array[low1++];
     }
     while(low2<=high){
        array1[i++]=array[low2++];
     }
     for(i=low;i<=high;i++){
        array[i]=array1[i];
     }
}
void divide(int low, int high){
    int mid;
    if(low < high){
        mid=(low+high)/2;
        divide(low, mid);
        divide(mid+1, high);
        mergeSort(low, mid, high);
    }else{
        return;
    }
}
int main(){
   int i;
   printf("Enter the number of value: ");
   scanf("%d",&max);
   for(i=0;i<max;i++){
    scanf("%d",&array[i]);
   }
   divide(0, max-1);
   printf("After Sorting: ");
   for(i=0;i<max;i++){
    printf("%d ",array[i]);
   }
}
