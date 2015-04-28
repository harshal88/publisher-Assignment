
#ifndef REPORTER_H
#define REPORTER_H

#include<iostream>
#include<string>
#include"Article.h"
#include"KidsEditor.h"
#include"MoviesEditor.h"
#include"AdvertismentEditor.h"
#include"EditorInChief.h"
#include"EntertainmentNews.h"
#include"Blog.h"
//#include"Newspaper.h"

//class Article;
using namespace std;


class Reporter:private Article,public EntertainmentNews,private Blog
{
	
public:
        Reporter();
       
        void seeArticle();
        void writeArticle();
	void seeBlog();
	vector<string>blogdata;
       
       // Article pers;
	

private: 
Article print;
Blog blg;
	
        

	
};

#endif
