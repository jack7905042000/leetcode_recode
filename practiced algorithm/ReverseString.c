#include <stdio.h>
#include <string.h>

char* reverseString(char* s) {
        int i = 0;
        int r = strlen(s)-1;
        char tmp;
        while(i<r){
        tmp=s[i];
        s[i]=s[r];
        s[r]=tmp;
        i++;
        r--;
        }
        return s;
}

int main()
{
    char *s ="hello";
    char *a;
    *a = reverseString(*s);
    printf("%s",*a);
    return;
}