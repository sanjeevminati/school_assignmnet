#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

struct student
{
	string name;
	char reg[15];
	char course[10];
	int cgpa;
};

ofstream fout;

student obj;
ifstream fin;

void add()
{	
	fout.open("database.txt",ios::app);
	cout<<"Enter Name: ";
	cin>>obj.name;
	fout<<obj.name<<"\n";
	cout<<"Enter Registration Number: ";
	cin>>obj.reg;
	fout<<obj.reg<<"\n";
	cout<<"Enter Course: ";
	cin>>obj.course;
	fout<<obj.course<<"\n";
	cout<<"Enter CGPA: ";
	cin>>obj.cgpa;
	fout<<obj.cgpa<<"\n";

fout.close();
	
	
}

void show_all()
{     //  clrscr();
	//system("clear");
	//fout.open("database.txt");
	fin.open("database.txt",ios::in);
	fin>>obj.name;
	fin>>obj.reg;
	fin>>obj.course;
	fin>>obj.cgpa;
	
	while (fin.eof() == 0)
	{ 		
		cout<<"Name: "<<obj.name<<endl;
		cout<<"Registration Number: "<<obj.reg<<endl;
		cout<<"Course: "<<obj.course<<endl;
		cout<<"CGPA: "<<obj.cgpa<<endl<<endl;
		fin>>obj.name;
		fin>>obj.reg;
		fin>>obj.course;
		fin>>obj.cgpa;
		
		
		
	}
fin.close();

		
	
}

void search()
{      // clrscr();
	char c[20];
	string user;
	//int user;
	cout<<"Enter Name: ";
	cin>>user;
	fin.open("database.txt",ios::in);
	fin>>obj.name;
	fin>>obj.reg;
	fin>>obj.course;
	fin>>obj.cgpa;

	


	while (fin.eof()==0)
	{
		if (obj.name == user)
		{
			cout<<"\n\n";
			cout<<"Name: "<<obj.name<<endl;
			cout<<"Registration Number: "<<obj.reg<<endl;
			cout<<"Course: "<<obj.course<<endl;
			cout<<"CGPA: "<<obj.cgpa<<endl<<endl;
			
		}
		fin>>obj.name;
		fin>>obj.reg;
		fin>>obj.course;
		fin>>obj.cgpa;
		
		
	}
fin.close();
	
	//system("clear");
	
	
}



int main()
{
	// clrscr();
	
	//file.open("c:\database.txt",ios::out);
	//file.close();
	fout.open("database.txt",ios::app);
	fout.close();
	
	int option;
	
	string username,password;
	cout<<"\n --------- Admin Login --------\n";	
	cout<<"\n Enter username : ";
	cin>>username;
	cout<<"\n Enter password : ";
	cin>>password;
	if(username=="a" && password=="a") 
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
					//system("clear");
					break;
				case 3:
					//system("clear");
					search();
					break;
				case 4:
					system("clear");
					exit(0);
			}
		}
	}
	else
		cout<<"\n Error ! Invalid Credintials..";	
	
	
	
	return 0;
}
