#include <iostream>

class Persoana
{
public:
	int inaltime;
	double greutate;

	void Merge()
	{
		std::cout << "- merge;" << std::endl;
	}
	void Doarme()
	{
		std::cout << "- doarme;" << std::endl;
	}
	void Mananca()
	{
		std::cout << "- mananca;" << std::endl;
	}
};

int main()
{
	Persoana p;
	p.inaltime = 178;
	p.greutate = 67.4;
	std::cout << "Persoana" << std::endl;
	std::cout << std::endl;
	std::cout << "Propietati:" << std::endl;
	std::cout << "- inaltime(cm) " << p.inaltime << std::endl;
	std::cout << "- greutate(kg) " << p.greutate << std::endl;
	std::cout << std::endl;
	std::cout << "Functionalitati:" << std::endl;
	p.Merge();
	p.Doarme();
	p.Mananca();

	system("pause");
}