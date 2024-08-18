#include<iostream>
using namespace std;
//Q1
void print1()
{
    cout<<"MySirG";
}
//Q2
void print2()
{
    cout<<"Hello"<<endl<<"MySirG";
}
//Q3 Sum of 2 numbers:
void sum()   
{
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is:"<<c;
}
//Q4 Area of circle:
void area()   
{
    int radious;
    float area;
    cout<<"Enter radious of the circle:";
    cin>>radious;
    area=3.14*radious*radious;
    cout<<"Area of the circle is:"<<area;
}
//Q5 Volume of cuboid:
int cuboid()    
{
    int l,b,h,vol;
    cout<<"Enter length breadth and height:";
    cin>>l>>b>>h;
    vol=l*b*h;
    cout<<"Volume is:"<<vol;
}
int main()
{
    cuboid();
    return 0;
}