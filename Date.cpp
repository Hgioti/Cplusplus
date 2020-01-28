#include <iostream>
#include "header.h"

using namespace std;

date::date(){
}

void date::setdate(int a){
	
			day=a%29;
			day++;
			month=a%11;
			month++;
			year=a%36;
			year+=1979;
}

date::~date(){
}

int date::getday(){
	return day;
}

int date::getmonth(){
	return month;
}

int date::getyear(){
	return year;
}
