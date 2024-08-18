#include<iostream>
#include<string.h>
using namespace std;
//Q1
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int hr,int min,int sec)
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        void showTime() { cout<<endl<<hr<<":"<<min<<":"<<sec; }
        void setHour(int hr) { this->hr=hr; }
        void setMinute(int min) { this->min=min; }
        void setSecond(int sec) { this->sec=sec; }
        int getHour() { return hr; }
        int getMinute() { return min; }
        int getSecond() { return sec; }
        bool operator>(Time &T)
        {
            if(hr>T.hr)
                return true;
            else if(hr<T.hr)
                return false;
            else if(min>T.min)
                return true;
            else if(min<T.min)
                return false;
            else if(sec>T.sec)
                return true;
            else 
                return false;
        }
};
Time* getTimeArray(int size)
{
    return new Time[size];
}
void sortTime(Time T[],int size)
{
    Time temp;
    int r,i;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(T[i]>T[i+1])
            {
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
            }
        }
    }
}
void display(Time T[],int size)
{
    for(int i=0;i<size;i++)
        T[i].showTime();
}
//Q2
class String
{
    private:
        char *s;
        int length;
    public:
        String()
        {
            s=NULL;
            length=0;
        }
        void printString()
        {
            cout<<s<<endl;
        }
        void inputString()
        {
            int i,size=1;
            char ch=0,*p,*q;
            q=new char[1];
            *q='\0';
            while(ch!=10)
            {
                p=new char[size];
                ch=cin.get();
                if(ch==10)
                {
                    delete []p;
                    s=q;
                    length=strlen(s);
                    break;    
                }
                for(i=0;i<size;i++)
                    p[i]=q[i];
                *(p+i-1)=ch;
                delete []q;
                q=new char[size+1];
                for(i=0;i<size;i++)
                    q[i]=p[i];
                q[i]='\0';
                delete []p;
                size++;
            }
        }
        void upper()
        {
            for(int  i=0;i<length;i++)
            {
                if(s[i]>96)
                    s[i]-=32;
            }
        }
        void lower()
        {
            for(int i=0;i<length;i++)
                if(s[i]<96)
                    s[i]+=32;
        }
        int getlength()
        {
            return length;
        }
        char* getString()
        {
            return s;
        }
};
int main()
{
    String s;
    s.inputString();
    s.printString();
    return 0;
}