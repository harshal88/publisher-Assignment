
#ifndef EDITORINCHIEF_H
#define EDITORINCHIEF_H

#include<iostream>
#include<string>

#include"EntertainmentNews.h"

#include"Article.h"
#include "Blog.h"

//class Article;
using std::string;


class EditorInChief:public EntertainmentNews,private Article
{
	private:
	string uname,pwd,usr,dofb;
        Article print;
	Blog blg;

	public:
	vector<string>blogdata;
        EditorInChief();
	//~EditorInChief();
	void Journalistinfo();
        void seeArticle();
	void seeBlog();



		   void HireKidsEditor(string username, string password , string name , string dob);

                   void HireMoviesEditor(string username, string password , string name , string dob);

	           void HireAdvertismentEditor(string username, string password , string name , string dob);

                   void HireReporter(string username, string password , string name , string dob);
                  
                  
                   void FireKidsEditor(string username, string password , string name , string dob); 

                   void FireMoviesEditor(string username, string password , string name , string dob);

                   void FireAdvertismentEditor(string username, string password , string name , string dob);

                   void FireReporter(string username, string password , string name , string dob);  
	
};

#endif
