#include<stdio.h>
#include<conio.h>
//Q1 To check odd even:
/*int main()    
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2)
        printf("ODD:");
    else 
        printf("EVEN:");
    return 0;
}*/
//Q2 Factorial of a number:
/*int main()   
{
    int i,f=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    printf("Factorial is:%d",f);
    return 0;
}*/
//Q3 Swap values of 2 int variable:
/*int main()    
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\nA:%d B:%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nA:%d B:%d",a,b);
    return 0;
}*/
//Q4 LCM of 2 numbers:
/*int LCM(int a,int b)   
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0&&L%b==0)
            return L;
}*/
//Q5 To check num is prime or not:
int is_Prime(int n)   
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    if(is_Prime(a))
        printf("Prime:");
    else 
        printf("Not-Prime:");
    return 0;
}