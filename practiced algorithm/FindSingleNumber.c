#include <stdio.h>
#include <string.h>

int singleNumber(int* nums, int numsSize) {
    int a = 0,i;
    
    for (i = 0; i < numsSize; i++) {
        a = a ^ nums[i];
    }

    return a;
}

int main()
{
    int b[] = {8,2,2},numsSize;
    int *bptr = &b;
    numsSize = sizeof(b)/sizeof(b[0]);
    printf("%d\n",sizeof(b)/sizeof(b[0]));
    printf("%d\n",singleNumber(bptr,numsSize));

    return 0;
}