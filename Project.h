/*
 * Project.h
 *
 *  Created on: 8 Jan 2020
 *      Author: zacharyishmael
 */
#include <string>
using namespace std;
#ifndef PROJECT_H_
#define PROJECT_H_

class Project {
public:
	Project();
	virtual ~Project();
	Project(const Project &other);
	Project(Project &&other);
	Project& operator=(const Project &other);
	Project& operator=(Project &&other);

	const string& getProjectId() const;

	void setProjectId(const string &projectId);

	const string& getSupervisorId() const;

	void setSupervisorId(const string &supervisorId);

	int getSvMult() const ;

	void setSvMult(int svMult);

	const string& getTitle() const;

	void setTitle(const string &title);

private:
	string projectId;
	string supervisorId;
	int svMult;//supervisorMutiplicity
	string title;

};

#endif /* PROJECT_H_ */
