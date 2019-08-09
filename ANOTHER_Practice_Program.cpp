#include<stdio.h>
#include<iostream.h>
#include<conio.h>

struct student                 //define structure
{
 int age;
 char name[20];
 float marks;

};

main()
{
  int i;
  int arr[2];
  struct student x,z;
  struct student y[2];           //member declaration
  clrscr();

  //working with simple var of structure
  cout<<"Enter Name of x ";
  cin>>x.name;              //access data through dot operator

  cout<<"Enter Age of x ";
  cin>>x.age;

  cout<<"Enter Marks of x ";
  cin>>x.marks;

  cout<<x.name<<" "<<x.age<<" "<<x.marks;


  cout<<"Enter Name of z ";
  cin>>z.name;              //access data through dot operator

  cout<<"Enter Age of z ";
  cin>>z.age;

  cout<<"Enter Marks of z ";
  cin>>z.marks;

  cout<<z.name<<" "<<z.age<<" "<<z.marks;

  //working with array

  for(i=0;i<2;i++)
  {
   cout<<"\nEnter Name of y["<<i<<"] ";
   cin>>y[i].name;

  cout<<"\nEnter Age of y["<<i<<"] ";
  cin>>y[i].age;

  }

  for(i=0;i<2;i++)
  {
     cout<<y[i].name<<" "<<y[i].age<<endl;
  }

  getch();
}
