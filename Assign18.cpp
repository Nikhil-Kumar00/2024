#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//Q1
class Person
{
    private:
        char name[20];
        int age;
    protected:
        void setName(char n[]) { strcpy(name,n); }
        void setAge(int a) { age=a; }
        char* getName() { return name; }
        int getAge() { return age; }
};
class Employee:public Person 
{
    private:
        float salary;
    public:
        void setEmployee(char n[],int a,float s)
        {
            setName(n);
            setAge(a);
            salary=s;
        }
        void showEmployee()
        {
            cout<<endl<<"Name="<<getName()<<endl;
            cout<<"Age="<<getAge()<<endl;
            cout<<"Salary="<<salary;
        }
};
//Q2
class Circle
{
    private:
        int radious;
    public:
        void setRadious(int r) { radious=r; }
        int getRadious() { return radious; }
        float getArea() { return 3.14*radious*radious; }
};
class ThickCircle:public Circle
{
    private:
        int thickness;
    public:
        void setThickness(int t) { thickness=t; }
        int getThickness() { return thickness; }
        float getArea()
        {
            return 3.14*(getRadious()+thickness)*(getRadious()+thickness)-3.14*getRadious()*getRadious();
        }
};
//Q3
class Coordinate 
{
    private:
        int x,y;
    public:
        void setCoordinate(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void showCoordinate()
        {
            cout<<endl<<"("<<x<<","<<y<<")";
        }
        double getDistance()
        {
            return sqrt(x*x+y*y);
        }
        double getDistance(Coordinate C)
        {
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
};
//Q4
class Shape
{
    private:
        char shapeName[20];
    public:
        void setShapeName(char s[])
        {
            strcpy(shapeName,s);
        }
        char* getShapeName() { return shapeName; }
};
class Straigthline:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        void setLine(Coordinate c1,Coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }
        double getDistance()
        {
            return c1.getDistance(c2);
        }
        void shoeLine()
        {
            c1.showCoordinate();
            c2.showCoordinate();
        }
};
int main()
{
    
    return 0;
}