#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n[]={2,3,4,11};
    int *p = n;
    int target = 14;
    int *a;
    a= malloc(2*sizeof(int));
    int numbersSize = sizeof(n)/sizeof(n[0]);
    
    int i =0;
    int r= numbersSize-1;
    int sum;
    
    while(i<r){
        sum = n[i]+n[r];
        if(sum==target) {
            printf("%d %d",i+1,r+1); 
            break;
        }
        else if(sum<target) i++;
        else --r;
        
    }
    
    
    return 0;
}

