


#include<iostream>
#include"Article.h"
#include<fstream>

using namespace std;
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
//using std::istream::getline;


Article::Article()
{
}
void Article::showData() // display person's data
{
       	cout << " " <<endl;
	  //cout<< "title is " <<title;
	  //cout<< "author is " <<author;
          cout<<"article is "<<issue;
          cout<<endl;
}
void Article::enterData() // get person's data
{
	cin.clear();
	cin.sync();
       	cout << "Write your article here  "<<endl;
	
        getline(cin,title);
	cout << "Enter a author "<<endl;
	getline(cin,author);
	cout << "Enter content of article  "<<endl;
	getline(cin,issue);
	//std::getline(std::cin,article);
        //istream& getline(article,500);
	//getline(cin,article);
}

