
#ifndef KIDSEDITOR_H
#define KIDSEDITOR_H

#include<iostream>
#include<string>

#include"EditorInChief.h"

//#include"Publisher.h"
#include"Article.h"
#include "Blog.h"


//class Article;
//class Reporter;
using namespace std;
class KidsEditor: public EntertainmentNews,private Article
{
	private:
	string uname,pwd,usr,dofb;
        Article print; 
	Blog blg;
	
	// *Reporter[2];
        //Article pers=new Article();
       // static Reporter *rp1,*rp2;

	public:
	vector<string>blogdata;
	KidsEditor();

        void seeArticle();
	void seeBlog();
	
	void JournalistInfo();
	 void HireReporter(string username, string password , string name , string dob);
	//string article;
	//string Reporter::blog;
	void FireReporter(string username, string password , string name , string dob);

};

#endif
