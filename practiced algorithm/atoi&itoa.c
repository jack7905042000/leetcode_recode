
int atoi(char *s){
    int sum = 0;
    int i;
    for(i=0;s[i]!='\0';i++){
        sum = sum*10 + s[i]-'0'; 
    }
    return sum;
}

char *itoa(int n){
    char *s;
    int i=0;
    int sign =1;
    if(n<0) sign = 0;
    
    while(n!=0){
        s[i++] = n%10+'0';
        n = n/10;
    }
    
    if(sigm ==0) s[i++] = '-';
    s[i] = '\0';
    
    reverse(s);
    return s;
}

void reverse(char *s){
    int i=0,r=strlen(s);
    char tmp;
    while(i<r){
        tmp = s[i];
        s[i] = s[r];
        s[r] = tmp;
        i++;
        r--;
    }
}