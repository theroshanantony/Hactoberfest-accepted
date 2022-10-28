#include<iostream.h>
#include<conio.h>
void exc(int a[10],int n)
{
int i,j,temp;
  if(n%2==0)
   for(i=0,j=n/2;i<n/2;i++,j++)
 {temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 else if(n%2!=0)
for(i=0,j=n/2+1;i<n/2;i++,j++)
 {temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
for(i=0;i<n;i++)
 cout<<a[i];
}
void swap(int a[10], int n)
{ int temp;
if (n%2==0)
for(int i=0;i<n;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
else if (n%2!=0)
for(int i=0;i<n-1;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(int i=0;i<n;i++)
cout<<a[i];
}
void main()
{
clrscr();
int ch,n,i,j,a[10];
char y='y';
while(y=='y'||y=='Y')
{
cout<<"\nEnter limit";
cin>>n;
cout<<"\nEnter array";
for(i=0;i<n;i++)
 cin>>a[i];
cout<<"\nMenu \n1Exchange first half and second half\n2Swap alternate elements";
cin>>ch;
if(ch==1)
exc(a,n);
else if(ch==2)
swap(a,n);
else
cout<<"invalid input";
cout<<"\nDo you want to continue";
cin>>y;
}
getch();
}

