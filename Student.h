/*
 * Student.h
 *
 *  Created on: 7 Jan 2020
 *      Author: zacharyishmael
 */
#include<string>
#include <vector>
using namespace std;
#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
public:
	Student();
	~Student();
	Student(const Student &other);
	Student(Student &&other);
	Student& operator=(const Student &other);
	Student& operator=(Student &&other);

	string getId() const {
		return id;
	}

	void setId(string id) {
		this->id = id;
	}

	std::vector<int> getChoices ();

	void setChoice(int preferenceNum, int choice);
	int getChoice(int preferenceNum);

	int getAssignedProject() const {
		return assignedProject;
	}

	void setAssignedProject(int assignedProject) {
		this->assignedProject = assignedProject;
	}

	friend ostream& operator<<(ostream os, const Student s);
private:
	string id;
	std::vector<int> choices;
	int assignedProject;

};

#endif /* STUDENT_H_ */
