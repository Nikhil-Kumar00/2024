#include<iostream>
using namespace std;
//Q1 To check wheather a number is prime or not:
int isprime(int n)   
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
//Q2 Print prime number b/w a range:
void printAll_Prime(int a,int b)    
{
    int i;
    for(i=a+1;i<b;i++)
        if(isprime(i))
            cout<<i<<" ";
}
//Q3 To find the max digit in a given number:
int max_Digit(int n)    
{
    int maxDigit;
    maxDigit=n%10;
    while(n)
    {
        if(maxDigit<n%10)
            maxDigit=n%10;
        n/=10;
    }
    return maxDigit;
}
//Q4 Calculate x power y:
float power(float x,float y)    
{ 
    if(y==0)
        return 1;
    if(y>0)
        return power(x,y-1)*x;
    else 
        return power(x,y+1)*(1/x);
}
//Q5 Factorial of a number:
int fact(int n)   
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
//Q6 Posible ombinations:
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
//Q7 Print pascal triangle:
void print_Pascal_Triangle(int lines)   
{
    int i,j,flag,r;
    for(i=1;i<=lines;i++)
    {
        flag=1;
        r=0;
        for(j=1;j<=lines*2-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i && flag)
                cout<<combi(i-1,r++),flag=0;
            else
                cout<<" ",flag=1;
        }
        cout<<endl;
    }
}
//Q8 To check a given number is exist in a fibonacci series:
int fibin(int n)    
{
    int i,a=-1,b=1,c=0;
    for(i=0;c<=n;i++)
    {
        c=a+b;
        if(n==c)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}
int main()
{
    
    return 0;
}