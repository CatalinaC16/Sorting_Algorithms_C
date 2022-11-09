#include <stdio.h>

int BinarySearch(int *v,int searched, int start, int end){
    
    if(start > end) 
        return 0;
    else{
        int mid = (start+end) / 2;
        if(searched==v[mid])
            return 1;
        else 
            if(searched < v[mid])
                            return BinarySearch(v,searched,start,mid-1);
            else return BinarySearch(v,searched,mid+1,end);

    }
}
int main() {
    int searched, v[] = {1,2,3,4,4,5,6,19,34};
    int size = sizeof(v) / sizeof(int);
    scanf("%d",&searched);
    if(BinarySearch(v,searched, 0,size)==1)
        printf("found");
    else
        printf("not found");
    return 0;
}
