#include <stdio.h>
#include <string.h>

int main () 
{ 
    int i;
    char *a[] ={"%d\n","FIZZ\n","BUZZ\n","FIZZBUZZ\n"};
    for(i=1;i<=100;i++)
        printf(a[(i%3==0)+2*(i%5==0)],i);
    return 0; 
    
} 