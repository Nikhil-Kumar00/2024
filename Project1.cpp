#include<iostream>
#include<stdlib.h>
using namespace std;
class calculator
{
    private:
        int a,b,c,n;
    public:
        void calculate()
        {
            while(1)
            {
                cout<<endl<<endl<<"*OPTIONS:";
                cout<<endl<<"1.Addition:";
                cout<<endl<<"2.Subtraction:";
                cout<<endl<<"3.Multiplication:";
                cout<<endl<<"4.Division:";
                cout<<endl<<"5.Exit:";
                cout<<endl<<endl<<"Select any option:=";
                cin>>n;
                switch(n)
                {
                    case 1:
                        cout<<"Enter two numbers:=";
                        cin>>a>>b;
                        c=a+b;
                        cout<<"Sum is:="<<c;
                    break;
                    case 2:
                        cout<<"Enter two numbers:=";
                        cin>>a>>b;
                        c=a-b;
                        cout<<"Subtraction is:="<<c;
                    break;
                    case 3:
                        cout<<"Enter two numbers:=";
                        cin>>a>>b;
                        c=a*b;
                        cout<<"Multiplication: is:="<<c;
                    break;
                    case 4:
                        cout<<"Enter two numbers:=";
                        cin>>a>>b;
                        c=a/b;
                        cout<<"Division is:="<<c;
                    break;
                    case 5:
                        exit(0);
                    default:
                        cout<<"Opps! You selected invalid number:";
                }
            }
        }
};
int main()
{
    calculator c1;
    c1.calculate();
    return 0;
}