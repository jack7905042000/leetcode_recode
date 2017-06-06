#include<stdio.h>
#include<string.h>

int main()
{
	char *s = "abcd";
	char *t = "qabcd";
	int i,ssum=0,tsum=0;
	for(i=0;i<strlen(s);i++) ssum+=*(s+i);
	for(i=0;i<strlen(t);i++) tsum+=*(t+i);
	
	printf("%c",tsum-ssum);
	return 0;
}
