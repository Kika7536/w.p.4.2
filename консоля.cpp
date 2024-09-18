#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int day;
	cout << "В нашем мае будет 31 день." << endl;
	cout << "Введите день: ";
	cin >> day;

	if (day > 31) {
		cout << "В этом мае всего 31 день!" << endl;
	}
	else if (day < 1) {
		cout << "Не существует нулевого дня... Так же день месяца не может быть отрицательным числом." << endl;
	}
	else {
		if (day % 7 == 0) {
			cout << "Выходной!" << endl;
		}
		else if (day == 1 || day <= 5) {
			cout << "Выходной!" << endl;
		}
		else if (day >= 8 && day <= 10) {
			cout << "Выходной!" << endl;
		}
		else {
			cout << "Рабочий день!" << endl;
		}
	}
}