/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 8/10/2017
* Description: Driver to test the student class
* Copyright notice
*/

#include <iostream>
#include "Student.h"
#include "Module.h"
#include "Person.h"
#include "Lecturer.h"

using namespace std;

int main() {

	//Create a lecturer object
	Lecturer him{ "David Marsh", "dangermouse@io.com", "11009555", "Dangerology" };
	
	//Create a pointer of person class and point it at the Lecturer object
	Person* pPtr = &him;
	
	//Call to String. 
	cout << pPtr->ToString();
	//With virtual functions the version called is based on the type of the object, not the pointer

	//Create a pointer of person class and point it at the student object
	Student stu1("Jeni Watt", "B004568656", "BSc Computing", 1);
	
	pPtr = &stu1;
	cout << pPtr->ToString();

	//Always set pointers to nullptr when you are finished using them
	pPtr = nullptr;

	return 0;
}

