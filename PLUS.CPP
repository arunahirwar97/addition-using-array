#include<iostream.h>
#include<conio.h>
int main()
{
int a,sum=2,i,s;
float arr[100];

cout<<"Enetr the value::";
cin>>a;
cout<<"\n";
for( i=1;i<=a;i++)
{
cout<<"Enter the nomber :";
cin>>arr[i];
cout<<"\n";

}
for( i=1;i<=a;i++)
{

cout<<"\n";
s=sum+arr[i];
cout<<sum<<"+"<<arr[i]<<"="<<sum+arr[i];
 cout<<"\n";
   }
getch();
return 0;
}
