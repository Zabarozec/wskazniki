// wskazniki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void swap() {
	int a = 20, b = 10;
	int x;
	x = a;
	a = b;
	b = x;
	cout << a << " " << b;
}
int main()
{ //zad1
	/*
	const int size = 3;
	int tab[size];
	int* ptr[size];
	for (int i = 0; i < 3; i++) {
		tab[i] = i * 4;
		
	}
	for (int i = 0; i < 3;i++) {
		ptr[i] = &tab[i];
	
	}
	for (int i = 0; i < 3;i++) {
		cout << "Indeks: " << i << " wartosc: " << *ptr[i] << endl;
	}
	*/
	//zad2
	/*const int size = 3;
	int tab[size];
	int* p;
	int x;
	for (int i = 0; i < 3; i++) {
		cout << "Podaj liczbe " << endl;
		cin >> x;
		tab[i] = x;
	}
	p = &tab[0];
	for (int i = 0; i < 3; i++) {
		cout << "Adres: " << p << " Wartosc: " << *p << endl;
		p++;
	}
	*/
	//zad3
	//swap();
	/*int a = 10, b = 20;
	int* ptr = &a;
	a = b;
	
	cout << a << " " << *ptr; */
	//zad1 
	/*int a;
	int* p = &a;
	cout << "Podaj liczbe " << endl;
	cin >> a;
	cout << *p; */
	//zad2
	/*
	int tab[10];
	for (int i = 0; i < 10; i++) {
		tab[i] = i * 2;
		cout << tab[i] << endl;
	}
	int* wsk;
	wsk = &tab[7];
	*wsk = 77;
	for (int i = 0; i < 10; i++) {
		cout << tab[i] << endl;
	}
	*/
	//zad2.1?
	/*
	int tab[10];
	int* wsk;
	wsk = &tab[0];
	for (int i = 0; i < 10; i++) {
		*wsk = 9;
		cout << tab[i] << endl;
		
		wsk++;
		
		
	}
	*/
	int x;
	cout << "Podaj wielkosc tablicy " << endl;
	cin >> x;


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
