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
#include <fstream>
#include "Student.h"
#include "Module.h"
#include "Person.h"
#include "Lecturer.h"

using namespace std;
bool WriteStudentDetails(std::vector<Student> &data);

int main() {

	//Create a lecturer object
	Lecturer him{ "David Marsh", "dangermouse@io.com", "11009555", "Dangerology" };

	Student Bob{ "Bob", "Vance", "B00734483", "2018" };
	Module Module1{ "Economics 101", "6790", "100", "75" };
	Module Module2{ "Philosophy 101", "4234", "100", "82" };
	Module Module3{ "Home Economics 101", "8430", "100", "68" };


	Student Jim{ "Jim", "Jones", "B00734461", "2018" };
	Module Module1{ "Programming 1", "8250", "100", "85" };
	Module Module2{ "Software Development", "9290", "100", "72" };
	Module Module3{ "Computer Hardware", "2753", "100", "88" };


	Student Phil{ "Phil", "Swift", "B00732212", "2018" };
	Module Module1{ "Databases 101", "1250", "100", "83" };
	Module Module2{ "Employability", "5210", "100", "71" };
	Module Module3{ "Computer Hardware", "7323", "100", "86" };


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

bool WriteStudentDetails(std::vector<Student> &data) {

	ofstream outFile;

	outFile.open("studentData.txt", ios::out);

	//Check to see if file exists
	if (!outFile) {
		return false;
		exit(EXIT_FAILURE);
	}
	if (outFile) {
		return true;
	}

	//Write text to file
	Student Bob{};
	Module Module1{};
	Module Module2{};
	Module Module3{};


	Student Jim{};
	Module Module1{};
	Module Module2{};
	Module Module3{};


	Student Phil{};
	Module Module1{};
	Module Module2{};
	Module Module3{};


	outFile << Bob.GetName() << ' ' << Bob.GetRegistrationID() << ' ' << Bob.GetYearofStudy() << ' ' << Bob.GetModuleTitle() << ' ' << Bob.GetModuleCode() << ' ' << Bob.GetModuleCreditPoints() << ' ' << Bob.GetModuleMark() << std::endl;
	outFile << Jim.GetName() << ' ' << Jim.GetRegistrationID() << ' ' << Jim.GetYearofStudy() << ' ' << Jim.GetModuleTitle() << ' ' << Jim.GetModuleCode() << ' ' << Jim.GetModuleCreditPoints() << ' ' << Jim.GetModuleMark() << std::endl;
	outFile << Phil.GetName() << ' ' << Phil.GetRegistrationID() << ' ' << Phil.GetYearofStudy() << ' ' << Phil.GetModuleTitle() << ' ' << Phil.GetModuleCode() << ' ' << Phil.GetModuleCreditPoints() << ' ' << Phil.GetModuleMark() << std::endl;

	outFile.close();
	return true;
}


