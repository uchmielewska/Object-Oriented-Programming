//#ifndef STUDENT_H
//#define STUDENT_H

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Student{

private:

	int id;
	int semester;
	char *name;
	Student *next;

public:

	Student(int id, int semester, const char *name);
	~Student();
	void print();

	int getId();
	char *getName();
	int getSemester();
	Student *getNext();

	int &setId();
	char *setName(const char *name);
	int &setSemester();
	Student *&setNext();

};

//#endif
