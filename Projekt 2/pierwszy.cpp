#include<iostream>
#include<string>

int main() {
	std::string imie;
	int wiek, wynik ,srednia;
	char plec;
	std::cout << "Wpisz swoje imie\n";
	std::cin >> imie;
	std::cout << "Wpisz ile masz lat\n";
	std::cin >> wiek;
	std::cout << "witaj " << imie << "! masz " << wiek << " lat\n";
	while (true) {
		std::cout << "Wpisz swoja plec k/m\n";
		std::cin >> plec;
		if (plec == 'k') {
			srednia = 87;
			std::cout << "srednia dlugosc zycia kobiet to 87lat\n";
			break;
		}
		else if (plec == 'm') {
			srednia = 75;
			std::cout << "srednia dlugosc zycia meszczyzn to 75lat\n";
			break;
		}
		else {
			std::cout << "niepoprawna odpowiedz\n";
		}
	}
	wynik = srednia - wiek;
	if (wynik < 0) {
		std::cout << "Gratulacje! wedlug statystyk nie powinienes juz zyc od " << -wynik << " lat\n";
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