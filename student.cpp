#include "student.h"

Student::Student(int id, int semester, const char *name){
	this->id = id;
	this->semester = semester;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->next = NULL;

	cout << "ADDED\n";
	print();
}

Student::~Student(){
	cout << "REMOVED\n";
	print();
	delete[] name;
}

void Student::print(){
	cout << "Id: " << id << endl << "Semester: " << semester << endl << "Name: " << name << endl << endl;
}

int Student::getId(){
	return id;
}

char *Student::getName(){
	return name;
}

int Student::getSemester(){
	return semester;
}

Student *Student::getNext(){
	return next;
}

int &Student::setId(){
	return id;
}

char *Student::setName(const char *name){
	delete[] this->name;
	this->name = new char(strlen(name) + 1);
	strcpy(this->name, name);
	return this->name;
}

int &Student::setSemester(){
	return semester;
}

Student *&Student::setNext(){
	return next;
}


