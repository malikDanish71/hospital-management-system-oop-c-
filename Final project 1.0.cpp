////////////////////////////////////HOSPITAL MANAGEMENT SYSTEM///////////////////////////////////////
//////////////////////////////////////*CODE*//////////////////////////////////////////////////

#include<iostream>
#include<conio.h>  //for getch
#include<fstream>
#include<cstring>
#include<windows.h> //for sleep or color


void menu();
void passcode();
void cpasscode();


using namespace std;


class one{
	
	public:
		virtual void get()=0;
		virtual void show()=0;
};


class info:public one{
	char all[100];
	char name[50];
	char time[50];
	int num;
	int age;
	string gender;
	string address;
	string bloodgroup;
	string dis;
	long int mobileno;
		public:
	void get()
	{
		ofstream out("patient.txt",ios::app);
		{
			system("cls");
			cin.sync();
			cout<<"\nEnter the patient name = ";
			cin.getline(name,50);
			cout<<"\nEnter the Appointment time = ";
			cin.getline(time,50);
			cout<<"\nEnter age =";
			cin>>age;
			cout<<"\nEnter Appointment Number = ";
			cin>>num;
			cout<<"\n\nEnter His/Her Gender  ";
			cin>>gender;
			cout<<"\n\nEnter Patient Address  ";
			cin>>address;
			cout<<"\n\nEnter His/Her Blood Group  ";
			cin>>bloodgroup;
			cout<<"\n\nAny DISEASE before?  ";
			cin>>dis;;
			cout<<"\n\nEnter His/Her Mobile Number  ";
			cin>>mobileno;
			}
			
			out<<"\nName = "<<name<<"\nAge = "<<age<<"\ngender = "<<gender<<"\nAddress= "<<address<<
			"\nblood group= "<<bloodgroup<<"\npast disease= "<<dis<<"\nMobile no= "<<mobileno;
		out.close();
		//sleep(5);
 		
		}
		void show(){
				ifstream in("patient.txt");
			if(!in)  
			{
				cout<<"File open Error ";
			}
			else
			{
			while(!(in.eof()))
			{
				in.getline(all,100);
				cout<<all<<endl;
			}
			}
			in.close();
			cout<<"\n\n\t\tPress Any key to continue : ";
			getch();
			menu();
		}		
};
//////////////////////////////////////////Third Class ( Class Ali)///////////////////////////////////

class Ali:public info{
	public:
		info a1;
		void get()
		{
			system("cls");
			ofstream out("Ali.txt",ios:: app);
			a1.get();
			out.write(reinterpret_cast<char *>(&a1),sizeof(a1));
			out.close();
			cout<<"***YOUR INFORMATION  HAS BEEN SAVED*** \n\t\t\tPress any Key to Continue  ";
			getch();
			menu();
		}
		void show(){
			ifstream in("Ali.txt");
			if(!in)
			{
				cout<<"\n\nNo Data In The File ";
				cout<<"\n\n\nPress Any Key To Continue : ";
				getch();
				menu();
				
			}
			else{
			while(!in.eof())
			{
				in.read(reinterpret_cast<char *>(&a1),sizeof(a1));
				a1.show();
			}
			in.close();
			getch();
			menu();
		}		
		}
};
///////////////////////////////////////////////Fourth Class ( class Ahmed)/////////////////////////////////////////////

class Ahmed:public info{
	info a1;
	void get(){
			system("cls");
			ofstream out("Ahmed.txt",ios::app);
			a1.get();
			out.write(reinterpret_cast<char *>(&a1),sizeof(a1));
			out.close();
			cout<<"***YOUR INFORMATION  HAS BEEN SAVED*** \n\t\t\tPress any Key to Continue  ";
			getch();
			menu();
		}
		void show(){
			ifstream in("Ahmed.txt");
			if(!in){
				cout<<"\n\nNo Data In The File ";
				cout<<"\n\n\nPress Any Key To Continue : ";
				getch();
				menu();
				
			}
			else{
			
			while(!in.eof())
			{
				in.read(reinterpret_cast<char *>(&a1),sizeof(a1));
				a1.show();
			}
			in.close();
			getch();
			menu();
		}
			
		}
};

/////////////////////////////////////////Fifth Class( Class sara)///////////////////////////

class Sara:public info{
	info a1;
	void get(){
			system("cls");
			ofstream out("Sara.txt",ios::app);
			a1.get();
			out.write(reinterpret_cast<char *>(&a1),sizeof(a1));
			out.close();
			cout<<"***YOUR INFORMATION  HAS BEEN SAVED*** \n\t\t\tPress any Key to Continue  ";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("Sara.txt");
			if(!in){
				cout<<"\n\nNo Data In The File ";
				cout<<"\n\n\nPress Any Key To Continue : ";
				getch();
				menu();
				
			}
			else
			{
			
			while(!in.eof()){
				in.read(reinterpret_cast<char *>(&a1),sizeof(a1));
				a1.show();
			}
			in.close();
		}
	}
		
};

////////////////////////////////////////Sixth Class( Class Alishba)///////////////////////////
class Alishba:public info{
	info a1;
	void get(){
			system("cls");
			ofstream out("Alishba.txt",ios::app);
			a1.get();
			out.write(reinterpret_cast<char*>(&a1),sizeof(a1));
			out.close();
			cout<<"***YOUR INFORMATION  HAS BEEN SAVED*** \n\t\t\tPress any Key to Continue  ";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("Alishba.txt");
			if(!in){
				cout<<"\n\nNo Data In The File ";
				cout<<"\n\n\nPress Any Key To Continue : ";
				getch();
				menu();
				
			}
			else
			{
			
			while(!in.eof()){
				in.read(reinterpret_cast<char *>(&a1),sizeof(a1));
				a1.show();
			}
			in.close();
		}
	}
		
};
//////////////////////////////////////////////////////////// Seventh class ( Class staff) child class of parent one//////////////////////////////////

class staff:public one
{
	char all[100];
	char name[50];
	char sal[30];
	char pos[20];
	char age[20];
	public:
	void get()
	{
		ofstream out("staff.txt",ios::app);
		{
		 system ("cls");
		cin.ignore();
		cout<<"\nEnter Name = ";
		cin.getline(name,50);
		cout<<"\nEnter Age = ";
		cin.getline(age,20);
		cout<<"\nEnter Salary = ";
		cin.getline(sal,30);
		cout<<"\nEnter Working position = ";
		cin.getline(pos,20);
		
		}
		out<<"\nName = "<<name<<"\nAge = "<<age<<"\nSalary = "<<sal<<"\nWorking Position = "<<pos;
		out.close();
 		cout<<"\n\nYour Information Has Been Saved:\n\t\t\tPress any Key to Continue  ";
		getch();
		menu();
	}
	void show()
		{
			ifstream in("staff.txt");
			if(!in)  
			{
				cout<<"File open Error ";
			}
			else{
			while(!(in.eof()))
			{
				in.getline(all,100);
				cout<<all<<endl;
			}
			}
			in.close();
			cout<<"\n\n\t\tPress Any key to continue : ";
			getch();
			menu();
		}
	
};

/////////////////////////////////////////// Eigth class(class Information)////////////////////////////////////////////////////

class information
{
	public:
		void drinfo()
		{
			system("cls");
		    //system("Color F4");
			char DR[100];
			ifstream in("drinfo.txt");
			if(!in)  
			{
				cout<<"File open Error ";
			}
			else{
			while(!(in.eof()))
			{
				in.getline(DR, 100);
				cout<<DR<<endl;
			}
			}
			in.close();
			/*ofstream out("drinfo.txt",ios::app);
			//cout<<"\n\n\t\tPress Any key to continue : ";
			out<<"\n=============================================================================\n";
			out<<"\n\n\t\t(Four Doctors Available)\n\n\t\t[Information And Timings Are given below]\n";
			out<<"\n--------------------------------------------------------------------------------\n";
			out<<"\t\tDr Available : \n";
			out<<"\t\tDr ALI (Skin specialist)\n\n";
			out<<"\t\t\t[[ TIMINGS ]] : \n\n";
			out<<"\t\tMonday to Friday\t\t9AM to 5PM\n";
			out<<"\t\tSaturday            9AM to 1PM\n";
			out<<"\t\tSunday              OFF \n";
			out<<"\t\tCheck-up Fee              Rs.3150/$15 \n";
			out<<"-----------------------------------------------------------------------------------\n";
			
		    out<<"\t\tDr Ahmed (Child Specialist)\n\n";
		    out<<"\t\t\t[[ TIMINGS ]] : \n\n";
		    out<<"\t\tMonday to Friday\t\t10AM to 4PM\n";
			out<<"\t\tSaturday            10AM to 2PM\n";
			out<<"\t\tSunday            \t12PM to 9PM \n";
			out<<"\t\tCheck-up Fee          Rs.3570/$17 \n";
			out<<"-----------------------------------------------------------------------------------\n";
			
			out<<"\t\tDr Sara (Heart Specialist)\n\n";
			out<<"\t\t\t[[ TIMINGS ]] : \n\n";
			out<<"\t\tMonday to Friday\t\t9AM to 5PM\n";
			out<<"\t\tSaturday            9AM to 1PM\n";
			out<<"\t\tSunday              OFF \n";
			out<<"\t\tCheck-up Fee             Rs.3150/$15 \n";
			out<<"-----------------------------------------------------------------------------------\n";
			
			out<<"\t\tDr Alishba (DVM)\n\n";
			out<<"\t\t\t[[ TIMINGS ]] : \n\n";
			out<<"\t\tMonday to Friday\t\t9AM to 5PM\n";
			out<<"\t\tSaturday            9AM to 2PM\n";
			out<<"\t\tSunday              OFF \n";
			out<<"\t\tCheck-up Fee             Rs.3150/$15 \n";
			out<<"-----------------------------------------------------------------------------------\n";
			out<<"\nPress any Key to Continue\n";
			out.close();
			cout<<"DATA SAVED";*/
			getch();
			menu();
			
		}
		
};

void call_dr()
{
	system("cls");
	int choice;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
	cout<<"\n\n Press 1 for Dr Ali \n\n Press 2 for Ahmed \n\n Press 3 for Sara\n\n Press 4 for Alishba ";
	cin>>choice;
	
	one*ptr;
	Ali s3;
	Ahmed s4;
	Sara s5;
	Alishba s6;
	if(choice==1)
	{
		ptr=&s3;
		ptr->get();
		
	}
	else if(choice==2)
	{
		ptr=&s4;
		ptr->get();
		
	}
	else if(choice==3)
	{
		ptr=&s5;
		ptr->get();
		
	}
	else if(choice==4)
	{
		ptr=&s6;
		ptr->get();
		
	}
	
	else
	{
		cout<<"Sorry invalid choice :";
		getch();
		menu();
	}
	
	
}
void specific()
{
	system("cls");
	int choice;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
	cout<<"\n\n Press 1 for Dr Ali \n\n Press 2 for Ahmed \n\n Press 3 for Sara\n\n Press 4 for Alishba ";
	cin>>choice;
	
	one*ptr;
	Ali s3;
	Ahmed s4;
	Sara s5;
	Alishba s6;
	if(choice==1)
	{
		ptr=&s3;
		ptr->show();
		
	}
	else if(choice==2)
	{
		ptr=&s4;
		ptr->show();
		
	}
	else if(choice==3)
	{
		ptr=&s5;
		ptr->show();
		
	}
	else if(choice==4)
	{
		ptr=&s6;
		ptr->show();
		
	}
	
	else
	{
		cout<<"Sorry invalid choice :";
		getch();
		menu();
	}
}
void display(){
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t\t       +++++JOAYO HOSPITAL ISB+++++ \n\n";	
cout<<"\t\t\t| _____________________________________________________________|\n";
cout<<"\t\t\t|                                           	               |\n";
cout<<"\t\t\t|             1  >> 24/7 Medical cover/services                |\n";
cout<<"\t\t\t|             2  >> Specialized Doctors                        |\n";
cout<<"\t\t\t|             3  >> Usually <60 beds                           |\n";
cout<<"\t\t\t|             4  >> Intensive Care Units                       |\n";
cout<<"\t\t\t|             5  >> Registered Nurses                          |\n";
cout<<"\t\t\t|             6  >> Best Pharmecutical employees               |\n";
cout<<"\t\t\t|             7  >> A lot of Diagnostic Facilities             |\n";
cout<<"\t\t\t|             8  >> Efficient Security systems                 |\n";
cout<<"\t\t\t|             9  >> Phno# 051-4831314/ 03065029786             |\n";
cout<<"\t\t\t|             10 >> Plot 38-A,Block A,F-10, Islamabad          |\n";
cout<<"\t\t\t|______________________________________________________________|\n\n";

cout<<"\nPress any Key to Continue\n";
			getch();
			menu();
}
		
		

void menu()
{
system("cls");
cin.sync();
information a1; //all Dr data display class
one *ptr;
staff a2;
info f1;  //patient info class
int a;
	
	cout<<"\n \n \n \n ";
	
cout<<"\t\t      |  ++++++++++     MAIN MENU   ++++++++++  |    \n";
cout<<"\t\t      |           Hospital Management System    |\n";
cout<<"\n---------------------------------------------------------------------------------------\n";
cout<<"\t\t       Please select any Option         \n ";
cout<<"\n\n\t1-\t\tPress 1 For checking Hospital Information \n\n";
cout<<"\t2-\t\tPress 2 For Available Doctor Information \n\n";
cout<<"\t3-\t\tPress 3 For Doctor Appointment  \n\n";
cout<<"\t4-\t\tPress 4 For saving staff Information \n\n";
cout<<"\t5-\t\tPress 5 For checking patient Information : \n\n";
cout<<"\t6-\t\tPress 6 For checking patients of specific Doctor : \n\n";
cout<<"\t7-\t\tPress 7 For checking staff Information menu:   \n\n";
cout<<"\t8-\t\tPress 8 For change password or create password:   \n\n";
cout<<"\t9-\t\t [    press 9 for logout and Exit    ]                    \n";

cout<<"\n\n ===========================================================================================\n"; 

cout<<"\n\n\t\t Please Enter Your Choice :  ";
cin>>a;
if(a==1)
{
	display();	
}
else if (a==2)
{
	a1.drinfo();
}
else if (a==3)
{
	call_dr();
}
else if (a==4)
{
	ptr=&a2;
	ptr->get();
}
else if (a==5)
{
	ptr=&f1;
	ptr->show();
}
else if (a==6)
{
	specific();
}
else if (a==7)
{
	ptr=&a2;
	ptr->show();
}
else if (a==8)
{
	cpasscode();
}
else if(a==9)
{
	 cout<<"\n\t\t\t\t\t               --------------------------------------\n";
   cout<<"\t\t\t\t\t\t\t         THANK YOU FOR USING \n";
   cout<<"\t\t\t\t\t               ---------------------------------------\n";
   cout<<"\t\t\t\t\t\t\t       HOSPITAL MANAGEMENT SYSTEM \n";	
   cout<<"\t\t\t\t\t               ---------------------------------------\n";
	exit(0);
}
else
{
	cout<<"Sorry invalid choice/Option ";
}
}
	
void passcode()
{
	system("cls");
	char p1[50];
	char p2[50];
	
	//system("color Fc");
	
	ifstream in("password.txt");
	{       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
		cin.sync();
		cout<<"\n\t\t\t\t\t\t  Enter the Password ";
		cin.getline(p1,50);
		//cout<<"\n\t\t\t\t\t\t  Confirmation password ";
		//cin.getline(p2,50);
		in>>p2;
		if(strcmp(p2,p1)==0)
		{
		cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
		cout<<"\nPress any Key to Continue\n";
		getch();
		//sleep(5);
			menu();
			
		}
		else
		{
			cout<<"\n\n\t\t Incorrect Passcode please try again \n";
			cout<<"\nPress any Key to Continue\n";
			getch();
			//sleep(5);
			passcode();
		}
	}

	in.close();
}
void cpasscode()
{
	char n[50];
	
	system("cls");
	ofstream out("password.txt");
		{
		cin.ignore();
		cout<<"\n\n\n\n  Enter the New Password ";
		cin.getline(n,50);
		cout<<"  Your New Password Is: "<<n;
	}
		out<<n;
		out.close();
	cout<<"\n\n\n your password has  been saved :";
	cout<<"\n Press any Key to Continue\n";
		
  
	getch();
	menu();
}

int main()
{   

	passcode();
	return 0;

}
