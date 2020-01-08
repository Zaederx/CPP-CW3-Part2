/*
 * Student.cpp
 *
 *  Created on: 7 Jan 2020
 *      Author: zacharyishmael
 */

#include "Student.h"
#include <vector>


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

std::vector Student::getChoices () {
	return choices;
}

void Student::setChoice(int i, int choice) {
	choices[i-1] = choice;
}


