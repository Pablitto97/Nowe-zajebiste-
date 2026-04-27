#include<iostream>
#include<string>

int main() {
	std::string imie;
	int wiek, wynik;
	std::cout << "Wpisz swoje imie\n";
	std::cin >> imie;
	std::cout << "Wpisz ile masz lat\n";
	std::cin >> wiek;
	std::cout << "witaj " << imie << "! masz " << wiek << " lat\n";
	wynik = 75 - wiek;
	if (wynik < 0) {
		std::cout << "Gratulacje! według teestytesty statystyk nie powinienes juz zyc od " << -wynik << " lat\n";
	}
	else if (wynik > 0) {
		std::cout << "Biorac srednia dlugosc zycia zostalo Ci jeszcze " << wynik << " lat zycia\n";
	}
	else {
		std::cout << "Wedlug statystyk umrzesz w tym roku";
	}
	std::cin.ignore();
	std::cin.get();
	return 0;
}