#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>

using namespace std;

#ifndef HEADER_H
#define HEADER_H

typedef struct InfoMenu *iptr;

class forum{
	string newF,threadkanones,threadcreator;
	int day,month,year,thr;
		
public:
	forum(string);
	void setForum();
	~forum();

	string threadk();
	string threadc();
	int totalposts();
	int getday();
	int getmonth();
	int getyear();
};


class threads{
	string newT;
	
public:
	threads(string,string);
	void setThreads(int,int,int,int,int,int,int,int,int,int,int,int,int);
	~threads();
};


class date{
	int day,month,year;
	
public:
	date();
	void setdate(int);
	~date();
	
	int getday();
	int getmonth();
	int getyear();
};

class posts{
	int newid;
	string new_title,new_creator,new_context;
	
public:
	posts();
	posts(int,string,int,string,int,int,int);
	~posts();
};

string function(int,int);
int functionuser(int);

#endif
