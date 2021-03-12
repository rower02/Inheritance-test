#include <string>
#include <iostream>

class Zwierze {
public:
	int wiek;
};

class ZwierzeDomowe : public Zwierze {
public:
	std::string imie;
};

class Kot : public ZwierzeDomowe {
public:
	int poziomSkradania;
	void JedzZReki() {
		std::cout << "Ok" << std::endl;
	}
};

class Pies : public ZwierzeDomowe{
public:
	void DajGlos() {
		std::cout << "Daj glos" << std::endl;
	}
	void JedzZReki() {
		std::cout << "Ok" << std::endl;
	}

	void GaniajZaOgonem() {
		std::cout << "Ogon" << std::endl;
	}
};

int main() {
	Pies pies;
	pies.imie = "pies";
	pies.DajGlos();
	pies.GaniajZaOgonem();


	Kot kot;
	kot.imie = "kot";
	kot.poziomSkradania = 5;
	return 0;
}