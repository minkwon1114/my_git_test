#include "sorting.h"
#include "stdio.h"

int sorted[10];

int main(){
    int data[10];
    for (int i=0;i<10;i++){
        scanf("%d",&data[i]);
    }
    merge_sort(data,0,9);
    for (int k=0;k<10;k++){
        printf("%d ", sorted[k]);
     }
    return 0;
}