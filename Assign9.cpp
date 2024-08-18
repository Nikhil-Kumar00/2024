#include<iostream>
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
        void showData()
        {
            cout<<endl<<"A:="<<a<<"B:="<<b;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex subtract(Complex C)
        {
            Complex temp;
            temp.a=a-C.b;
            temp.b=b-C.b;
            return temp;
        }
        Complex multiply(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }
};
//Q2
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showTime()
        {
            cout<<endl<<h<<":"<<m<<":"<<s;
        }
        void normalize()
        {
            m+=s/60;
            s%=60;
            h+=m/60;
            m%=60;
        }
        Time add(Time T)
        {
            Time temp;
            temp.h=h+T.h;
            temp.m=m+T.m;
            temp.s=s+T.s;
            temp.normalize();
            return temp;
        }
        bool is_greater(Time T)
        {
            if(h>T.h)
                return true;
            else if(h<T.h)
                return false;
            else if(m>T.m)
                return true;
            else if(m<T.m)
                return false;
            else if(s>T.s)
                return true;
            else 
                return false;
        }
};  
//Q3
class TestResult
{
    private:
        int roll_no;
        int right;
        int wrong;
        int net_score;
        static int right_weightage,wrong_weightage;
    public:
        void setRoll_no(int rn) { roll_no=rn; }
        void setRight(int ryt) { right=ryt; }
        void setWrong(int rong) { wrong=rong; }
        void setNet_Score(int ns) { net_score=ns; }
        static void setRight_weightage(int rytweightage) { right_weightage=rytweightage; }
        static void setWrong_weightage(int rongweightage) { wrong_weightage=rongweightage; }
        int getRoll_no() { return roll_no; }
        int getRight() { return right; }
        int getWrong() { return wrong; }
        int getNet_Score() { return net_score; }
        static int getRight_Weightage() { return right_weightage; }
        static int getWrong_Weightage() { return wrong_weightage; }
};
int TestResult::right_weightage;
int TestResult::wrong_weightage;

void setTestResult(TestResult &t,int r,int right,int wrong)
{
    t.setRoll_no(r);
    t.setRight(right);
    t.setWrong(wrong);
    t.setNet_Score(t.getRight()*TestResult::getRight_Weightage()-t.getWrong()*TestResult::getWrong_Weightage());
}
void sortByNetScore(TestResult tr[],int size)
{
    int r,i;
    TestResult temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(tr[i].getNet_Score()<tr[i+1].getNet_Score())
            {
                temp=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=temp;
            }
        }
    }
}
void displayTestResult(TestResult tr[],int size)
{
    cout<<endl;
    cout<<"----------------------------------";
    cout<<endl;
    cout<<"RollNo Right Wrong NetScore";
    for(int i=0;i<size;i++)
    {
        cout<<endl;
        cout<<tr[i].getRoll_no()<<" ";
        cout<<tr[i].getRight()<<" ";
        cout<<tr[i].getWrong()<<" ";
        cout<<tr[i].getNet_Score()<<" ";
    }
}
//Q4
class Matrix
{
    private:
        int A[3][3];
    public:
        void input()
        {
            cout<<endl<<"Enter elements of the matrix:";
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    cin>>A[i][j];
        }
        void ShowMatrix()
        {
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    cout<<A[i][j];
        }
        Matrix addMatrix(Matrix M)
        {
            Matrix c;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    c.A[i][j]=A[i][j]+M.A[i][j];
                return c;
        }
        Matrix subtraction(Matrix M)
        {
            Matrix c;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    c.A[i][j]=A[i][j]-M.A[i][j];
                return c;
        }
        Matrix multiply(Matrix M)
        {
            Matrix c;
            int sum;
            for(int i=0;i<=2;i++)
                for(int j=0,sum=0;j<=2;j++)
                {
                    for(int k=0;k<=2;i++)
                        sum+=A[i][k]*M.A[k][j];
                    c.A[i][j]=sum;
                }
                return c;
        }
        Matrix transpose()
        {
            Matrix c;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    c.A[i][j]=A[j][i];
            return c;
        }
        bool is_singular()
        {
            int s;
            s=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-(A[0][1]*A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
            if(s==0)            
                return true;
            return false;
        }
};
int main()
{
    int r,right,wrong;
    TestResult tr[5];
    TestResult::setRight_weightage(3);
    TestResult::setWrong_weightage(-1);
    for(int i=0;i<=4;i++)
    {
        cout<<endl<<"Enter details for test result:"<<i+1;
        cout<<endl;
        cout<<"Enter roll no.";
        cin>>r;
        cout<<"Enter number of right answers:";
        cin>>right;
        cout<<"Enter number of wrong answers:";
        cin>>wrong;
        setTestResult(tr[i],r,right,wrong);
    }
    sortByNetScore(tr,5);
    displayTestResult(tr,5);
    return 0;
}