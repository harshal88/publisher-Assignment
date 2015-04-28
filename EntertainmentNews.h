
#ifndef ENTERTAINMENTNEWS_H
#define ENTERTAINMENTNEWS_H

#include<iostream>
#include<string>


//#include"Newspaper.h"
using namespace std;


class EntertainmentNews
{
private:
   
	string uname;
        string pwd; 
        string usr;
        string dofb;
  //      static int journalist_total;
	

public:
        
	 EntertainmentNews();
	//~Publisher();
	float current_balance;
        void deposit(float amount);
//	int getAccountNumber();
//	string getAccountHolder();
//	float getCurrentBalance();
//	void AddEditorInChief(EditorInChief *ec);
//	void RemoveEditorInChief(EditorInChief *ec);
	void balanceSum();
	void PublisherInfo();
        void JournalistInfo();
        void FireJournalist();
        
        void AddPublisher(string username, string password , string name , string dob);

        void HireEditorInChief(string username, string password , string name , string dob);

 
                   void HireKidsEditor(string username, string password , string name , string dob);

                   void HireMoviesEditor(string username, string password , string name , string dob);

	           void HireAdvertismentEditor(string username, string password , string name , string dob);

                   void HireReporter(string username, string password , string name , string dob);
                  
                   void FireEditorInChief(string username, string password , string name , string dob);

                   void FireKidsEditor(string username, string password , string name , string dob); 

                   void FireMoviesEditor(string username, string password , string name , string dob);

                   void FireAdvertismentEditor(string username, string password , string name , string dob);

                   void FireReporter(string username, string password , string name , string dob);  





/*

	//static void RemovePublisher(Publisher *pb);
	static void RemoveEditorInChief(EditorInChief *ec);


*/
};

#endif

