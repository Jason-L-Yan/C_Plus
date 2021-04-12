#include <iostream>
#include <cmath>
using namespace std;
 
int SimpleSolution();
int optimize();
int main()
{
   int number1,number2;
   cout<<"求用1，2，5这三个数不同个数组合的和为100的组合个数"<<endl;
   number1=SimpleSolution();
   cout<<"Simple solution:"<<number1<<endl;
      number2=optimize();
   cout<<"Optimize solution:"<<number2<<endl;
   return 0;
}
 
int SimpleSolution()
{
int number(0);
for(int i=0;i<=100;i++)
   for(int j=0;j<=50;j++)
    for(int k=0;k<=20;k++)
    {
     if(i+2*j+5*k==100)
      number++;
    }
return number;
}
 
int optimize()
{
int number=0;
for(int m=0;m<=100;m+=5)
{
       number+=(m+2)/2;
}
return number;
}
 