#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//Q1
class Numbers
{
    private:
        int size;
        int *arr;
    public:
        Numbers(int s)
        {
            size=s;
            arr=new int[s];
        }
        ~Numbers()
        {
            delete []arr;
        }
        Numbers(Numbers &n)
        {
            size=n.size;
            arr=new int[size];
            for(int i=0;i<size;i++)
                arr[i]=n.arr[i];
        } 
};
//Q2
class Students
{
    private:
        int rollno;
        char name[20];
    public:
        Students()
        {
            cout<<"Enter roll number:";
            cin>>rollno;
            cout<<"Enter name:";
            cin.ignore();
            cin.getline(name,20);
        }
        void display()
        {
            cout<<endl<<rollno <<" "<<name;
        }
};
//Q3
class Date
{
    private:
        int d,m,y;
    public:
        Date():d(12),m(8),y(2024)
        {}
        Date(int d,int m,int y):d(d),m(m),y(y)
        {}
};
//Q4
class Room
{
    private:
        int room_no;
        int room_type;
        bool is_AC;
        double price;
    public:
        Room(int rno,int rtype,bool ac,double p)
        {
            room_no=rno;
            room_type=rtype;
            is_AC=ac;
            price=p;
        }
};
//Q5
class Circle
{
    private:
        int radious;
    public:
        Circle()
        {
            radious=1;
        }
        Circle(int r)
        {
            radious=r;
        }
};
int main()
{
    
    return 0;
}