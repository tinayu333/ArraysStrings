//============================================================================
// Name        : ArraysStrings.cpp
// Author      : Tina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "classes.h"

using namespace std;

int main() {
	IsUnique uniqueA;
	if(uniqueA.printUnique("abcdefggg")) cout<<"Chars of the String is Unique";
	else cout<<"The duplicate charater is "<<(char)uniqueA.duplicate<<endl;
	return 0;
	//test
}
