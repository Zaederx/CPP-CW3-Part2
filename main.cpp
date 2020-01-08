#include "Project.h"
#include "Staff.h"
#include "Student.h"
#include "vector"
#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char const *argv[]) {

	fstream staffFile(argv[1]);
	fstream projectFile(argv[2]);
	fstream studentFile(argv[3]);

	vector<Staff> staffList;
	vector<Student> studentList;
	vector<Project> projectList;

	while(!staffFile.eof()) {
		Staff s;
		string id;
		int load;

		//read file
		staffFile >> id >> load;

		//set Staff
		s.setId(id);
		s.setSupervisionLoad(load);

		//add to staff list
		staffList.push_back(s);
	}
	while(!projectFile.eof()) {
		Project p;

		//TODO may have to change these to constatns
		string projId; //project id
		string svId; // supervisor id
		int mul; //multiplicity
		string title;

		projectFile >> projId >> svId >> mul >> title;

		p.setProjectId(projId);
		p.setSupervisorId(svId);
		p.setSvMult(mul);
		p.setTitle(title);

		projectList.push_back(p);
	}
	while(!studentFile.eof()) {
		Student s;

		//TODO - CAREFULL NOT TO PUT CHOICES WRONG WAY ROUND
		string id;
		int c1;
		int c2;
		int c3;
		int c4;

		studentFile >> id >> c1 >> c2 >> c3 >> c4;

		s.setId(id);
		s.setChoice(1,c1); // method -1 from choice number
		s.setChoice(2,c2); // see Student.cpp
		s.setChoice(3,c3);
		s.setChoice(4,c4);

		studentList.push_back(s);

	}

}
