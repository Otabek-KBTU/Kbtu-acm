#include <iostream>

long long get_reverse(long long num)
{
    long long result = 0;
    while(num>0)
    {
        result = result*10 + num%10;
        num = num/10;
    }
    return result;
}

int main()
{
    int num1,num2;
    int N;
    cin>>N;
    while(N--)
    {
        cin>>num1>>num2;
        num1 = get_reverse(num1);
        num2 = get_reverse(num2);
        num1 += num2;
        num1 = get_reverse(num1);
       cout<<num1;
    }
    return 0;
}

