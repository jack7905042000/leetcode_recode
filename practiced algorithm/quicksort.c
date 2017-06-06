#include <stdio.h>
#include <string.h>

int a[]={5,3,2,8,4,6,7,1,9,8};

void quicksort(int left ,int right){
    int i,j,tmp1,tmp2;
    
    if(left>right) //算到兩邊各剩一個數時，跳出
        return;
        
    tmp1 = a[left];
    j = right;
    i = left;
    while(i!=j){
        while(a[j]>=tmp1&&i<j)j--; //從右邊先開始，原因在於一定要確保左側的值都要小於基準值
        while(a[i]<=tmp1&&i<j)i++;
        if(i<j){
            tmp2 = a[j];
            a[j] = a[i];
            a[i] =tmp2;
        }
    }
    a[left]=a[i];
    a[i] = tmp1;
    
    quicksort(left ,i-1);
    quicksort(i+1 ,right);
}
    
int main()
{
    int i,j,n=9;
    
    
    quicksort(0,n);
    for(i=0;i<=n;i++) printf("%d ",a[i]);
    return 0;
}