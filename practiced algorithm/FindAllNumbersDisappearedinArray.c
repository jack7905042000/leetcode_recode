#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a[] = {4,3,2,7,8,2,3,1},aleng,i;
    int *aptr = a;

    aleng = sizeof(a)/sizeof(*aptr);
    
    for(i=0;i<aleng;i++){
        while(a[i]!=i+1&&a[a[i]-1]!=a[i]) swap(&a[i],&a[a[i]-1]);//先排序
    }
    for(i=0;i<aleng;i++){
        if(a[i]!=i+1)
        printf("%d ",i+1);                                       //再找出消失的值
    }
    return 0;
}