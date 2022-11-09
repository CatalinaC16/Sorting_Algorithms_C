#include <stdio.h>
int get_max_index( float *a, int size){
    ///search for the greatest number
    int index=0;
    float aux= *a;
    for(int i=1;i<size;i++){
        if(aux < *(a+i)){
            aux = *(a+i);
            index=i;
        }
    }
    return index;
}
void swap(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void selection_sort(float *a, int size){
    int index_maxim;
    for(int i=0;i<size;i++)
    {
        index_maxim=get_max_index(a,size-i);
        swap(a+index_maxim,a+size-1-i);
    }
}
int main() {
   float v[] = {124,23.5,22,13.2,26.34,0,-23.448};
   int size = sizeof(v) / sizeof(float);
   selection_sort(v,size);
   for(int i = 0; i < size;i++){
       printf("%.3f ",*(v+i));
   }
    return 0;
}
