#include<iostream>
using namespace std;
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
            cout<<endl<<"A:="<<a<<endl<<"B:="<<b;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    return 0;
}