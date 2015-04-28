

#include<iostream>

#include "EntertainmentNews.h"
#include "EditorInChief.h"
#include "KidsEditor.h"
#include "MoviesEditor.h"
#include "AdvertismentEditor.h"
#include "Reporter.h"
#include "Article.h"
#include<fstream>
#include "Blog.h"



using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using namespace std;

int main()
{
	

	

        EntertainmentNews   *en = new EntertainmentNews();

        en->AddPublisher("Fame","harshal","famenews","1/10/1974");
        en->PublisherInfo();



        EditorInChief *ec =new EditorInChief();
	KidsEditor *ke =new KidsEditor();
	MoviesEditor *me =new MoviesEditor();
	AdvertismentEditor *ae =new AdvertismentEditor();
        Reporter *ft =new Reporter();
        Reporter *ht =new Reporter();
        Article print;
	Blog blg;
        

       cout<<"Here is the detail of all the employees working in ENTERTAINMENT NEWS"<<endl;
	en->HireEditorInChief("Navneet","jaspal","Navneet","11/05/1954");
        cout<<"Here are the details of Editor-In-Chief"<<endl;
        en->JournalistInfo();

	en->HireKidsEditor("Kashish","judge","kashish","9/07/1983");
        cout<<"Here are the details of Kids-Editor"<<endl;
        en->JournalistInfo();

       
	en->HireMoviesEditor("Nancy","sydney","Nancy","28/8/1984");
        cout<<"Here are the details of Movies-Editor"<<endl;
        en->JournalistInfo();

       
	en->HireAdvertismentEditor("Paramjit","Judge","Paramjit","27/9/1980");
        cout<<"Here are the details of Advertisment-Editor"<<endl;
        en->JournalistInfo();


       			/*cout<<"Menu/n";
					cout<<"1.Hire a Reporter/n";
					cout<<"2.Fire a Reporter/n";
					cout<<"3.View Article and Approve article\n."
        				cout<<"4.Exit";
					cout<<"Enter your Choice/n";
					cin>>choice;
					switch(choice)
					{*/
	en->HireReporter("Amit","sharma","Amit","16/4/1990");
	cout<<"Here are the details of A Full-Time Reporter"<<endl;
        en->JournalistInfo();



       
	en->HireReporter("Sahil","verma","Sahil","20/11/1991");
        cout<<"Here are the details of A Part-Time Reporter"<<endl;
        en->JournalistInfo();


       
	en->HireReporter("Sabina","usa","Sabina","4/8/1983");
        cout<<"Here are the details of A Full-Time Reporter"<<endl;
        en->JournalistInfo();


       
	en->HireReporter("Amarjot","lall","Amarjot","17/5/1994");
	cout<<"Here are the details of A Part-Time Reporter"<<endl;        
	en->JournalistInfo();

	//Reporter *rp5 =new Reporter();
       
	en->HireReporter("Rajdeep","bansal","bansal","29/4/1990");
	cout<<"Here are the details of A Full-Time Reporter"<<endl;
        en->JournalistInfo();

        

         
	
        /*SavingsAccount *sa = new SavingsAccount(10.0, 0.4);
	SavingsAccount *sa2 = new SavingsAccount(9.0);
	CheckingAccount *ca = new CheckingAccount(10.0, 3.0);
	CheckingAccount *ca2 = new CheckingAccount(200.0);
	
	//ba->withdrawal(5.0);
	//ba->deposit(2.0);
	//sa->withdrawal(5.0);
	//sa->deposit(1.0);
	cout<<"The Salary of all the ec has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the ed1 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the ed2 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the ed3 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the rp1 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the rp2 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the rp3 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the rp4 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
	cout<<"The Salary of all the rp5 has been deposited\n"<<Publisher::deposit(20000.00)<<endl;
        
      

	*/


	char position;
	
	char status_ke;
	char status_me;
	char status_ae;
	
        char approval_status;
        do {
	cout<<" ......................WELCOME TO THE AUTOMATED SYSTEM FOR ENTERTAINMENT NEWS..........................."<<endl; 
	cout<<"If you are a Publisher you have to Enter Z .............\n"<<"If you are an Editor In Chief you have to Enter E .............\n"<<"If you are an Editor for Kids section you have to Enter K .............\n"<<"If you are an Editor for Movies section you have to Enter M .............\n"<<"If you are an Editor for Advertisment section you have to Enter A .............\n"<<"If you are a Full-Time Reporter you have to enter F .............\n"<<"If you are a Part-Time Reporter you have to enter P .............\n"<<"If you want to exit the system you have to type exit and press enter "<<endl;
	    
   	
   	cin >> position;

   	if(position=='Z')
   	{
   		//case 'P':
		string username;
        	string password;
      		cout << "Welcome to the automatic console of Entertainment News" << endl; 
      		cout<< " Type your username and press enter"<<endl;
        	cin>>username;
        	//char option;
		cout<< " Type your Password and press enter"<<endl;
		
        	
        	cin>>password;
		
		char menu1;
        	if((username =="Fame") && (password=="harshal"))
        	{
			
			
				do {
				
				cout<<".....................USER AUTHENTICATED..................";
				cout<<"1.Do you want to Hire a Editor-in-Chief , If yes press 1\n";
				cout<<"2.Do you want to Fire a Editor-in-Chief , If yes press 2\n";
        			cout<<"3.Do you want to Pay the Salary of employees , If yes press 3\n";
				cout<<"4. Exit , If yes press 4\n";
				cout<<"Enter your Choice\n";
 				//int choice;
				cin>>menu1;
				switch(menu1)
                                 {
                                 case '1':
				
					 cout<<"The Editor-In-Chief Is Hired\n"<<endl;
                                         en->HireEditorInChief("Brij","Nandan","Brij","23/12/1960");
					 cout<<"The details of Editor-In-Chief Is\n"<<endl;
                                         en->JournalistInfo();
					 break;
				case '2':
					cout<<"The Editor-In-Chief Is Fired\n"<<endl;
					en->FireEditorInChief("Navneet","jaspal","Navneet","11/5/1954"); 
                                        
          					break;              				
 	

			                             char menu2;
                  
                                                     do {

				 case '3': cout<<"Menu\nSelect the employee for salary\n";
						cout<<"1. Do you want to pay the salary to Editor in Chief , If yes press 1\n";
						cout<<"2. Do you want to pay the salary to Editors , If yes press 2\n";
						cout<<"3. Do you want to pay the salary to Full-Time reporter , If yes press 3\n";
						cout<<"4. Do you want to pay the salary to Part-Time reporter , If yes press 4\n";
						cout<<"5. Do you want to exit if yes press 5\n";
						//int choiceSalary;
						cin>>menu2;
						float salary;
						switch(menu2)
						{
							case '1': cout<<" Enter the Salary of Editor-In-Chief\n"<<endl;
                        	         			cin>> salary;
                                				if(salary >= 15000.00 && salary <= 120000.00)
                                	 			{
                                	                   		cout<<"Salary To editor in Chief is paid\n"<<endl;
                                                                        en->deposit(salary);	
								}
                                				else
                                	    			{
                                	      				cout<<"The salary cannot be lower than €15,000 (minimum wage) or higher than €120,000.\n"<<endl;
                                    				}
								break;
						case '2': cout<<" Enter Salary for Editors \n"<<endl;
                                 				cin>> salary;
                                				if(salary>15000.00 && salary<120000.00)
                                 				{
                                  					cout<<"Salary paid To kids editor \n"<<endl;
									en->deposit(salary);
                                  					cout<<"Salary paid To movies editor \n"<<endl; 
								en->deposit(salary);
                                  					cout<<"Salary paid To advertisment editor \n "<<endl;
								en->deposit(salary);
                                  				}
                                				else
                                	    			{
                                	      				cout<<"The salary cannot be lower than €15,000 (minimum wage) or higher than €120,000.\n"<<endl;
                                	    			}
								break;
							case '3':	cout<<" Enter Valid Salary For Full time Reporters\n"<<endl;
                                	 			cin>> salary;
                                				if(salary >= 15000.00 && salary <= 120000.00)
                                	 			{
									cout<<"Salary is paid To full time reporter\n "<<endl;
									en->deposit(salary);
				 					
		  						}
								break;
							case '4':	cout<<" Enter Valid Salary For Part time Reporters\n"<<endl;
                                	 			cin>> salary;
                                				if(salary >= 15000.00 && salary <= 120000.00)
                                	 			{
									cout<<"Salary is paid To part time reporter\n "<<endl;
									en->deposit(salary);
				 					
		  						}
								break;
							case '5': break;
						}
							}while((menu2 == '1') || (menu2 == '2') ||( menu2 == '3')||( menu2 == '4'));
						case 4: break;
					}
					}while ((menu1 == '1' )|| (menu1 == '2') ||( menu1 == '3'));
				} 
			
			else
			{
				cout<<"Check user Id and password because your id and password is incorrect\n";
			}
	
        		cout << "Amount available in the Publishers account is  : " <<  endl;

			en->balanceSum(); 	
				}

			
                        else if (position == 'E')
			{
        		//case 'E' :
			string username;
        		string password;
			cout << "Editor in chief" << endl; 
			cout<< " TYPE username and Press enter\n"<<endl;
        		cin>>username;
        		char menu3;
        		cout<< " Type Password and press enter\n"<<endl;
        		cin>> password;
        		if(username =="Navneet" && password=="jaspal")
        		{
			            
				do {
					cout<<".....................USER AUTHENTICATED..................";
					cout<<"1.Do you want to Hire a Kids Editor , If yes press 1\n";
					cout<<"2.Do you want to Hire a Movies Editor , If yes press 2\n";
					cout<<"3.Do you want to Hire a Advertisment Editor , If yes press 3\n";
					cout<<"4.Do you want to Fire a Kids Editor , If yes press 4\n";
					cout<<"5.Do you want to Fire a Kids Editor , If yes press 5\n";
					cout<<"6.Do you want to Fire a Kids Editor , If yes press 6\n";
					
					cout<<"7.Do you want to View and Approve article , If yes press 7\n.";
					cout<<"8.Do you want to View Blog , , If yes press 8\n.";
        				cout<<"9.Do you want to Exit , If yes press 9\n";
					cout<<"Enter your Choice\n";
					//int option;
					
					cin>>menu3;
					switch(menu3)
					{
						case '1': cout<<"The Kids Editor Is Added\n"<<endl;
							ec->HireKidsEditor("Akanksha","jhagra","Akanksha","24/4/1994");
       							cout<<"The details of  Sports Editor Is\n" <<endl;
							 ec->JournalistInfo();
							
                     					break; 
						case '2': cout<<"The Movies Editor Is Added\n"<<endl;
							ec->HireMoviesEditor("Harmesh","bhangu","harmesh","19/5/1952");
       							cout<<"The details of Movies Editor Is\n" <<endl;
							 ec->JournalistInfo();
							
  
                                                case '3': cout<<"The Advertisment Editor Is Added\n"<<endl;
							ec->HireAdvertismentEditor("Neena","joshi","Neena","20/1/1970");
       							cout<<"The details of  Advertisment Editor Is\n" <<endl;
							 ec->JournalistInfo();
							

						case '4': cout<<"The  Kids - Editor kashish Is Removed\n"<<endl;
                                                                
								ec->FireKidsEditor("Kashish","judge","kashish","9/07/1983"); 
                                                                 
 												
								 status_ke= 'N';
          						break;

						case '5': 
        						cout<<"The Movies - Editor Nancy Is Removed\n"<<endl;
                                                                ec->FireMoviesEditor("Nancy","sydney","Nancy","28/8/1984"); 
													
								 status_me= 'N';
          						
							 
          						break;
                                                         
                                               	case '6': cout<<"The Advertisment - Editor Paramjit Is Removed\n"<<endl;
							ec->FireAdvertismentEditor("Paramjit","Judge","Paramjit","27/9/1980"); 
							status_ae= 'N'; 
          						break;
						
                                                case '7':   if( approval_status=='y'){
							cout<<"Editor-In-Chief wants to view and approve the article"<<endl;
							
                                                         cout<<"Do u want to approve y/n"<<endl;
                                                         char final_status;
							cin>>final_status;
                                                          if(final_status=='y')
                                                          {  cout<<"The article Is Ready For Issue and the Article Is "<<endl;
                                                                  ec->seeArticle();
							  }
                                                            else
                                                                cout<<"Article Rejected"<<endl;
                                                                                  }
                                                        else cout<<"Editor-In-Chief Can't Approve As it is rejected by Editor"<<endl;
							break;
                                                 case '8':
							
								ec->seeBlog();						
							break;            
						case '9': break;
					} 
			}while ((menu3 == '1' )|| (menu3 == '2') ||( menu3 == '3')||(menu3 == '4' )|| (menu3 == '5') ||( menu3 == '6')||( menu3 == '7')||( menu3 == '8'));
						
          						/*
						case 7: cout<<"whose article you want to view and approve\n";
							cout<<"1.reporter 1\n2.reporter 2\n3.reporter 3\n4.reporter 4\n5.reporter 5\n";
							cout<<"Enter your choice\n";
							int choice;
							cin>>choice;
							switch(choice)
							{
			
								default: cout<<"You have entered wrong input";
							}
						default:exit(1);*/
					}
				
			
        		else
			{
				cout<<"Check user Id and password because your id and password is incorrect\n";
			}
                }    
			  else if (position == 'K') 
			{
			string username;
			string password;
			cout << "Welcome Kids Editor\n" << endl; 
			cout<< " Type username and Press enter\n"<<endl;
			cin>>username;
        		
			cout<< " Type password and Press enter\n"<<endl;
        		
        		char menu4 ;
        		
        		cin>> password;
        		if ((username =="Kashish" && password=="judge")||(username =="Akanksha" && password=="jhagra") && (status_ke!= 'N' ))
        		{
				do
				{
					cout<<".....................USER AUTHENTICATED..................";
					cout<<"1.Do you want to Hire a Reporter , if yes press 1\n";
					cout<<"2.Do you want to Fire a Reporter , if yes press 2\n";
					cout<<"3.Do you want to View Article and Approve article , if yes press 3\n.";
					cout<<"4.Do you want to View Blog , if yes press 4\n.";
        				cout<<"5.Do you want to  Exit , if yes press 5\n";
					cout<<"Enter your Choice\n";
					cin>>menu4;
					switch(menu4)
					{
						case '1': cout<<"The Reporter Is Added in kids department\n"<<endl;
							ke->HireReporter("Prashant","tripathi","prashant","9/9/1989");
       							cout<<"The details of  Kids Reporter Is\n" <<endl;
							 ke->JournalistInfo();	
							break;

						case '2': cout<<"The Reporter from kids department Is Removed\n"<<endl;
								ke->FireReporter("Amit","sharma","Amit","16/4/1990");  
          						
          						break;
						case '3': cout<<"Editor-Kids wants to view and approve the article"<<endl;
							ke->seeArticle();
							cout<<"Do you want to approve this article y/n"<<endl;
							   cin>>approval_status;
                                                         if(approval_status=='y'){
                                                         cout<<"Approved By Kids Editor "<<endl;
                                                         cout<<"Forwarded To Editor-In-Chief for final consideration"<<endl;
 										 }
 							else
							approval_status=='n';	
                                                         break;
						 case '4':
							
							ke->seeBlog();
							break; 
                                                         
						case '5': break;
					}
				}while((menu4 == '1' )|| (menu4 == '2') ||( menu4 == '3')||( menu4 == '4'));
			}
        		else
			{
				cout<<"Check user Id and password because your id and password is incorrect\n";
			} }

			else if (position == 'M') 
			{
			string username;
        		string password;
			cout << "Welcome Movies Editor\n" << endl; 
			cout<< " type username and Press Enter\n"<<endl;
        		
        		char menu5 ;
        		cin>>username;
			cout<< " type Password and Press Enter\n"<<endl;
        		cin>> password;
        		if((username =="Nancy" && password=="sydney")||(username =="Harmesh" && password=="bhangu") && (status_me!= 'N' ))
        		{
				do
				{
					cout<<".....................USER AUTHENTICATED..................";
					cout<<"1.Do you want to Hire a Reporter , if yes press 1\n";
					cout<<"2.Do you want to Fire a Reporter, if yes press 2\n";
					cout<<"3.Do you want to View Article and Approve article, if yes press 3\n.";
					cout<<"4.Do you want to View Blog, if yes press 4\n.";
        				cout<<"5.Do you want to Exit, if yes press 5\n";
					cout<<"Enter your Choice\n";
					cin>>menu5;
					switch(menu5)
					{
						case '1': cout<<"The Reporter Is Added in Movies department\n"<<endl;
							me->HireReporter("Aman","singh","Aman","9/7/1985");
       							cout<<"The details of  movies Reporter Is\n" <<endl;
							 me->JournalistInfo();
							break;	

						case '2': cout<<"The Reporter in Movies department Is Removed\n"<<endl;
								me->FireReporter("Sahil","verma","Sahil","20/11/1991");  
          						
          						break;
						case '3': cout<<"Movies - Editor wants to view and approve the article"<<endl;
							me->seeArticle();
                                                        cout<<"Do you want to approve this article y/n"<<endl;
                                                         
                                                        cin>>approval_status;
                                                         if(approval_status=='y'){
                                                         cout<<"Approved By Movies - Editor"<<endl;
                                                         cout<<"Forwarded To Editor-In-Chief for final consideration"<<endl;
 										 }
 							else
							approval_status=='n';	
                                                         break;
						
						 case '4':
							
							me->seeBlog();
							break; 
						case '5': break;
					}
				}while((menu5 == '1' )|| (menu5 == '2') ||( menu5 =='3')||( menu5 =='4'));
			}
        		else
			{
				cout<<"Check user Id and password because your id and password is incorrect\n";
			} }          
			
					/*case 4: Reporter::viewBlog(rp1);
							Reporter::viewBlog(rp2);
							Reporter::viewBlog(rp3);
							Reporter::viewBlog(rp4);
							Reporter::viewBlog(rp5);
							break;
						default:exit(1);
					}
				}
			}
        		else
			{
				cout<<"Your Id and Password is Wrong/n";
			}      
			break; 
   			 
   			default :
      			cout << "Invalid grade" << endl;
   		}*/
			

			else if (position == 'A') 
			{
				string username;
        		string password;
			cout << "Welcome Advertisment Editor\n" << endl; 
			cout<< " Type username and Press enter\n"<<endl;
        	
        		char menu6 ;
        		cin>>username;
			cout<< " Type password and Press enter\n"<<endl;
        		cin>> password;
        		if((username =="Paramjit" && password=="judge")||(username =="Neena" && password=="joshi") && (status_ae!= 'N' ))
        		{
				do
				{
					cout<<".....................USER AUTHENTICATED..................";
					cout<<"1.Do you want to Hire a Reporter , if yes press 1\n";
					cout<<"2.Do you want to Fire a Reporter, if yes press 2\n";
					cout<<"3.Do you want to View and Approve article, if yes press 3\n.";
					cout<<"4.Do you want to View Blog, if yes press 4\n.";
        				cout<<"5.Do you want to  Exit, if yes press 5\n";
					cout<<"Enter your Choice\n";
					cin>>menu6;
					switch(menu6)
					{
						case '1': cout<<"The Reporter Is Added in Advertisment department\n"<<endl;
							ae->HireReporter("Hardeep","gill","hardeep","2/10/1988");
       							cout<<"The details of  health Reporter Is\n" <<endl;
							 ae->JournalistInfo();
							break;	

						case '2': cout<<"The Reporter in Advertisment department Is Removed\n"<<endl;
								ae->FireReporter("Amarjot","lall","Amarjot","17/5/1994");  
          						
          						break;
						case '3': cout<<"Advertisment - Editor wants to view and approve the article"<<endl;
							ae->seeArticle();
							cout<<"Do you want to approve this article y/n"<<endl;
							   cin>>approval_status;
                                                         if(approval_status=='y'){
                                                         cout<<"Approved By Advertisment - Editor"<<endl;
                                                         cout<<"Forwarded To Editor-In-Chief for final consideration"<<endl;
 										 }
 							else
							approval_status=='n';	
                                                         break;
                                                         
                                                case '4':
							
							ae->seeBlog();
							break;          

						case '5': break;
					}
				}while((menu6 == '1' )|| (menu6 == '2') ||( menu6 =='3')||( menu6 =='4'));
			}
        		else
			{
				cout<<"Check user Id and password because your id and password is incorrect\n";
			} }          


			else if (position == 'F') 
			{
			string username;
        		string password;
			cout << "Welcome Full Time Reporter\n" << endl; 
			cout<< " Type username and Press enter\n"<<endl;
        		
        		char menu7 ;
        		cin>>username;
			cout<< " Type password and Press enter\n"<<endl;
        		cin>> password;
        		if((username =="Amit" && password=="sharma")||(username =="Sabina" && password=="usa")||(username =="Rajdeep" && password=="bansal"))
        		{
				do
				{
					cout<<".....................USER AUTHENTICATED..................";
					cout<<" WELCOME TO THE SYSTEM\n";
					cout<<"1.Do you want to Write a article , If yes press 1\n";
					cout<<"2.Do you want to View a article, If yes press 2\n";
					cout<<"3.Do you want to View Blog, If yes press 3\n.";
        				cout<<"4.Do you want to Exit, If yes press 4\n";
                                        
					cout<<"Enter your Choice\n";
					cin>>menu7;
					switch(menu7)
					{
						case '1': cout<<"The Reporter1 wants to write an article\n"<<endl;
							ft->writeArticle();
       								
                                                        break;
						case '2': cout<<"The Reporter1 wants to view an article\n"<<endl;
								ft->seeArticle();  
          						
          						break;
						case '3': 
							ft->seeBlog();
							break; 
	
						case '4': break;
					}
				}while((menu7 == '1' )|| (menu7 == '2')|| (menu7 == '3'));
			}
        		else
			{
				cout<<"Check user Id and password because your id and password is incorrect";
			} }          


                        else if (position == 'p') 
			{
			string username;
        		string password;
			cout << " Welcome Part-Time Reporter\n" << endl; 
			cout<< " type username and Press enter\n"<<endl;
        		
        		char menu8 ;
        		cin>>username;
			cout<< " type password and Press enter\n"<<endl;
        		cin>> password;
        		if((username =="Sahil" && password=="verma")||(username =="Amarjot" && password=="lall"))
        		{
				do
				{
					cout<<".....................USER AUTHENTICATED..................";
					cout<<"WELCOME TO THE SYSTEM\n";
					cout<<"1.Do you want to Write a article , if yes press 1\n";
					cout<<"2.Do you want to View a article, if yes press 2\n";
					//cout<<"3.View Article and Approve article\n.";
        				cout<<"3.Do you want to  Exit, if yes press 3\n";
					cout<<"Enter your Choice\n";
					cin>>menu8;
					switch(menu8)
					{
						case '1': cout<<"The Part- Time Reporter wants to write a article\n"<<endl;
							ht->writeArticle();
       								
                                                          break; 
						case '2': cout<<"The Part-Time Reporter wants to view a article\n"<<endl;
								ht->seeArticle();  
          						
          						break;
						/*case 3: cout<<"whose article you want to view and approve\n";
							cout<<"1.reporter 1\n2.reporter 2\n";
							cout<<"Enter your choice\n";
							int choice;
							cin>>choice;
							switch(choice)
							{
								case 1: cout<<"you have selected reporter 			cout<<"The article is"<<EditorSports::approveArticle(rp2);					
								break;	
								default: cout<<"You have entered wrong input";
							}*/
						case '3': break;
					}
				}while((menu8 == '1' )|| (menu8 == '2'));
			}
        		else
			{
				cout<<"Check user Id and password because your id and password is incorrect"<<endl;
			} }          

} while((position == 'Z') || (position == 'E') || (position == 'K') || (position == 'M') || (position == 'A') || (position == 'F')|| (position == 'P'));



}




/*else if (category == 'H')
			{
			cout << "Health Editor\n" << endl; 
			cout<< " Enter username and Password\n"<<endl;
        		string username;
        		string password;
        		char option;
        		cin>>username;
        		cin>>password;
        		
        		{
				//while(1)
				{
					cout<<"Menu\n";
					cout<<"1.Hire a Reporter\n";
					cout<<"2.Fire a Reporter\n";
					cout<<"3.View Article and Approve article\n."
        				cout<<"4. Exit\n";
					cout<<"Enter your Choice\n";
					cin>>choice;
					switch(choice)
					{
		
							}
						default:exit(1);
					}
				}
			}
        		else
			{
				cout<<"Your Id and Password is Wrong/n";
			}      
			break; 
			case 'p' :
			
			cout<< " Enter username and Password"<<endl;
        		string username;
        		string password;
        		char option;
        		cin>>username;
        		cin>> password;
        	
        		{
				//while(1)
				{
					cout<<"Menu/n";
					cout<<"1.Hire a Reporter/n";
					cout<<"2.Fire a Reporter/n";
					cout<<"3.View Article and Approve article\n."
        				cout<<"4.Exit";
					cout<<"Enter your Choice/n";
					cin>>choice;
					switch(choice)
					{
						casee(rp6);					
								break;	
								default: cout<<"You have entered wrong input";
							}
						default:exit(1);
					}
				}
			}
        		else
			{
				cout<<"Your Id and Password is Wrong/n";
			}      
			break;
			case 'r' :
			cout << " Reporter " << endl; 
			cout<< " Enter username and Password"<<endl;
        		string username;
        		string password;
        		char option;
        		cin>>username;
        		cin>> password;
        		
        		{
				//while(1)
				{
					
   	
	/*
	//Bank::RemoveBankAccount(sa);
       
	sa = NULL;
	delete ca;
	ca = NULL;*/



