#include "student_list.h"

StudentList::StudentList(){
	head = NULL;
}

StudentList::~StudentList(){
	
	Student *temp = head, *temp2;
	while(temp != NULL){
		temp2 = temp;
		temp = temp->getNext();
		remove_Student(temp2->getId());
	}
}

void StudentList::add_Student(int id, int semester, const char *name){
	
	Student *temp = head;

    //case 1: checking if ID is already on the list
    while(temp != NULL){
        if(temp->getId() == id){
            if(strcmp(name, temp->getName()) == 0){
                temp->setSemester() = semester;
                return;
            }
            else{
                //cout << "You can't add this student. Id: "<< id << " is already assigned to another person!" << endl;
                return;
            }
        }
        temp = temp->getNext();
    }   

    //case 2: the list is empty so we add first element
    if (head == NULL){
        head = new Student(id, semester, name);
        head->setNext() = NULL;
    }
    else{
        //case 3: new Student will be the first element (head)
        if(id < head->getId()){
            temp = new Student(id, semester, name);
            temp->setNext() = head;
            head = temp;
        }
        //looking for a proper place to place a new student
        else{
            Student *create;
            temp = head;
            while (temp->getNext() != NULL){
                if (id < temp->getId())
                    break;
                temp = temp->getNext();
            }
            //case 4: new student is the last element
            if (temp->getNext() == NULL && temp->getId() < id){
                
                create = new Student(id, semester, name);
                temp->setNext() = create;
                create->setNext() = NULL;
            }
            //case 5: new student as a new element in the middle
            else{
                create = new Student(id, semester, name);

                Student *temp2 = head;
                while (temp2->getNext() != temp)
                {
                    temp2 = temp2->getNext();
                }

                temp2->setNext() = create;
                create->setNext()= temp;
            }
        }
    }
}

void StudentList::remove_Student(int id){
	
	if(head == NULL){
        //cout << "You can't remove this student. The list is empty." << endl;
        return;
    }

    Student *temp = head, *temp2;

    //case 1: delete head
    if(head->getId() == id){
        head = temp->getNext();
        delete temp;
        return;
    }

    //searching for the element to delete
    while (temp->getNext() != NULL)
    {
        if (temp->getNext()->getId() == id)
            break;
        temp = temp->getNext();
    }
    //case 2: there is no such element on the list
    if(temp->getNext() == NULL){
        //cout << "There's no student with id: " << id << " on the list!" << endl;
        return;
    }

    //case 3: delete the last element
    else if(temp->getNext()->getNext() == NULL){
        delete temp->getNext();
        temp->setNext() = NULL;
    }

    //case 4: delete element from the middle
    else{
        temp2 = temp->getNext();
        temp->setNext() = temp2->getNext();
        delete temp2;
    }
}

void StudentList::print(){
	if (head == NULL){
        //cout << "The list is empty\n";
        return;
    }
    
    cout << "***************CURRENT STUDENT LIST**************\n";

    Student *temp = head;
    while (temp != NULL){
        temp->print();
        temp = temp->getNext();
    }

    cout << "*************************************************\n\n";

}
