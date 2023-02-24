#pragma once
#include <iostream>
#include <map>
#include <Windows.h>
#include <vector>
using namespace std;


class AutoShow {
	struct Car {
		char name[30];
		int year_issue;
		int engine_volume;
		int price;
	};
	vector<Car> Cars;
public:
	void add();
	void delete_();
	void show(vector<Car> CarsS);
	vector<Car> getCars() { return Cars; }
	void sort_on_price();
	void sort_on_en_vol();
	void sort_on_year_iss();
	void find_on_price();
	void find_on_en_vol();
	void find_on_year_iss();
};

void AutoShow::add() {
	Car temp;
	cout << "Enter a car name:\n";
	cin.ignore();
	gets_s(temp.name, 35);
	cout << "Enter a year issue of car:\n";
	cin >> temp.year_issue;
	cout << "Enter a engine_volume of car:\n";
	cin >> temp.engine_volume;
	cout << "Enter a price of car:\n";
	cin >> temp.price;
	Cars.insert(Cars.end(),temp);
}

void AutoShow::delete_() {
	char* tempName = new char[30];
	cout << "Enter a car name:\n";
	cin.ignore();
	gets_s(tempName, 35);

	for (vector<Car>::iterator iter = Cars.begin(); iter != Cars.end(); iter++) {
		if (strcmp(tempName, (*iter).name) == 0) {
			Cars.erase(iter);
			cout << "Car was deleted\n";
			return;
		}
	}
	cout << "Car with name \"" << tempName << "\" wasn't found\n";
}

void AutoShow::show(vector<Car> CarsS) {
	cout << "||List of cars||\n";

	vector<Car>::iterator iter;

	for (iter = CarsS.begin(); iter != CarsS.end(); iter++) {
		cout << "Name -> " << (*iter).name << endl;
		cout << "Year issue -> " << (*iter).year_issue << endl;
		cout << "Price -> " << (*iter).price << endl;
		cout << "Engine volume -> " << (*iter).engine_volume << endl << endl;
	}
}

void AutoShow::sort_on_price() {
	vector<Car> tempCars = Cars;
		
	Car tempI;

	for (vector<Car>::iterator iter_1 = tempCars.begin(); iter_1 != tempCars.end(); iter_1++) {
		for (vector<Car>::iterator iter_2 = tempCars.end()-1; iter_2 > iter_1; iter_2--) {
			if ((*iter_1).price < (*iter_2).price) {
				tempI = (*iter_1);
				(*iter_1) = (*iter_2);
				(*iter_2) = tempI;
			}
		}
	}
	show(tempCars);
}

void AutoShow::sort_on_en_vol() {
	vector<Car> tempCars = Cars;

	Car tempI;

	for (vector<Car>::iterator iter_1 = tempCars.begin(); iter_1 != tempCars.end(); iter_1++) {
		for (vector<Car>::iterator iter_2 = tempCars.end() - 1; iter_2 > iter_1; iter_2--) {
			if ((*iter_1).engine_volume < (*iter_2).engine_volume) {
				tempI = (*iter_1);
				(*iter_1) = (*iter_2);
				(*iter_2) = tempI;
			}
		}
	}
	show(tempCars);
}

void AutoShow::sort_on_year_iss() {
	vector<Car> tempCars = Cars;

	Car tempI;

	for (vector<Car>::iterator iter_1 = tempCars.begin(); iter_1 != tempCars.end(); iter_1++) {
		for (vector<Car>::iterator iter_2 = tempCars.end() - 1; iter_2 > iter_1; iter_2--) {
			if ((*iter_1).year_issue < (*iter_2).year_issue) {
				tempI = (*iter_1);
				(*iter_1) = (*iter_2);
				(*iter_2) = tempI;
			}
		}
	}
	show(tempCars);
}

void AutoShow::find_on_price() {
	int tempPrice;
	cout << "Enter a price:\n";
	cin >> tempPrice;

	for (vector<Car>::iterator iter = Cars.begin(); iter != Cars.end(); iter++) {
		if ((*iter).price == tempPrice) {
			cout << "Name -> " << (*iter).name << endl;
			cout << "Year issue -> " << (*iter).year_issue << endl;
			cout << "Price -> " << (*iter).price << endl;
			cout << "Engine volume -> " << (*iter).engine_volume << endl << endl;
			return;
		}
	}
	cout << "Car with price " << tempPrice << " wasn't found\n";
}

void AutoShow::find_on_en_vol() {
	int tempEnVol;
	cout << "Enter a price:\n";
	cin >> tempEnVol;

	for (vector<Car>::iterator iter = Cars.begin(); iter != Cars.end(); iter++) {
		if ((*iter).engine_volume == tempEnVol) {
			cout << "Name -> " << (*iter).name << endl;
			cout << "Year issue -> " << (*iter).year_issue << endl;
			cout << "Price -> " << (*iter).price << endl;
			cout << "Engine volume -> " << (*iter).engine_volume << endl << endl;
			return;
		}
	}
	cout << "Car with engine volume " << tempEnVol << " wasn't found\n";
}

void AutoShow::find_on_year_iss() {
	int tempYearIs;
	cout << "Enter a price:\n";
	cin >> tempYearIs;

	for (vector<Car>::iterator iter = Cars.begin(); iter != Cars.end(); iter++) {
		if ((*iter).year_issue == tempYearIs) {
			cout << "Name -> " << (*iter).name << endl;
			cout << "Year issue -> " << (*iter).year_issue << endl;
			cout << "Price -> " << (*iter).price << endl;
			cout << "Engine volume -> " << (*iter).engine_volume << endl << endl;
			return;
		}
	}
	cout << "Car with year issue " << tempYearIs << " wasn't found\n";
}