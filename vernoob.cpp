#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

struct employee
{
	string name;
	char reg[100];
	char course[100];
	int cgpa;
};

ofstream fout;

employee obj;
ifstream fin;

void add()
{	
	fout.open("noob.txt",ios::app);
	cout<<"Enter employee name: ";
	cin>>obj.name;
	fout<<obj.name<<"\n";
	cout<<"Enter emplyoee id: ";
	cin>>obj.reg;
	fout<<obj.reg<<"\n";
	cout<<"Enter Gender (M/F): ";
	cin>>obj.course;
	fout<<obj.course<<"\n";
	cout<<"Enter age: ";
	cin>>obj.cgpa;
	fout<<obj.cgpa<<"\n";
	
	fout.close();
	
	
}

void show_all()
{     //  clrscr();
	//system("clear");
	//fout.open("noob.txt");
	fin.open("noob.txt",ios::in);
	fin>>obj.name;
	fin>>obj.reg;
	fin>>obj.course;
	fin>>obj.cgpa;
	
	while (fin.eof() == 0)
	{ 		
		cout<<"Name: "<<obj.name<<endl;
		cout<<"ID:  "<<obj.reg<<endl;
		cout<<"Gender:  "<<obj.course<<endl;
		cout<<"Age : "<<obj.cgpa<<endl<<endl;
		fin>>obj.name;
		fin>>obj.reg;
		fin>>obj.course;
		fin>>obj.cgpa;
		
		
		
	}
	fin.close();
	
	
	
}

void search()
{      // clrscr();

	string user;
	//int user;
	cout<<"Enter Name: ";
	cin>>user;
	fin.open("noob.txt",ios::in);
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
			cout<<"ID:  "<<obj.reg<<endl;
			cout<<"Gender:  "<<obj.course<<endl;
			cout<<"Age "<<obj.cgpa<<endl<<endl;
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
	
	//file.open("c:\noob.txt",ios::out);
	//file.close();
	fout.open("noob.txt",ios::app);
	fout.close();
	
	int option;
	
	
		
		
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
					system("clear");
					search();
					break;
				case 4:
					system("clear");
					exit(0);
			}
		}
	return 0;
}

