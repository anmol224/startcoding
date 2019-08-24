#include<conio.h>
#include<iostream.h>
int main()
{
int a[10],b[num],num;
cout<<" enter array a:"<<"\n";
for(int i=0;i<10;i++)
{
cin>>a[i];
}
for(i=0;i<10;i++)
cout<<" { "<<a[i]<<"}";
cout<<" enter the value of num:"<<"\n";
cin>>num;
for(i=0;i<num;i++)
{
cin>>b[i];
 }
 for(i=0;i<num;i++)
 cout<<" {"<<b[i]<<"}";

   getch();
   return 0;
   }