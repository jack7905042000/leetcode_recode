#include <stdio.h> 

int hammingDistance(int x, int y) {
    
    int tmpInt=x^y;
    int dis=0;
    
    while(tmpInt)
    {
        if((tmpInt>>1)<<1 != tmpInt)
        {
            ++dis;
        }
        
        tmpInt>>=1;
    }
    
    return dis;
}
int main()
{
	int a = 1,b = 4;
	printf("%d\n",hammingDistance(a,b));
	
}