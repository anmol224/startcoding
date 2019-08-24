#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int a[]={1,2,3,4,5};
int num;
cout<<" enter the value of num:"<<"\n";
cin>>num;
for(int i=0;i<=2;i++)
for(int j=4;j>2;j--)
if(a[i]+a[j]==num)
{
cout<<a[i]<<" ";
cout<<a[j]<<" ";
}
getch();
return 0;
}
