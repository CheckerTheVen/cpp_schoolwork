#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::string vorname;
	std::string nachname;
	std::string geburtsdatum;
	std::ofstream filestream;

	filestream.open("C:\\Users\\Cekic\\Desktop\\Workbench.txt");

	if (!filestream.good()) {
		return 0;
	}

	std::cin >> vorname >> nachname >> geburtsdatum;

	filestream << "Nachname: " << nachname
		<< "\nVorname: " << vorname
		<< "\nGeburtstag: " << geburtsdatum;

	filestream.close();
	return 0;
}