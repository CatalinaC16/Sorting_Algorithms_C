#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortare(int* a,int sizeA, int* b,int sizeB,int* c){

    int *d=calloc(sizeA+sizeB,sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i<sizeA && j <sizeB)
    {
        if (a[i] < b[j])
            d[k++] = a[i++];
        else
            d[k++] = b[j++];
    }
    while (i < sizeA)
        d[k++] = a[i++];
    while (j <sizeB)
        d[k++] = b[j++];

    memcpy(c,d,(sizeA+sizeB)*sizeof(int));
}


void merge_sort(int *e,int sizeE)
{
    if(sizeE==1) return;
    int mijloc = sizeE / 2;
    merge_sort(e,mijloc);
    merge_sort(e+mijloc,sizeE-mijloc);
    sortare(e,mijloc,e+mijloc,sizeE-mijloc,e);

}
int main() {
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10,15};
    int sizeA= sizeof(a)/sizeof (a[0]);
    int sizeB=sizeof(b)/sizeof(b[0]);
    int *c=calloc(sizeA+sizeB,sizeof(int));
    sortare(a,sizeA,b,sizeB,c);
    for(int i=0;i<sizeA+sizeB;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    int d[]={5,9,3,4,2,6};
    int sizeD= sizeof(d)/sizeof(d[0]);
    merge_sort(d,sizeD);
    for(int i=0;i<sizeD;i++){
        printf("%d ",d[i]);
    }
    return 0;
}