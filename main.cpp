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



}
