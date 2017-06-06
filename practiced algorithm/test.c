#include <stdio.h> 
#include <string.h> 
int fun(int x)
{
   int count = 0 ; 
   while(x){ 
      count++ ; 
      x = x & (x+1) ; 
   } 
   return count ; 
}  
int main()
{
	
	/*int a[5]={1,2,3,4,5};
	int *ptr=(int *)(&a+1);
	printf("%d,%d,%d\n",*(a+1),*(ptr-1),(*ptr-1));

	
    char *s2 = "W";
    //char *s2 = &a;
	*s2 = 'c';*/
    int a = 0x100;
    int b = 0x4;
    
    printf("%x\n", a << b);
    printf("%x\n", a >> b);
    
    return 0;
}

		

