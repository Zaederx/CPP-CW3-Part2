/*
 * Project.cpp
 *
 *  Created on: 8 Jan 2020
 *      Author: zacharyishmael
 */

#include "Project.h"

//Project::Project() {
//	// TODO Auto-generated constructor stub
//
//}
//
//Project::~Project() {
//	// TODO Auto-generated destructor stub
//}
//
//Project::Project(const Project &other) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Project::Project(Project &&other) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Project& Project::operator=(const Project &other) {
//	// TODO Auto-generated method stub
//
//}
//
//Project& Project::operator=(Project &&other) {
//	// TODO Auto-generated method stub
//
//}

int Project::getProjectId() {
		return projectId;
}

void Project::setProjectId(int projectId) {
		this->projectId = projectId;
}

const string& Project::getSupervisorId() const {
		return supervisorId;
}

void Project::setSupervisorId(const string &supervisorId) {
	this->supervisorId = supervisorId;
}

int Project::getMult() const {
	return svMult;
}

void Project::setSvMult(int svMult) {
	this->svMult = svMult;
}

const string& Project::getTitle() const {
	return title;
}

void Project::setTitle(const string &title) {
	this->title = title;
}

