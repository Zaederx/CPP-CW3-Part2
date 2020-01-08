/*
 * Student.cpp
 *
 *  Created on: 7 Jan 2020
 *      Author: zacharyishmael
 */

#include "Student.h"
#include <vector>
#include <iostream>
using namespace std;

Student::Student() {
	// TODO Auto-generated constructor stub

}

//Student::~Student() {
//	// TODO Auto-generated destructor stub
//}
//
//Student::Student(const Student &other) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Student::Student(Student &&other) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Student& Student::operator=(const Student &other) {
//	// TODO Auto-generated method stub
//
//}
//
//Student& Student::operator=(Student &&other) {
//	// TODO Auto-generated method stub
//}

ostream& operator<<(ostream os, const Student& s) {
	os << s.getId() << " " << s.getAssignedProject();
	return os;
}

vector<int> Student::getChoices () {
	return choices;
}

//where i is the order pf preference 1.e. 1 - 4
//not starting from zero
void Student::setChoice(int i, int choice) {
	choices[i-1] = choice;
}

int Student::getChoice(int i) {
	return choices[i-1];
}


