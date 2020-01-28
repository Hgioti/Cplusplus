#include <iostream>
#include "header.h"

using namespace std;

posts::posts(int id,string title,int creator,string context,int day,int month,int year){
		cout << endl << "Post number: " << id << " has just been created " << endl;
		cout << "Post title:  " << title << endl;
		cout << "Post date:   " << day << "/" << month << "/" << year << endl;
		cout << "Post creator:  user " << creator << endl;
		cout << "Post context:  " << context << endl;
		newid=id;
}

posts::~posts(){
	cout << "Post number: " << newid << " is about to be destroyed" << endl;
}
