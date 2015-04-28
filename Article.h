
#ifndef ARTICLE_H
#define ARTICLE_H

#include<iostream>


using namespace std;
#include<string>
using std::string;

 


class Article 
{
    
               
    public:
	Article();
        string title;
	string author;
	string issue; 
	 
        //string article;
    	
        void showData();
    	
	void enterData();
    	
    
		
};

#endif

