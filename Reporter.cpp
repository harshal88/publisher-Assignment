#include <iostream>
#include "Reporter.h"
#include "Article.h"
#include <fstream>
#include "Blog.h"
#include<vector>


//class Article;
using namespace std;

//Article Reporter::new pers;

   



Reporter::Reporter():Article(),EntertainmentNews(),Blog()
{
	
}


void Reporter::writeArticle()
{      
	//Article pers;
        
	char ch1;
	
		fstream file;
	    	file.open("articlefile.dat", ios::app | ios::out | ios:: in | ios::binary);
	    	//string article;
	    	do 
		{
		       // cout << "Enter the article content " << endl;
		        print.enterData();
		        file.write((char * ) & print, sizeof(print)); // read stream
		        cout << "Enter another article y/n" << endl;
		        cin >> ch1;
		}while (ch1 == 'y');
	
	
}

/*void Reproter::addBlog(Reporter *r);
{
	if(r == rp1)
	{
		article = "This is Blog of a Reporter "<<rp1.name<<endl;
	}
	else
	if(r == rp2)
	{
		article = "This is Blog of a Reporter "<<rp2.name<<endl;
	}
	else
	if(r == rp3)
	{
		article = "This is Blog of a Reporter "<<rp3.name<<endl;
	}
	else
	if(r == rp4)
	{
		article = "This is Blog of a Reporter "<<rp4.name<<endl;
	}
	else
	if(r == rp5)
	{
		article = "This is Blog of a Reporter "<<rp5.name<<endl;
	}
	else
	{
		cout<<"The Blog for this reporter doesnot exist";
	}
}*/

void Reporter::seeArticle()
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
void Reporter::seeBlog() // display blog's data
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
/*stirng Reporter::viewBlog()
{
	string report;
	report = blog;
	return report;
}*/
