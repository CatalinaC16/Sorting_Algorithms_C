#include <stdio.h>
void swap( float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void bublesort(float a[], int size){
    float aux;
    for(int i=0;i<size-1;i++)
        for(int j=0;j<size-1-i;j++)
          if(a[j] > a[j+1])
             swap(a+j,a+j+1);
}
int main() {
   float a[]={9.8, 23 ,-23.45,56,78,123.44, 123.40};
   int size= sizeof(a)/sizeof(float);
   bublesort(a,size);
   for(int i=0;i< size;i++){
       printf("%f ",*(a+i));
   }
    return 0;
}
