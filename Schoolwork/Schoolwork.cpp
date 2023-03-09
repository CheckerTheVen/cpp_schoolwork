#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::fstream filestream;
	filestream.open("Text.txt", std::ios::in);

	if (filestream.good()) {

		std::string output;
		double sales, reduction;
		for (int read_set = 1; !filestream.eof(); read_set++) {

			if (read_set % 3 == 0) {
				filestream >> sales;
				std::cout << "Current price: " << sales << "\n";

				std::cout << "Price reduction: ";
				std::cin >> reduction;
				sales -= reduction;

				std::cout << "New price: " << sales;
			}
			else {
				filestream >> output;
				std::cout << output;
			}
			std::cout << "\n";
		}
	}
	else {

		std::cout << "Fehler beim Oeffnen der Datei.";
	}

	filestream.close();
	return 0;
}