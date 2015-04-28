#include <iostream>
#include"EditorInChief.h"
#include "Article.h"
#include <fstream>
#include "Blog.h"
#include<vector>
using namespace std;
using std::string;

EditorInChief::EditorInChief():EntertainmentNews(),Article()
{
	/*username = user;
	password = pwd;
	name = name_in;
	dob = dob_in;*/
}
void EditorInChief::Journalistinfo()
{
	cout<<"Name is"<<uname<<endl;
	cout<<"Username is"<<usr<<endl;
	cout<<"password is"<<pwd<<endl;
	cout<<"Date of birth is"<<dofb<<endl;
}


void EditorInChief::FireKidsEditor(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EditorInChief::FireMoviesEditor(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EditorInChief::FireAdvertismentEditor(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EditorInChief::FireReporter(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}
void EditorInChief::HireKidsEditor(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EditorInChief::HireMoviesEditor(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EditorInChief::HireAdvertismentEditor(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}

void EditorInChief::HireReporter(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void EditorInChief::seeArticle()
{     // Article pers;
	
		fstream file;
		file.open("articlefile.dat", ios::app | ios::out | ios:: in | ios::binary);
		file.seekg(0);
		file.read((char * ) & print, sizeof(print)); // read stream
		while (!file.eof()) 
		{
			
	                print.showData(); 
		       file.read((char * ) & print, sizeof(print)); 
        	}
}
void EditorInChief::seeBlog() // display blog's data
{
       	  
	  cout << " " <<endl;
	  
	  
          cout<<"The contents of the blog is ";
          cout<<endl;
	    string temp;
    ifstream infile("articlefile.dat");
    while(!(infile.eof())){
                           infile>>temp;
			   temp+=" ";
                           blogdata.push_back(temp);}
    
    for(int t=0;t<blogdata.size();++t){
            cout<<blogdata.at(t);
	  
	  
}
}

