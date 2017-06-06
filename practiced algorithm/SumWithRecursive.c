#include <stdio.h> 

int getSum(int a, int b) {
    return b==0? a:getSum(a^b, (a&b)<<1); //be careful about the terminating condition;
}
int main()
{
	int a =4,b =1;
	printf("%d %d %d",getSum(a,b),a^b,a&b);
	
	
}