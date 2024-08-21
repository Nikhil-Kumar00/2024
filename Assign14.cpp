#include<iostream>
using namespace std;
//Q1
class Complex 
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<endl<<"A="<<a<<" B="<<b;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a-X.b*Y.b;
    temp.b=X.a*Y.b+X.b*Y.a;
    return temp;
}
Complex operator-(Complex X,Complex Y) 
{
    Complex temp;
    temp.a=X.a+Y.b;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
//Q2
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showTime()
        {
            cout<<endl<<hr<<":"<<min<<":"<<sec;
        }
        Time operator=(Time T)
        {
            hr=T.hr;
            min=T.min;
            sec=T.sec;
            return *this;
        }
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time&);
};
istream& operator>>(istream &din,Time &T)
{
    din>>T.hr>>T.min>>T.sec;
    return din;
}
ostream& operator<<(ostream &dout,Time T)
{
    dout<<T.hr<<":"<<T.min<<":"<<T.sec;
    return dout;
}
//Q3
class Array 
{
    private:
        int *p;
        int size;
    public:  
        Array operator=(const Array A)
        {
            size=A.size;
            p=new int[size];
            for(int i=0;i<size;i++)
                p[i]=A.p[i];
            return *this;
        }
        friend Array* operator+(Array,Array);
};
Array* operator+(Array a1,Array a2)
{
    Array *arrptr=new Array();
    int i,k;
    arrptr->size=a1.size+a2.size;
    arrptr->p=new int[arrptr->size];
    for(i=0,k=0;i<a1.size;i++,k++)
        arrptr->p[k]=a1.p[i];
    for(i=0;i<a2.size;i++,k++)
        arrptr->p[k]=a2.p[i];
    return arrptr;
}
int main()
{
    
    return 0;
}