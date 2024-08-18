#include<iostream>
#include<string.h>
using namespace std;
//Q1
class A
{
    private:
        int a,b;        
    public:
        void setData(int x,int y) { a=x; b=y; }
        void showData()
        {
            cout<<endl<<"A="<<a<<" B="<<b; 
        }
        void input()
        {
            cout<<"\nEnter two values:";
            cin>>a>>b;
        }
};
class B:public A
{
    private:
        int c;
    public:
        virtual void input()
        {
            int a,b;
            cout<<"Enter three values:";
            cin>>a>>b>>c;
            setData(a,b);
        }
        virtual void showData()
        {
            A::showData();
            cout<<" C="<<c;
        }
};
//Q2
class Shape 
{
    private:
        char shape[20];
    public:
        void setShape(char s[])
        {
            strcpy(shape,s);
        }
        void displayShape()
        {
            cout<<endl<<"Shape="<<shape;
        }
        virtual int area()=0;
};
class Rectangle:public Shape
{
    private:
        int l,b;
    public:
        void setLength(int l) { this->l=l; }    
        void setBreadth(int b) { this->b=b; }
        int getLength() { return l; }
        int getBreadth() { return b; }
        int area() { return l*b; }
};
class Square:public Shape
{
    private:
        int side;
    public:
        void setSide(int s) { side=s; }
        int getSide() { return side; }
        int area() { return side*side; }
};
int main()
{
    Rectangle *r1=new Rectangle();
    Square *s1=new Square();
    char n1[]="Square",n2[]="Rectangle";
    s1->setShape(n1);
    r1->setShape(n2);
    r1->setLength(20);
    r1->setBreadth(8);
    cout<<endl<<"Area of Rectangle is:"<<r1->area();
    s1->setSide(10);
    cout<<endl<<"Area of square is:"<<s1->area();
    return 0;
}   