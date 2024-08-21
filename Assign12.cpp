#include<iostream>
using namespace std;
//Q1
class Complex
{
    private:
        int a,b;
    public:
        void setData(int r,int i)
        {
            a=r;
            b=i;
        }
        void showData()
        {
            cout<<endl<<"R="<<a<<" I="<<b;
        }
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }
        bool operator==(Complex C)
        {
            if(a==C.a && b==C.b)
                return true;
            return false;
        }
};
//Q2
class Time
{
    private:
        int hour,min,second;
    public:
        void setTime(int h,int m,int s)
        {
            hour=h;
            min=m;
            second=s;
        }
        void showTime()
        {
            cout<<endl<<hour<<":"<<min<<":";
        }
        bool operator>(Time T)
        {
            if(hour>T.hour)
                return true;
            else if(hour<T.hour)
                return false;
            else if(min>T.min)
                return true;
            else if(min<T.min)
                return false;
            else if(second>T.second)
                return true;
            return false;
        }
        bool operator<(Time T)
        {
            if(hour<T.hour)
                return true;
            else if(hour>T.hour)
                return false;
            else if(min<T.min)
                return true;
            else if(min>T.min)
                return false;
            else if(second<T.second)
                return true;
            return false;
        }
        Time operator++()   //Pre-increment
        {
            second++;
            min+=second/60;
            second=second%60;
            hour+=min/60;
            min=min%60; 
            return *this;
        }
        Time operator++(int)   //Post-increment
        {
            Time temp=*this;
            second++;
            min+=second/60;
            second=second%60;
            hour+=min/60;
            min=min%60;
            return temp;
        }
        Time operator+(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.min=min+T.min;
            temp.second=second+T.second;
            temp.min+=temp.second/60;
            temp.second=temp.second%60;
            temp.hour+=temp.min/60;
            temp.min=temp.min%60;
            return temp;
        }
};
//Q3
class Matrix
{
    private:
        int a[3][3];
    public:
        void input()
        {
            cout<<endl<<"Enter 9 numbers for matrix:";
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                   cin>>a[i][j];
        }
        void printMatrix()
        {
            cout<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
        Matrix operator+(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.a[i][j]=a[i][j]+M.a[i][j];
            return temp;
        }   
        Matrix operator-(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.a[i][j]=a[i][j]-M.a[i][j];
            return temp;
        }
        Matrix operator*(Matrix M)
        {
            Matrix temp;
            int sum,k;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                {
                    for(k=0,sum=0;k<=2;k++)
                        sum+=a[i][k]*M.a[k][j];
                    temp.a[i][j]=sum;
                }    
            return temp;
        }
};
int main()
{
    Matrix A,B,C;
    A.input();
    B.input();
    C=A*B;
    C.printMatrix();
    return 0;
}