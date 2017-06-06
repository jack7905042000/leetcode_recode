#include <stdio.h> 

int numberComplement(int num){
    int i=1;
    int temp = num;
    while(temp){
        temp>>=1;
        i<<=1;
    }
    return ((i-1)^num);
}

int main()
{
	int a = 1;
	printf("%d\n",numberComplement(a));
	
}