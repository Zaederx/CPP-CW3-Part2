/*
 * Student.h
 *
 *  Created on: 7 Jan 2020
 *      Author: zacharyishmael
 */
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

	string getId() {
		return id;
	}

	void setId(string id) {
		this->id = id;
	}

	std::vector getChoices ();

	void setChoice(int i, int choice);
private:
	string id;
	std::vector choices;

};

#endif /* STUDENT_H_ */
