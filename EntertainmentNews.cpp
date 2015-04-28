#include <iostream>
#include"EntertainmentNews.h"
using namespace std;
using std::string;



EntertainmentNews::EntertainmentNews()
{
	/*username = user;
        password = pwd;
        user = uname;
        dob = dofb;
       // current_balance = start_balance;*/
  
	
}

void EntertainmentNews::AddPublisher(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}

void EntertainmentNews::PublisherInfo()
{
	cout<<"Name of the Publisher is "<<endl;
	cout<<uname<<endl;
	cout<<"Date of birth is "<<dofb;
}





void EntertainmentNews::HireEditorInChief(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EntertainmentNews::HireKidsEditor(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EntertainmentNews::HireMoviesEditor(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EntertainmentNews::HireAdvertismentEditor(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}

void EntertainmentNews::HireReporter(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EntertainmentNews::JournalistInfo()
{
       // cout<<"Username of the Journalist is "<<uname<<endl;
	//cout<<"Passwod is is "<<pwd<<endl;  
	cout<<"Name is "<<usr<<endl;
	cout<<"Date of birth is "<<dofb<<endl;
	cout<<endl;
        
}

void EntertainmentNews::FireEditorInChief(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}

void EntertainmentNews::FireKidsEditor(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EntertainmentNews::FireMoviesEditor(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EntertainmentNews::FireAdvertismentEditor(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EntertainmentNews::FireReporter(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EntertainmentNews::deposit(float amount)
{
   current_balance=current_balance+amount;
   //return amount;
}

void EntertainmentNews::balanceSum()
{
	float sum = 500000.00;
	sum=sum-current_balance;
	cout<<"The balance in the account of publisher is "<<sum<<endl;
	//return sum;
}


/*
void Publisher:: *ec)
{   
           delete ec;
            ec=NULL;
}



{
	int i;
	for (i = 0; i < 1; i++) 
	{
		if ([i] == NULL) 
		{
			break;
		}
	}
	
	if (i == 1) 
	{
		std::cerr << "The Newspaper is full." << std::endl;
		exit(1);
	}	
	 = ec;

}
float Publisher::deposit(float amount)
{
   current_balance=current_balance+amount
   return amount;
}

float Publisher::balanceSum()
{
	float sum = 500000.00;
	sum=sum-current_balance;
	
	return sum;
}*/
