#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void printSubstring(char s[],int,int,int=-1);
//Q1 Calculate HCF of two numbers:
int HCF(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0&&b%H==0)
            return H;
}
//Q2 Volume of cuboid:
int volume(int l,int b,int h)
{
    return l*b*h;   
}
//Q2 Volume of cone:
float volume(int r,int h)
{
    return 3.14*r*r*h/3.0;
}
//Q2 Volume of sphere:
float volume(int r)
{
    return 4.0/3*3.14*r*r*r; 
}
//Q3 Print substring:
void printSubstring(char s[],int size,int startIndex,int endIndex)
{
    if(endIndex==-1)
        endIndex=strlen(s);
    for(int i=startIndex;i<endIndex;i++)
        cout<<s[i];
} 
//Q4 Swapping two array:
int swap(int a1[],int a2[],int size)
{
    int t,i;
    for(i=0;i<size;i++)
    {
        t=a1[i];
        a1[i]=a2[i];
        a2[i]=t;
    }
}
//Q5 Merge two sorted array same size:
int* merge(int A[],int B[],int size)
{
    int *arr=(int*)calloc(size*2,sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else 
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<size)   
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int *r,i;
    r=merge(arr1,arr2,5);
    for(i=0;i<=9;i++)
        cout<<r[i]<<" ";
    return 0;
}