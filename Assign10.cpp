#include<iostream>
#include<string.h>
using namespace std;
//Q1
class Cuboid
{
    private:
        int length,breadth,height;
    public:
        Cuboid()
        {
            length=0;
            breadth=0;
            height=0;
        }
        Cuboid(int l,int b,int h)
        {
            length=l;
            breadth=b;
            height=h;
        }
};
//Q2
class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[20];
        char mobile_No[15];
    public:
        Customer()
        {
            cust_id=0000;
            strcpy(name,"Anonymous");
            strcpy(email,"xyz@gmail.com");
            strcpy(mobile_No,"+91********35");
        }
        Customer(int id,char n[],char e[],char m[])
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile_No,m);
        }
};
//Q3
class Time
{
    private:
        int hr,min,sec;
    public:
        Time(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
};
//Q4
class Book
{
    private:
        int book_id;
        char title[10];
        float price;
    public:
        Book()
        {
            book_id=0;
            strcpy(title,"No-title");
            price=0.0f;
        }
        Book(int id,char t[],float p)
        {
            book_id=id;
            strcpy(title,t);
            price=p;
        }
};
//Q5
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex(int r,int img)
        {
            real=r;
            imaginary=img;
        }
        void showData()
        {
            cout<<endl<<"R="<<real<<" I="<<imaginary;
        }
};
int main()
{
    Complex c[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
    for(int i=0;i<=4;i++)
        c[i].showData();
    return 0;
}