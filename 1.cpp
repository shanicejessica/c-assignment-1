#include<iostream>
using namespace std;
int main()
{
int number;
number=34;
cout<<"numb="<<number<<endl;
double a,b,multiply,divide;
a=3.7654;
b=3.9875;
multiply=a*b;
cout<<"product="<<multiply<<endl;
divide=a/b;
cout<<"quotient="<<divide<<endl;
char d;
d='s';
cout<<"name="<<d;
bool odd=false;
int z;
cout<<"enter no-";
cin>>z;
if(z%2==1) odd=true;
if(odd==true) cout<<"odd";
else
cout<<"even";
return 0;
}

