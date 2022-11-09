#include <stdio.h>
void swap(int *a,int *b){
    int aux=*a;
    *a= *b;
    *b=aux;
}
void InsertionSort( int *a, int size){
    for(int i=0; i< size;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a+j,a+j-1);
            j--;
        }
    }
}
int main() {

     int a[] ={23,22,45,11,23,1,5,99};
     int size = sizeof(a) / sizeof(int);
     InsertionSort(a,size);
     for(int i=0; i<size; i++) {
         printf("%d ", *(a + i));
 }
    return 0;
}
