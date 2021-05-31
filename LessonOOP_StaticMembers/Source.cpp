#include <iostream>
#include <vector>
using namespace std;
//Учень - код учня, ПІБ, домашня адреса, дата народження, місце роботи батька та матер, посада батька та матері.
//Вчитель - ПІБ, предмет, стаж, оклад.
//Успішність – учень, предмет, оцінка, дата оцінки, вчитель.
//LessonOOP_StaticMembers
class Pupil {
private:
	int id;
	string PIB;
	string adress;
	int age;
	// here must be date of birth
	string place_father_work;
	string place_mother_work;
public:
	int getId() {
		return id;
	}
	static int id_counter;
	void print() {
		cout << "-------------Pupil-------------" << endl;
		cout << "ID : " << id << endl;
	}
	Pupil(string PIB, string adress, string place_father_work, string place_mother_work, int age)
	{
		id = ++id_counter;
		this->PIB = PIB;
		this->adress = adress;
		this->place_father_work = place_father_work;
		this->place_mother_work = place_mother_work;
		this->age = age;
	}
	Pupil() 
		:Pupil("NoName NoSurname NoFatherName", "NoAdress", "NoPlace", "NoPlace", 0)
	{
		/*cout << "Default ctor is called" << endl;*/
	}
};
class Teacher {
	string PIB;
	string item;
	int experience; // expirience in years
	int salary;
public:
	Teacher(string PIB , string item, int experience, int salary)
	{
		this->PIB = PIB;
		this->item = item;
		this->experience = experience;
		this->salary = salary;
	}
	Teacher()
		:Teacher("NoName NoSurname NoFatherName", "NoItem", 0, 0)
	{
			
	}
};
class Success {
	Pupil pupil;
	int age;
	string item;
	int mark;
	Teacher teacher;
	Success(Pupil pupil, int age, string item, int mark, Teacher tecaher)
	{
		this->pupil = pupil;
		this->age = age;
		this->item = item;
		this->mark = mark;
		this->teacher = teacher;
	}
};
int Pupil::id_counter = 0;
int main() {
	vector<Pupil> pupils;
	pupils.push_back(Pupil());
	pupils.push_back(Pupil());
	pupils.push_back(Pupil());
	pupils.push_back(Pupil());
	pupils.push_back(Pupil());
	for (auto& i : pupils)
	{
		i.print();
	}
	//cout << typeid(int).name() << endl; getType of variable
	return 0;
}