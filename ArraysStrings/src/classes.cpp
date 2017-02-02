/*
 * classes.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: ctsheu
 */

#include <cstring>
#include <iostream>
#include <string>
#include "classes.h"
using namespace std;

bool IsUnique::printUnique(string s){
	//Implement an algorithm to determine if a string has all unique characters. What if you
	//cannot use additional data structures?
	//Hints: #44, #7 77, #732
	cout<<"Welcome to IsUnique"<<endl;
	bool a[256] = {}; //Initialize array to 0 or false.
	int len;

	len=s.length();

	for (int i=0; i<len; i++){
		if(a[(int)s[i]]==true){
			duplicate = s[i];
			return false;
		}
		else{
		a[(int)s[i]]=true;
		}

	}
	return true;

}



