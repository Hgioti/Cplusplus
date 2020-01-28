#include <iostream>
#include "header.h"

using namespace std;

int main()
{
	int i,posts,count,x,flag;
	string title="Antikeimenostrafhs Programmatismos";
	
	forum newforum(title);
	newforum.setForum();

	//Ektupwnw to thread kanones kai xrhsimes plhrofories
	cout << endl << endl << endl << "Thread me 8ema: " << newforum.threadk() << endl;
	cout << "Dhmiourgo: " << newforum.threadc() << "      Hmeromhnia: " << newforum.getday() << "/" << newforum.getmonth() << "/" << newforum.getyear() << endl;
	cout << "Post id: 0	      Dhmiourgo: " << newforum.threadc() <<"	  Hmeromhnia: " <<  newforum.getday()+4 << "/" << newforum.getmonth() << "/" << newforum.getyear() << endl;
	flag=3;
	cout << "Keimeno: " << function(flag,0) << endl;
	
	
	posts=newforum.totalposts();				//Auta einai ta posts
	count=rand()%posts;							//Auto einai posa tuxaia posts 8a ektupw8oune
	cout << endl << endl << "Ektupwnontai tuxaia posts " << endl;
	//Auto einai poia
	for(i=0;i<count;i++)						
	{
		x=rand()%posts;
		flag=0;
		cout << endl << "Post id: " <<  x  << "	        Titlo: " << function(flag,x) << endl;
		flag=1;
		cout << "Dhmiourgo: user " << functionuser(x) << endl;
		flag=2;
		cout << "Keimeno: " <<  function(flag,x) << endl;		
	}

	return 0;
}
