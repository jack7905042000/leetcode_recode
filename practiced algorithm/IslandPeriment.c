#include <stdio.h>
#include <string.h>

int main () 
{ 
    int i,j;
    int p=0;
    int a[4][4]={0,1,0,0,1,1,1,0,0,1,0,0,1,1,0,0};
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[i][j]==1){
                if(i==0||a[i-1][j]==0) p++;
                if(i==3||a[i+1][j]==0) p++;
                if(j==0||a[i][j-1]==0) p++;
                if(j==3||a[i][j+1]==0) p++;
            }
        }
    }
    printf("%d",p);

    return 0; 
} 