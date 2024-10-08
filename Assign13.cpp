#include<iostream>
using namespace std;
long hcf(long a,long b)
{
    long H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            return H;
}
//Q1
class Fraction
{
    private:
        long numerator;
        long denominator;
    public:
        Fraction(long n=0,long d=0):numerator(n),denominator(d)
        {}
        Fraction operator+(Fraction f)
        {
            Fraction temp;
            temp.numerator=numerator*f.denominator+f.numerator*denominator;
            temp.denominator=denominator*f.denominator;
            int h=hcf(temp.numerator,temp.denominator);
            temp.numerator/=h;
            temp.denominator/=h;
            return temp;
        }
        bool operator<(Fraction f)
        {
            return numerator*f.denominator < f.denominator*denominator;
        }
};
//Q2
class Distance
{
    private:
        int km,m,cm;
    public:
        void normalize()
        {
            m+=cm/100;
            cm%=100;
            km+=m/1000;
            m%=1000;
        }
        Distance operator+(Distance d)
        {
            Distance temp;
            temp.km=km+d.km;
            temp.m=m+d.m;
            temp.cm=cm+d.cm;
            temp.normalize();
            return temp;            
        }
        Distance operator--()   //Pre-decrement:
        {
            Distance temp;
            if(km==0 && m==0 && cm==0)
            {
                temp.km=km;
                temp.m=m;
                temp.cm=cm;
            }
            else 
                if(cm==0)
                {
                    cm=100;
                    if(m==0)
                    {
                        m=999;
                        --km;
                    }
                    else 
                        --m;
                }
                temp.cm=--cm;
                temp.m=m;
                temp.km=km;
            return temp;
        }
        Distance operator--(int)    //Post-decrement:
        {
            Distance temp;
            temp.km=km;
            temp.m=m;
            temp.cm=cm;
            if(km==0 && m==0 && cm==0);
            else 
                if(cm==0)
                {
                    cm=100;
                    if(m==0)
                    {
                        m=999;
                        --km;
                    }
                    else 
                        --m;
                }
                cm--;
            return temp;
        }
};
//Q3
class Array
{
    private:
        int *p;
        int size;
    public:
        Array(int s)
        {
            size=size;
            p=new int[size];
        }
        int operator[](int index)
        {
            if(index>=0 && index<size)           
                return p[index];
            cout<<"Invalid array index:";
            return p[0];
        }
        ~Array()
        {
            delete []p;
        }
};
int main()
{

    return 0;
}