//法一
int addDigits(int num) {
    int sum,b,c;
    sum = num;
    while(sum>=10){
        b=sum/10;
        c=sum%10;
        sum = b+c;
    }
    return sum;
}

//法二
int addDigits(int num)
{
   
	return (num-1)%9+1;
}