#include<iostream>
using namespace std;
//Q1 Complex of two numbers:
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
            cout<<"A:="<<a<<endl<<"B:="<<b;
        }
};
//Q2 set time and shoe time:
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int a,int b,int c)
        {
            hr=a;
            min=b;
            sec=c;
        }
        void showTime()
        {
            cout<<hr<<":"<<min<<":"<<sec;
        }
};
//Q3
class Date
{
    private:
        int d,m,y;
        char* getMonthName(int n)
        {
            switch(n)
            {
                case 1:
                    return "Jan";
                case 2:
                    return "Feb";
                case 3:
                    return "Mar";
                case 4:
                    return "Apr";
                case 5:
                    return "May";
                case 6:
                    return "Jun";
                case 7:
                    return "Jul";
                case 8:
                    return "Agu";
                case 9:
                    return "Sep";
                case 10:
                    return "Oct";
                case 11:
                    return "Nov";
                case 12:
                    return "Dec";
                default:
                    return "Invalid-Month";
            }
        }
    public:
        void setDate(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void showDate(int formate=1)
        {
            if(formate==1)
                cout<<endl<<d<<"/"<<m<<"/"<<y;
            else if(formate==2)
                cout<<endl<<d<<"-"<<m<<"-"<<y;
            else if(formate==3)
                cout<<endl<<d<<"-"<<getMonthName(m)<<"-"<<y;
        }
};
//Q4
class Circle
{
    private:
        int radious;
    public:
        void setRadious(int r)
        {
            radious=r;
        }
        int getRadious()
        {
            return radious;
        }
        float area()
        {
            return 3.14*radious*radious;
        }
        float circumference()
        {
            return 2*3.14*radious;
        }
};
int main()
{
    Date d1;
    d1.setDate(10,8,2024);
    d1.showDate(3);
    return 0;
}