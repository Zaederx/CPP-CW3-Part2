/*
 * Staff.h
 *
 *  Created on: 8 Jan 2020
 *      Author: zacharyishmael
 */
#include <string>
#include <map>
using namespace std;
#ifndef STAFF_H_
#define STAFF_H_

class Staff {
public:
//	Staff();
//	virtual ~Staff();
//	Staff(const Staff &other);
//	Staff(Staff &&other);
//	Staff& operator=(const Staff &other);
//	Staff& operator=(Staff &&other);

	void setId(string id);
	string getId();

	void setSupervisionLoad(int load);
	int getSupervisionLoad();
	void setCurrentLoad(int currentLoad);
	int getCurrentLoad();

//	map<string,int> getProjects();
//	void setProjects(std::map projects);
//	void setProject(string project, int multiplicity);
private:
	string id;
	int supervisionLoad;
	int currentLoad;
//	map<string,int> projects;
};

#endif /* STAFF_H_ */
