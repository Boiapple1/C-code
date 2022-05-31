#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskForPromotion()=0;


};

class Employee:AbstractEmployee {

private:
	string Name;
	string Company;
	int Age;

public:
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if(age>=18)
		Age = age;
	}
	int getAge() {
		return Age;
	}
	//function
	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;

	}
	//contructor
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;

	}

	void AskForPromotion() {
		if (Age > 21)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry No promotion for you!!" << std::endl;
	}
	virtual void Work() {
		std::cout << Name << " is checking email, task backlog, performing tasks... " << std::endl;
	}
	void Work1() {
		std::cout << Name << " is checking email, task backlog, performing tasks... " << std::endl;
	}
protected:


};
//inheritance
class Developer :public Employee {
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage)
		:Employee(name,company, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void FixBug() {
		std::cout << getName() << " Fix bug using " << FavProgrammingLanguage << std::endl;
	}
	void Work() {
		std::cout << getName() << " is checking email, writing code, and debug code... " << std::endl;
	}
};
//inheritance
class Teacher :public Employee {
public:
	string Subject;
	void PrepareLesson() {
		std::cout << getName() << " is preparing " << Subject << " Lesson" << std::endl;
	}
	Teacher(string name, string company, int age, string subject)
		:Employee(name, company,age)
	{
		Subject = subject;
	}
	void Work() {
		std::cout << getName() << " is checking email and teaching, performing tasks... " << std::endl;
	}
};
int main() 
{
	//contructor
	Employee employee2 = Employee("Jay", "Walmart", 24);
	employee2.IntroduceYourself();
	employee2.setAge(26);
	std::cout << employee2.getName() << " is " << employee2.getAge() << " years old"<< std::endl;
	employee2.IntroduceYourself();
	employee2.AskForPromotion();
	Developer d = Developer("Daniel", "Roboti", 25, "C++");
	d.FixBug();
	d.AskForPromotion();
	Teacher t = Teacher("Jose", "Morton Ranch High School", 34, "History");
	t.PrepareLesson();
	t.AskForPromotion();
	d.Work();
	t.Work();
	//polymorphism is when a parent class refence is used to a child class object
	Employee* e1 = &d;
	Employee* e2 = &t;

	e1->Work();
	e2->Work();
	e1->Work1();
	e2->Work1();

	//without contructor
	//Employee employee1;
	//employee1.Name = "Mark";
	//employee1.Company = "HEB";
	//employee1.Age = 25;
	//employee1.IntroduceYourself();

}