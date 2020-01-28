#include <iostream>
#include "header.h"

using namespace std;


forum::forum(string title){
	cout << "Forum with title : " << title << " has just been created!" << endl << endl;
	newF.swap(title);
}

void forum::setForum(){
	
	int i,j,flag=0,t=0,x,id;
	char q;
	
	string theme_dokimh;
	string thread_theme[]={"Java","Paratash","Aporia","Problhma","Python"};
	string thread_creator[]={"user 91","user 58","user 98","user 13","user 35"};
	srand(time(NULL));
	
	threadkanones="Kanones kai xrhsimes plhrofories";
	threadcreator="default user";
	day=11;
	month=2;
	year=1995;
	
	//Ftiaxnw 3-4 threads
	thr=rand()%2;
	thr+=3;
	
	//Dhmiourgw objects gia thn wra
	date newdate[thr+thr*4];
	for(i=0;i<(thr+thr*4);i++)
	{
		x=rand();
		newdate[i].setdate(x);
	}
	
	//Dhmiourgw ta threads
	threads* newthread[thr];
	for(i=0;i<thr;i++)
			newthread[i]=new threads(thread_theme[i],thread_creator[i]);
		
	//Kanw access th set	
	for(i=0;i<thr;i++)
			newthread[i]->setThreads(i+i*3,newdate[i+i*3].getday(),newdate[i+1+i*3].getday(),newdate[i+2+i*3].getday(),newdate[i+3+i*3].getday(),newdate[i+i*3].getmonth(),newdate[i+1+i*3].getmonth(),newdate[i+2+i*3].getmonth(),newdate[i+3+i*3].getmonth(),newdate[i+i*3].getyear(),newdate[i+1+i*3].getyear(),newdate[i+2+i*3].getyear(),newdate[i+3+i*3].getyear());	
	
	
	cout << endl << "Do u want to print the forum and it's thread themes ?" << endl;
	cout << "Type y for yes or n for no" << endl;
	cin >> q;
	if(q=='y')
	{
		cout << "Forum me titlo: " << newF << endl;
		for(i=0;i<thr;i++)
			cout << "Thread " << i << " with theme : " << thread_theme[i] << endl;
	}
	
	cout << endl << "Do u want to print thread ?" << endl;
	cout << "Type y for yes or n for no " << endl;
	cin >> q;
	if(q=='y')
	{
		cout << "Type the thread's theme " << endl;
		cin >> theme_dokimh;
		for(i=0;i<thr;i++)
		{
			if(theme_dokimh==thread_theme[i])
			{
				cout << endl << "Thread me 8ema: " << thread_theme[i] << "	    Dhmiourgo: " << thread_creator[i];
				cout << " 	 Hmeromhnia: " << newdate[i].getday() << "/" << newdate[i].getmonth() << "/" << newdate[i].getyear()  << endl;
				
				//Twra na ektupwsw ta posts
				for(j=0;j<4;j++)
				{
						//To i*4 upodhlwnei ta posts sta prohgoumena threads
						flag=0;
						cout << endl << "Post id: " <<  (j+i*3) <<  "	         Titlo: " << function(flag,j+i*3) << endl;
						flag=1;
						cout << "Dhmiourgo: user " << functionuser(j+i*3) <<"	 Hmeromhnia: " << newdate[j+i*3].getday() << "/" << newdate[j+i*3].getmonth() << "/" << newdate[j+i*3].getyear() << endl;;
						flag=2;
						cout << "Keimeno: " <<  function(flag,j+i*3) << endl;
				}
				break;
			}	
		}	
		cout << "You have typed wrong " << endl;
	}
	
	cout << endl << "Do u want to print a post ? " << endl;
	cout << "Types y for yes or n for no " << endl;
	cin >> q;
	if(q=='y')
	{
		cout << "Type the post id " << endl;
		cin >> id;
		for(i=0;i<thr;i++)
		{	
			if(id<thr*4)			//To ka8e thread exei 4 posts
			{
				flag=0;
				cout << endl << "Post id: " <<  id  << "	        Titlo: " << function(flag,id) << endl;
				flag=1;
				cout << "Dhmiourgo: user " << functionuser(id)  << "	Hmeromhnia: " << newdate[id].getday() << "/" << newdate[id].getmonth()<< "/" << newdate[id].getyear() << endl;
				flag=2;
				cout << "Keimeno: " <<  function(flag,id) << endl << endl;
				break;
			}
		}
	} 
	
	for(i=0;i<thr;i++)
		delete newthread[i];	
}

forum::~forum(){
	cout << endl << "Forum with title: " << newF <<" is about to be destroyed" << endl;
}

int forum::totalposts(){
	return thr*4;
}

int forum::getday(){
	return day;
}

int forum::getmonth(){
	return month;
}

int forum::getyear(){
	return year;
}

string forum::threadc(){
	return threadcreator;
}

string forum::threadk(){
	return threadkanones;
}
