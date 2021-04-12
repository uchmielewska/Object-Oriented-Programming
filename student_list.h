//#ifndef STUDENT_LIST_H
//#define STUDENT_LIST_H

#include "student.h"

using std::cout;
using std::endl;

class StudentList
{

private:
	Student *head;

public:
	StudentList();
	~StudentList();
	void add_Student(int id, int semester, const char *name);
	void remove_Student(int id);
	void print();
};

//#endif
