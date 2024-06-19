#include <iostream>


int main() {
	setlocale(0, "Russian");
	
	class Contact {
		std::string name;
		size_t homeNumber;
		size_t personalNumber;
		std::string address;
	public:
		Contact() {
			std::cout << "Конструктор по умолчанию\n";
			name = "noname";
			homeNumber = 0;
			personalNumber = 0;
			address = "HOOD";
		}
		Contact(std::string FIO, std::string ad, int hNumber = 0, int pNumber = 0) {
			std::cout << "Параметрический конструктор.\n";
			name = FIO;
			homeNumber = hNumber;
			personalNumber = pNumber;
			address = ad;

		}
		~Contact() {
			std::cout << "\nДеструктор.\n";
		}
		void sayName() {
			std::cout << "Меня зовут - " << name;
		}
		std::string setName(std::string nickname) {
			return name = nickname;
		}
		int setHomeNumber(size_t num) {
			return homeNumber = num;
		}
		size_t getHomeNumber() {
			return homeNumber;
		 }
		int setPersonalNumber(size_t num1) {
			return personalNumber = num1;
		}
		size_t getPersonalNumber() {
			return personalNumber;
		}
		std::string setAddress(std::string adres) {
			address = adres;
			return address;
		}
		std::string getAddress() {
			return address;
		}
	};
	
	if (true) {
		Contact tmp;
	}

	Contact c1("Robert","hood", 8599, 94848);
	c1.setName("Robert Downey JR.\n");
	c1.sayName();
	c1.setHomeNumber(89502052210);
	std::cout<< "Домашний номер телефона - " << c1.getHomeNumber() << std::endl;
	c1.setPersonalNumber(89503052233);
	std::cout<< "Личный номер телефона - "<< c1.getPersonalNumber() << std::endl;
	c1.setAddress("Улица 8 марта");
	std::cout<<"Адрес - " << c1.getAddress() << std::endl;


	return 0;
}