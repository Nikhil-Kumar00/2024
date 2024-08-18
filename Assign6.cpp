#include<iostream>
#include<string.h>
using namespace std;
void sort(int a[],int size,bool ass=true);
//Q1 Sort an array depending on bool type value:
void sort(int a[],int size,bool ass)    
{
    int r,i,temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(ass==true && a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            else if(ass==false && a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
//Q2 Sort strings depending on bool type values:
void sortStrings(char a[][20],int size,bool ass=true)  
{
    int r,i;
    char temp[20];
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(ass==true&&1==strcmp(a[i],a[i+1]))
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }
            else if(ass==false&&-1==strcmp(a[i],a[i+1]))
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }
        }
    }
}
//Q3 Rotate an array n position
void rotate_Array(int a[],int size,int n=1,int d=1)   
{
    int i,temp;
    if(d==1)
        while(n--)
        {
            temp=a[size-1];
            for(i=size-1;i>=1;i--)
                a[i]=a[i-1];
            a[0]=temp;
        }
    else 
        while(n--)
        {
            temp=a[0];
            for(i=0;i<size;i++)
                a[i]=a[i+1];
            a[size-1]=temp;
        }
}
//Q4 LCM of two numbers:
int LCM(int a,int b,int c)   
{
    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<=a*b*c;L++)
        if(L%a==0&&L%b==0&&L%c==0)
            return L;
}
//Q5 Wheather a number number is prime or not:
int is_Prime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
//Q6 Next prime of a given number:
int next_prime(int n)   
{
    for(n++;!is_Prime(n);n++);
    return n;
}
//Q7 Prime factor a given number:
void print_Prime_Factors(int n)   
{
    int i=2,flag=1;
    while(n>1)
    {
        while(n%i==0)
        {
            n/=i;
            flag=0;
        }
        if(flag==0)
            cout<<i<<" ";
        i=next_prime(i);
    }
}
int main()
{
    print_Prime_Factors(36);
    return 0;
}