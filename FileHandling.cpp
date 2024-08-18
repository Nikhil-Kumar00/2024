#include<iostream>
#include<fstream>
using namespace std;
void writToFile(char fileName[],char data[])
{
    ofstream fout;
    fout.open(fileName,ios::out);
    fout<<data;
    fout.close();
}
void readFromFile(char fileName[])
{
    char x;
    ifstream fin;
    fin.open(fileName,ios::in);
    if(!fin)
        cout<<endl<<"File not found:";
    else 
    {
        x=fin.get();
        while(!fin.eof())
        {
            cout<<x;
            x=fin.get();
        }
        fin.close();
    }
}
int main()
{
    char fileName[]="File1.txt";
    char data[]="MySirG";
    //writToFile(fileName,data);
    readFromFile(fileName);
    return 0;
}