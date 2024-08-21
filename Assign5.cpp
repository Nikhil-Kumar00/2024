#include<iostream>
#include<math.h>
using namespace std;
int add(int,int,int=0);
//Q1 Swapping 2 variable using reference variable:
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
//Q2 Add 2 & 3 numbers using default arguement:
int add(int x,int y,int z)
{
    return x+y+z;
}
//Q3 Area of circle:
float area(int r)
{
    return 3.14*r*r;
}
//Q3 Aera of rectangle:
int area(int l,int b)
{
    return l*b;
}
//Q3 Area of triangle:
float area(int a,int b,int c)
{
    float s,area;
    s=(a+b+c)/2.0;
    area=sqrt((s*(s-a)*(s-b)*(s-c)));
    return area;
}
//Q4 find maximum value:
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
//Q4 find maximum of 2 float variable:
int max(float a,float b)
{
    if(a>b)
        return a;
    return b;
}
//Q5 Add 2 numbers :
int add(int a,int b)
{
    return a+b;
}
//Q5 Add 3 numbers:
int add(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    return 0;
}