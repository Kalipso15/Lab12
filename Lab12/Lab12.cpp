#include<iostream>
#include <fstream>
#include <string>
#include<Windows.h>

using namespace std;

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	string filename = "числа.txt";
	
	ifstream infile(filename);
	
	int z;
	cout << "Ведіть Число  z = ";
	
	cin >> z;
	if (infile) { //перевіряємо, що файл був успішно відкритий
		
		

		int num, sum = 0;
		
		while (infile >> num) {

			/*if (num > z) {
			                   //Обратный вариант завдання 
				sum += num;

			}*/

			if (num < z) {

				sum += num;
			
			}

			
		}

		cout << "Сума чисел, меньше   " << z << ":" << sum << endl;
	    //cout << "Сума чисел, більших " << z << ":" << sum << endl;

			infile.close();
		
	}
	else {
		
		cout << "Помилка відкритя файлу " << filename << endl;

	}
	return 0;
}