#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class User
{
	string login;
	string password;

	User();
	~User();

	void Authorization(string login, string password);

};

class Studient : public User
{
public:
	string group;
	string fio;
	bool gender;
	string groupCode;
	string flowName;

	Studient();
	~Studient();

	Mark Show_specific_studient_marks(list<Mark> specificStudientMarks);
};

class DeansOffice : public User
{
	DeansOffice();
	~DeansOffice();

	Mark Show_All_Studients_Marks(Mark allMarks);
	Studient Create_Remanding_List(list<Mark> allMarks, Studient allStudients);
	Studient Create_Exams_List(Studient allStudients, Subject allSubjects);
	Mark Show_Group_Marks(string groupCode, list<Mark> groupMarks);
	Mark Show_Group_Marks(string flowName, list<Mark> flowMarks);
};

class Teacher : public User
{
public:
	string teacersFIO;

	Teacher();
	~Teacher();

	Mark Show_subjects_marks(Subject teachersSubject);
	Mark Enter_mark(list<Mark> allMarks, Studient allStudients, Subject allSubjects);
	bool Delete_mark(list<Mark> allMarks);
};

class Methodist : public User
{
	Methodist();
	~Methodist();

	Studient Exams_pass_list(Studient allStudients, Subject allSubjects);
	Studient Create_Perfomance_List(list<Mark> allMarks, Studient allStudients, Subject allSubjects);
	Mark Show_All_Studients_Marks(list<Mark> allMarks);
};

class Performance
{
	Performance();
	~Performance();
	list<Mark> allMarks;
	list<Mark> specificStudientsMarks;
	list<Mark> groupMarks;
	list<Mark> flowMarks;
};

class Mark
{
	int point;
	string date;
	string studientsFIO;
	string teachersFIO;

	Mark();
	~Mark();
};

class Subject
{
	string subjectsName;
	list<Mark> subjectsMarks;

	Subject();
	~Subject();
};

int main()
{
	setlocale(0, "");


	system("pause");
	return 0;
}