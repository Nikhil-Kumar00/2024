#include<iostream>
using namespace std;
//Q1 Average of 3 numbers:
/*int main()    
{
    int a,b,c;
    float avg;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average is:"<<avg;
    return 0;
}*/
//Q2 Square of a number:
/*int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    cout<<"Square is:"<<x*x;
    return 0;
}*/
//Q3 Swap values of 2 variables:
/*int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<endl<<"A:"<<a<<" B:"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"A:"<<a<<" B:"<<b;
    return 0;
}*/
//Q4 To check wheather a number is greater or not:
/*int main()    
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if(a>b)
        cout<<"Greater:"<<a;
    else 
        cout<<"Greater:"<<b;
    return 0;
}*/
//Q5 Sum of an array elements:
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter elements:";
    for(i=0;i<=9;i++)
        cin>>arr[i];
    for(i=0;i<=9;i++)
        sum+=arr[i];
    cout<<"Sum is:"<<sum;
    return 0;
}