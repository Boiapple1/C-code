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
protected:


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
	//without contructor
	//Employee employee1;
	//employee1.Name = "Mark";
	//employee1.Company = "HEB";
	//employee1.Age = 25;
	//employee1.IntroduceYourself();

}