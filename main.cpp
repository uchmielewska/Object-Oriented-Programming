#include "student_list.h"

int main(){

	system ("clear");

	StudentList *student_list1;
	StudentList student_list2;

	student_list1 = new StudentList[5];

    cout << "____________________TEST 1 (for dynamic object) ADDING____________________\n\n";

	student_list1->add_Student(300, 2, "Mateusz");
	student_list1->add_Student(505, 2, "Ala");
	student_list1->add_Student(505, 1, "Jola");
	student_list1->add_Student(307, 5, "Ela");
	student_list1->add_Student(209, 2, "Jan");
	student_list1->print();

	cout << "____________________TEST 2 (for dynamic object) REMOVING____________________" << endl;

	student_list1->remove_Student(307);
	student_list1->remove_Student(209);
	student_list1->print();

	delete[] student_list1;

//the end

	cout << "____________________TEST 1 (for automatic object) ADDING____________________" << endl;

	student_list2.add_Student(300, 2, "Mateusz");
	student_list2.add_Student(505, 2, "Ala");
	student_list2.add_Student(103, 1, "Jola");
	student_list2.add_Student(307, 5, "Ela");
	student_list2.add_Student(209, 2, "Jan");
	student_list2.print();

	cout << "____________________TEST 2 (for automatic object) REMOVING____________________" << endl;

	student_list2.remove_Student(505);
	student_list2.remove_Student(307);
	student_list2.print();

	return 0;
}
