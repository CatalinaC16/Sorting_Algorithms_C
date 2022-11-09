#include <stdio.h>
void swap(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
int partition( int *a, int start, int end){
    int pivot=*(a+end);
    int partition_index = start;
    for(int i = start; i <= end-1;i++){
        if(a[i]<=pivot){
            swap(a+i,a+partition_index);
            partition_index++;
        }
    }
    swap(a+end,a+partition_index);
    return partition_index;
}
void quick_sort(int *a,int start, int end){
    int pivot_index;
    if(start < end){
     pivot_index=partition(a,start,end);
    quick_sort(a,start,pivot_index-1);
    quick_sort(a,pivot_index+1,end);
}
}
int main() {
  int a[] = {23,-9,83,-44,199,192};
  int size = sizeof(a) / sizeof(int);
  quick_sort(a,0,size-1);
  for(int i=0; i<size; i++){
      printf("%d ",*(a+i));
  }
    return 0;
}
