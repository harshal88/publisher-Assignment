
#ifndef MOVIESEDITOR_H
#define MOVIESEDITOR_H

#include<iostream>
#include<string>

#include"EditorInChief.h"
//#include"Publisher.h"
#include"Article.h"
#include "Blog.h"


//class Article;
using namespace std;
using std::string;
//class Reporter;
class MoviesEditor: public EntertainmentNews,private Article
{
	private:
	string uname,pwd,usr,dofb;
        Article print;
	Blog blg;
	


	public:
	vector<string>blogdata;
	MoviesEditor();
	
        void seeArticle();
	void seeBlog();
	
	void JournalistInfo();
	 void HireReporter(string username, string password , string name , string dob);
	//string article;
	//string Reporter::blog;
	void FireReporter(string username, string password , string name , string dob);
	
};


#endif
