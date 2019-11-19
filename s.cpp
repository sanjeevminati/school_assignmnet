#include <iostream>
#include <fstream>
#include <string>
//#include <conio.h>

using namespace std;

//Structure defining

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 string Registration;//for Registration No number
 string classes;//for class info
}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experiance of the person
 string pay;//Pay of the Teacher
 string subj;//subject whos he/she teach
 string lec;//Lecture per Week
 string addrs;//Adders of teacher home
 string cel_no;//Phone number 
 string blod_grp;//Bool Group 
 string serves;//Number of serves in School

}tech[50];//Variable of teacher type

///////////////////////////////////////////////////
//Main function

int main()
{

int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{ 
 system("clear");

//Level 1-Display process 
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
 cout<<"Enter your choice: "<<endl;
 cout<<"1.Students information"<<endl;
 cout<<"2.Teacher information"<<endl;
 cout<<"3.Exit program"<<endl;
 cin>>choice;

system("clear");


switch(choice)//First switch
{
 
case '1': //Student
 { 
while(1)//inner loop-1
{ 
system("cls");//Clear screen
//Level-2 display
cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display entry\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 cin>>studentData.fname;
 cout<<"Enter Last name: ";
 cin>>studentData.lname;
 cout<<"Enter Registration number: ";
 cin>>studentData.Registration;
 cout<<"Enter class: ";
 cin>>studentData.classes;
 
 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
 cout<<"Do you want to enter data: ";
 cout<<"Press Y for Continue and N to Finish:  ";
 cin>>choice;
}
} 
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); 

cout<<"Enter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"First Name: "<<studentData.fname<<endl;
 cout<<"Last Name: "<<studentData.lname<<endl;

 getline(f2,studentData.Registration);
 cout<<"Registration No number: "<<studentData.Registration<<endl;
 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";


}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop    
}

case '2'://Teachers biodata
{ 
while(1)//inner loop-2
{ 
system("clear");//Clear screen
//Level-2 Display process
cout<<"\t\t\tTEACHERS INFORMATION AND BIODATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{ 
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
  cout<<"Enter First name: ";
  cin>>tech[i].fst_name;
  cout<<"Enter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"Enter qualification: ";
  cin>>tech[i].qualification;
  cout<<"Enter experiance(year): ";
  cin>>tech[i].exp;
  cout<<"Enter number of year in this School: ";
  cin>>tech[i].serves;
  cout<<"Enter Subject whos teach: ";
  cin>>tech[i].subj;
  cout<<"Enter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"Enter pay: ";
  cin>>tech[i].pay;
  cout<<"Enter Phone Number: ";
  cin>>tech[i].cel_no;
  cout<<"Enter Blood Group: ";
  cin>>tech[i].blod_grp;
  
  
  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl 
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;
  cout<<"Do you want to enter data: ";
  cin>>choice;
 }//if
}//for loop
//for finding through name 
system("clear");



t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{ 
ifstream t2("teacher.txt"); 

cout<<"Enter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,tech[j].fst_name);
 
 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"First name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"Last name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"Qualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"Experience: "<<tech[j].exp<<endl;

  getline(t2,tech[j].serves);
  cout<<" number of year in this School: "<<tech[j].serves<<endl;

  getline(t2,tech[j].subj);
  cout<<"Subject whos teach: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"Enter Lecture(per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].pay);
  cout<<"pay: "<<tech[j].pay<<endl;

  getline(t2,tech[j].addrs);
  cout<<"Address: "<<tech[j].addrs<<endl;

  getline(t2,tech[j].cel_no);
  cout<<"Phone Number: "<<tech[j].cel_no<<endl;

  getline(t2,tech[j].blod_grp);
  cout<<"Bool Group: "<<tech[j].blod_grp<<endl;
 }//if
 
}//for loop
t2.close();
if(notFound == 0){

 cout<<"No Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
//getch();//To hold data on screen
//getch();//To hold data on screen
}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main 
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2


case '3':
{
break;//outer case 3
}//outer case 3
}   
break;//outer loop
}
}
