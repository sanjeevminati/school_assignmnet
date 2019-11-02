#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

struct student
{
	char name[20];
	char reg[15];
	char course[10];
	int cgpa;
};

fstream file;
student obj;

void add()
{
	cout<<"Enter Name: ";
	cin>>obj.name;
	cout<<"Enter Registration Number: ";
	cin>>obj.reg;
	cout<<"Enter Course: ";
	cin>>obj.course;
	cout<<"Enter CGPA: ";
	cin>>obj.cgpa;
	
	file.open("database.txt",ios::app) ;
	file.write((char*)&obj,sizeof(obj));
	file.close();
}

void show_all()
{     //  clrscr();
	system("clear");
	file.open("database.txt",ios::in);
	file.read((char*)&obj,sizeof(obj));
	
	while (file.eof()==0)
	{
		cout<<"Name: "<<obj.name<<endl;
		cout<<"Registration Number: "<<obj.reg<<endl;
		cout<<"Course: "<<obj.course<<endl;
		cout<<"CGPA: "<<obj.cgpa<<endl<<endl;
		
		file.read((char*)&obj,sizeof(obj));
	}
	file.close();
	
	
}

void search()
{      // clrscr();
	//char user[20];
	int user;
	cout<<"Enter NAME ";
	cin>>user;
	file.open("database.txt",ios::in);
	file.read((char*)&obj,sizeof(obj));
	
	while (file.eof()==0)
	{
		if (obj.cgpa == user)
		{
			cout<<"Name: "<<obj.name<<endl;
			cout<<"Registration Number: "<<obj.reg<<endl;
			cout<<"Course: "<<obj.course<<endl;
			cout<<"CGPA: "<<obj.cgpa<<endl<<endl;
		}
		
		file.read((char*)&obj,sizeof(obj));
	}
	file.close();
	//system("clear");
	
	
}



int main()
{
	// clrscr();
	
	//file.open("c:\database.txt",ios::out);
	//file.close();
	int option;
	
	string username,password;
	cout<<"\n --------- Admin Login --------\n";	
	cout<<"\n Enter username : ";
	cin>>username;
	cout<<"\n Enter password : ";
	cin>>password;
	if(username=="admin" && password=="admin@123") 
	{
		
		
		while(1)
		{
			// clrscr();
			
			cout<<"Enter 1 to Enter Record\n";
			cout<<"Enter 2 to Show All Record\n";
			cout<<"Enter 3 to Search Record\n";
			cout<<"Enter 4 to Exit\n";
			cout<<"\n\nEnter Option: ";
			cin>>option;
			
			switch (option)
			{
				case 1:
					add();
					cout<<"\n\nRecord Entered\n";
					
					break;
				case 2:
					show_all();
					break;
				case 3:
					system("clear");
					search();
					break;
				case 4:
					exit(0);
			}
		}
	}
	else
		cout<<"\n Error ! Invalid Credintials..";	
	
	
	
	return 0;
}
