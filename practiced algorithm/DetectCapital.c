#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[] = "Google",i;
    int aleng = sizeof(a)/sizeof(a[0]);
    int Bigcount = 0;
    int smallcount = 0;
    for(i=0;i<aleng;i++){

        if(a[0]<=90){
            if(a[1+i]>=97)smallcount++;
            if(a[1+i]<=90&&a[1+i]>=65)Bigcount++;
        } 
        if(a[0]>90)break;
        printf("%d\n",a[i]);
    }    
    if(Bigcount ==(aleng-2)||smallcount ==(aleng-2)) printf("true");
    if(Bigcount !=0&&smallcount !=0) printf("false");
    if(Bigcount ==0&&smallcount ==0) printf("false");
    return 0;
}