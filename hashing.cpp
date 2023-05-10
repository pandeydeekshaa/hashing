#include <iostream>
#include <stdio.h>
#include<string>
using namespace std;
int main()
{
int n;
cout<<"Enter the number of words"<<endl;
cin>>n;
int sum=0;
string ch[n];
string arr[11];
for( int i=0;i<n;i++)
{
cin>>ch[i];
}
for( int i=0;i<n;i++)
{
sum=0;
for( int y=0;y<ch[i].length();y++)
{
sum=sum+ (int(ch[i].at(y))-97);
}
sum=sum%11;
if(arr[sum]!="")
{
cout<<ch[i]<<" "<< sum;
while(arr[sum]!="")
{
sum+=1;
if(sum>=11)sum=sum%11;
}
arr[sum]=ch[i];
}
else
{
cout<<ch[i]<<" "<< sum;
arr[sum]=ch[i];
}
}
cout<<"The Hash table is "<<endl;
cout<<'\n';
for( int i=0;i<11;i++)
{
cout<<i<<" "<< arr[i]<<endl;
}
}
