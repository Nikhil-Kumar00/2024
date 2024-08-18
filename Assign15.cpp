#include<iostream>
#include<string.h>
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
        void showTime()
        {
            cout<<endl<<"A="<<a<<" B="<<b;
        }
        friend Complex operator-(Complex);
};
Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
//Q2
class Integer
{
    private:
        int a;
    public:
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};
bool operator==(const Integer I1,const Integer I2)  
{
    return I1.a==I2.a;
}
bool operator!(Integer I)
{
    return !(I.a);
}
//Q3
class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
        friend ostream& operator<<(ostream&,Coordinate);
        friend istream& operator>>(istream&,Coordinate&);
};
istream& operator>>(istream &din,Coordinate &C)
{
    din>>C.x>>C.y;
    return din;
}
ostream& operator<<(ostream &dout,Coordinate C)
{
    dout<<C.x<<C.y;
    return dout;
}
//Q4
class Student
{
    private:
        int roll_no;
        char name[20];
        int age;
    public:
        void setStudent(int r,char n[],int a)
        {
            roll_no=r;
            strcpy(name,n);
            age=a;
        }
        void showStudent()
        {
            cout<<endl<<"Roll No="<<roll_no<<"\nName="<<name<<"\nAge="<<age;
        }
        bool operator==(Student S)
        {
            return (roll_no==S.roll_no && age==S.age && (!strcmp(name,S.name)));
        }
};
int main()
{
    
    return 0;
}