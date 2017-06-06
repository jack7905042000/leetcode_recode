#include <stdio.h>
#include <string.h>

int main () 
{ 
    int a[] = {1,0,1,1,0,1,1};
    int i,b=0;
    int *aptr = a;
    int aleng = sizeof(a)/sizeof(*aptr);
    int count=0;
    int max=0;
    for(i=0;i<aleng;i++){
        b +=*(aptr+i);
        if(*(aptr+i)==1){
            count++;
        }
        if(*(aptr+i)==0){
            if(max<count){
                max = count;
            }
            count = 0;
        }    
    }
    if(b == aleng) max = b;
    printf("%d",max);
} 