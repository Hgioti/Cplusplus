#include <iostream>
#include "header.h"

using namespace std;

threads::threads(string theme,string creator){
	cout  <<"Thread with subject:  " << theme << " has just been created!" << endl;
	newT.swap(theme);	
}

void threads::setThreads(int count,int day1,int day2,int day3,int day4,int month1,int month2,int month3,int month4,int year1,int year2,int year3,int year4){
	
		int i,x,flag,post_creator[4];
		string post_title[4],post_context[4];
		
		//Ekxwrw ta stoixeia tou post apo th sunarthsh
		for(i=0;i<4;i++)
		{
			flag=0;
			post_title[i]=function(flag,i+count);
			post_creator[i]=functionuser(i+count);
			flag=2;
			post_context[i]=function(flag,i+count);
		}
			
			//Dhmiourgw ta posts
			posts* newpost[4];
			for(i=0;i<4;i++)
			{
				if(i==0)
					newpost[i]=new posts(count+i,post_title[i],post_creator[i],post_context[i],day1,month1,year1);
				if(i==1)
					newpost[i]=new posts(count+i,post_title[i],post_creator[i],post_context[i],day2,month2,year2);
				if(i==2)
					newpost[i]=new posts(count+i,post_title[i],post_creator[i],post_context[i],day3,month3,year3);
				if(i==3)
					newpost[i]=new posts(count+i,post_title[i],post_creator[i],post_context[i],day4,month4,year4);
			}
					
			for(i=0;i<4;i++)
				delete newpost[i];						
}

threads::~threads(){	
	cout << "Thread with subject:  " << newT << " is about to be destroyed" << endl;
}
