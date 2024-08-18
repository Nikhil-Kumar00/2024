#include<iostream>
#include<string.h>
using namespace std;
//Q1
class Person
{
    private:
        int age;
        char name[20];
    public:
        Person(int age,char name[])
        {
            this->age=age;
            strcpy(this->name,name);
        }
};
//Q2
class Complex
{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<endl<<"A="<<a<<" B="<<b;
        }

};
void dynamic()
{
    Complex *p=new Complex();
    p->setData(5,10);
    p->showData();
    delete p;
}
int main()
{
    dynamic();
    return 0;
}