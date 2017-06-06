#include <stdio.h>
#include <string.h>

int main () 
{ 
    int i,j,*pa,*pb;
    int a[]={4,1,2};
    int b[]={1,3,4,2};

    int lenga = sizeof(a)/sizeof(a[0]);
    int lengb = sizeof(b)/sizeof(b[0]);

        for(i=0;i<=lenga-1;i++){
            for(j=0;j<=lengb-1;j++){
                if(a[i]== b[j]){
                    if(b[j]>b[j+1])
                        printf("-1\n",b[j]);
                    if(b[j]<b[j+1])
                        printf("%d\n",b[j+1]);
                }
            }
        }
    return 0; 
} 