// Work-Cpp.cpp: Здесь я буду делать домашнюю работу по книге Лафре С++ .
//

#include "stdafx.h"
#include <iostream>
#include "iomanip"
#include "ctype.h"
#include "conio.h"
#include "cmath"
#include <algorithm>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <sstream>
#include <cctype>

#include <fstream>


using namespace std;

#pragma region Функции для заданий

	#pragma region Глава 12
		#pragma region Задание 1
			/*class Distance{
				private:
					int feet;
					float inches;
				public:
					Distance() : feet(0), inches(0) {}
					void getDist() {
						cout << "Ввидете feet: " << endl; cin >> feet;
						cout << "Ввидете inches: " << endl; cin >> inches;
					}
					void showDist() {
						cout << "feet: " << feet << endl;
						cout << "inches: "<< inches << endl;
					}
			};*/
		#pragma endregion

		#pragma region Задание 4
			/*class Employee{
				private:
					string name;
					string lastName;
					unsigned long id;
				public:
					void getData() {
						cout << "Введите Имя\\Фамилию\\Номер работника: ";
						cin >> name >> lastName >> id;
					}
					void showData() {
						cout << "Имя: " << name << "\nФамилия: " << 
								lastName << "\nНомер работника: " << id << endl;
					}
					friend ostream& operator<<(ostream& stream, const Employee &employee) {
						stream << employee.name << '\n' << employee.lastName << '\n' << employee.id;
						return stream;
					}
					
					friend istream& operator>>(istream& stream, Employee &employee) {
						stream >> employee.name >> employee.lastName >> employee.id;
						return stream;
					}
			};*/
		#pragma endregion
		
		#pragma region Задание 5
			class Time{
				private:
					int hours;
					int minutes;
					int seconds;
				public:
					void getTime() {
						cout << "Введите часы: "; cin >> hours;
						cout << "Введите минты: "; cin >> minutes;
						cout << "Введите секунды: "; cin >> seconds;
					}
					
					void putTime() {
						cout << "Часы: " << hours << endl;
						cout << "Минты: " << minutes << endl;
						cout << "Секунды: " << seconds << endl;
					}
			};
		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

#pragma endregion

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 12
		#pragma region Задание 1
			/*Distance d1;
			Distance d2;
			char ch = '\0';
			ofstream outfile("test.xml", ios::app);
			while (ch != 'n')
			{
				d1.getDist();
				outfile.write(reinterpret_cast<char*>(&d1), sizeof(d1));
				cout << "Try again? y/n: ";cin >> ch;
			}
			outfile.close();
			ifstream input("test.xml", ios::app);
			if (input)
			{
				while (input.read(reinterpret_cast<char*>(&d1), sizeof(d1)))
				{
					if (input.eof())
					{
						break;
					}
					d1.showDist();
				}
			}*/
		#pragma endregion
		
		#pragma region Задание 2 не понял как работает аргументы в маин
			/*string str = "hello";
			string str2;
			ifstream input;
			input.open("test.xml");
			if (input)
			{
				ofstream out("test2.xml");
				if (out)
				{
					while (getline(input, str2))
					{
						out << str2;
					}
				}
			}		*/	
		#pragma endregion
			
		#pragma region Задание 4
		/*	Employee emp1,emp2;
			char ch = '\0';
			ofstream outfile("dataTest.xml", ios::app);
			while (ch != 'n')
			{
				emp1.getData();
				outfile << emp1;
				cout << "Try again? y/n: ";cin >> ch;
				outfile << '\n';
			}
			outfile.close();

			ifstream input("dataTest.xml", ios::app);
			if (input)
			{
				while (!input.eof())
				{
					input >> emp2;
					emp2.showData();
				}
			}*/
		#pragma endregion
		
		#pragma region Задание 5
			Time* t1;
			char ch = '\0';
			int n = 0;
			while (ch != 'n')
			{
				t1 = new Time;
				t1[n].getTime();
				n++;
				cout << "Try again? y\\n: ";cin >> ch;
			}
			for (int i = 0; i < n; i++)
			{
				t1[n].putTime();
			}
			
		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	system("pause");
	return 0;

}


/*
	#pragma region Глава 12
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 13
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 14
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 15
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 16
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion
*/
