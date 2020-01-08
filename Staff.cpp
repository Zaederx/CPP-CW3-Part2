/*
 * Staff.cpp
 *
 *  Created on: 8 Jan 2020
 *      Author: zacharyishmael
 */

#include "Staff.h"

//Staff::Staff() {
//	// TODO Auto-generated constructor stub
//
//}
//
//Staff::~Staff() {
//	// TODO Auto-generated destructor stub
//}
//
//Staff::Staff(const Staff &other) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Staff::Staff(Staff &&other) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Staff& Staff::operator=(const Staff &other) {
//	// TODO Auto-generated method stub
//
//}
//
//Staff& Staff::operator=(Staff &&other) {
//	// TODO Auto-generated method stub
//
//}
void Staff::setId(string id) {
	this->id = id;
}
string Staff::getId() {
	return id;
}
void Staff::setSupervisionLoad(int load) {
	supervisionLoad = load;
}
int Staff::getSupervisionLoad(){
	return supervisionLoad;
}
void Staff::setCurrentLoad(int load) {
	currentLoad = load;
}
int Staff::getCurrentLoad() {
	return currentLoad;
}
//map<string,int> Staff::getProjects() {
//	return projects;
//}
//
//void Staff::setProjects(std::map projects) {
//	this->projects = projects;
//}
//
//void Staff::setProject(string project, int multiplicity) {
//	projects[project] = multiplicity;
//}


