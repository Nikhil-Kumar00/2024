#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
void f1(char file1[],char file2[])
{
    char ch;
    ifstream fin;
    ofstream fout;
    fin.open(file1,ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        fout.open(file2,ios::out);
        ch=fin.get();
        while(!fin.eof())
        {
            fout<<ch;
            ch=fin.get();
        }
        fout.close();
    }
}
void f2(char file1[])
{
    char ch;
    ifstream fin;
    ofstream fout;
    fin.open(file1,ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        ch=fin.get();
        while(!fin.eof())
        {
            fout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}
class Employee 
{
    private:
        int empid;
        char name[20];
        float salary;
    public:
        void input()
        {
            cout<<endl<<"Enter employee id,name,and salary:";   
            cout<<empid;
            cin.ignore();
            cin.getline(name,20);
            cin>>salary;
        }
        void display()
        {
            cout<<endl;
            cout<<"Employee id="<<empid;
            cout<<"Name="<<name<<endl;
            cout<<"Salary="<<salary;
        }
        void store();
        void printRecords();
        void search(int);
        void edit(int);
        void del(int);
};
void Employee::del(int id)
{
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        fout.open("tempfile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof())
        {
            if(id!=e.empid)
            {
                fout.write((char*)&e,sizeof(e));
            }
            fin.read((char*)&e,sizeof(e));
        }
        remove("Employeefile");
        rename("tempfile","Employeefile");
    }
    fin.close();
}
void Employee::edit(int id)
{
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        fout.open("tempfile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof())
        {
            if(id==e.empid)
            {
                cout<<"Enter correct employee name:";
                cin.ignore();
                cin.getline(e.name,20);
                cin>>e.salary;
            }
            fout.write((char*)&e,sizeof(e));
            fin.read((char*)&e,sizeof(e));
        }
        remove("Employeefile");
        rename("tempfile","Employeefile");
    }
    fin.close();
}
void Employee::search(int id)
{
    ifstream fin;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(empid==id)
            {
                display();
                break;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(empid!=id)
            cout<<"Search Failed! Record not found:";
    }
    fin.close();
}
void Employee::printRecords()
{
    ifstream fin;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            display();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}
void Employee::store()
{
    ofstream fout;
    fout.open("EmployeeFile",ios::binary|ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
int menu()
{
    int choice;
    cout<<"\n1. New Recorde";
    cout<<"\n2. Edit Recorde";
    cout<<"\n3. View all Recorde";
    cout<<"\n4. Search a Recorde";
    cout<<"\n5. Delete a Recorde";
    cout<<"\n6. Exit";
    cout<<"\n\nEnter youe choice:";
    cin>>choice;
    return choice;
}
int main()
{
    Employee emp;
    int id;
    while(true)
    {
        switch(menu())
        {
            case 1:
                emp.input();
                emp.store();
                break;
            case 2:
                cout<<endl<<"Enter employee id to edit:";
                cin>>id;
                emp.edit(id);
                break;
            case 3:
                emp.printRecords();
                break;
            case 4:
                cout<<endl<<"Enter employee id to search:";
                cin>>id;
                emp.search(id);
                break;
            case 5:
                cout<<endl<<"Enter employee id to delete:";
                cin>>id;
                emp.del(id);
                break;
            case 6:
                exit(0);
            default:
                cout<<endl<<"Invalid Choice:";
        }
    }
    return 0;
}