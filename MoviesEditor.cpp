#include <iostream>
#include"MoviesEditor.h"
#include "Article.h"
#include <fstream>
#include "Blog.h"
#include<vector>
using namespace std;
using std::string;


MoviesEditor::MoviesEditor():EntertainmentNews(),Article()
{
	/*username = user;
	password = pwd;
	name = name_in;
	dob = dob_in;*/
}
void MoviesEditor::JournalistInfo()
{
	cout<<"Name is"<<uname;
	cout<<"Username is"<<usr;
	cout<<"password is"<<pwd;
	cout<<"Date of birth is"<<dofb;
}



void MoviesEditor::FireReporter(string username, string password , string name , string dob)
{         uname = username;
          uname= "";
           pwd = password;
           pwd="";
           usr = name;
           usr="";
           dofb = dob;
           dofb="";
}


void MoviesEditor::HireReporter(string username, string password , string name , string dob)
{
	
           uname = username;
           pwd = password;
           usr = name;
           dofb = dob;

}
void MoviesEditor::seeArticle()
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
void MoviesEditor::seeBlog() // display blog's data
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


