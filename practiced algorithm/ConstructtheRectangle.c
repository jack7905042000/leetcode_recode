int* constructRectangle(int area, int* returnSize) {
    
    
    int j=1,i,tmp;
    int *a;
    *returnSize = 2;
    a= malloc(*returnSize*sizeof(int));

    while(j<=area){
        if(area%j==0){
            i = area/j;
            if(j<=i){
            
            a[0] = i;
            a[1] = j;
            }
        }
        j++;
    }
    return a;
}

