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

		#pragma region Задание 4 - 6
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
		/*	class Time{
				private:
					int hours;
					int minutes;
					int seconds;
				public:
					Time(): hours(0),minutes(0), seconds(0) {}
					void getTime() {
						while (true)
						{
							cout << "Введите часы: "; cin >> hours;
							if (cin.good()) { 
								if (hours > 23 || hours <= -1) { cerr << "Нуууус, зачем ты так?" << endl; }
								else{ break; }
							}
							else { cerr << "Нуууус, зачем ты так?" << endl; }

							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}

						while (true)
						{
							cout << "Введите минуты: "; cin >> minutes;
							if (cin.good()) { 
								if (minutes > 60 || minutes <= -1) { cerr << "Нуууус, зачем ты так?" << endl; }
								else { break; }
							}
							else { cerr << "Нуууус, зачем ты так?" << endl; }
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}

						while (true)
						{
							cout << "Введите секунды: "; cin >> seconds;
							if (cin.good()) { 
								if (seconds > 60 || seconds <= -1) { cerr << "Нуууус, зачем ты так?" << endl; }
								else { break; }
							}
							else { cerr << "Нуууус, зачем ты так?" << endl; }
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
					}
					
					void putTime() {
						cout << "Часы: " << hours << endl;
						cout << "Минты: " << minutes << endl;
						cout << "Секунды: " << seconds << endl;
					}
			};*/
		#pragma endregion
		
		#pragma region Задание 7 пока не понятно что делать

		#pragma endregion

		#pragma region Задание 8 с божьей помощью
			//struct link{
			//	int data;
			//	link* next;
			//};
			//
			//class LinkList {
			//	private:
			//		link* first;
			//	public:
			//		LinkList() { first = NULL; }

			//		//8 не сделал
			//		/*void addItem(int d) {
			//			link* newLink = new link;
			//			newLink->data = d;
			//			newLink->next = first;
			//			first = newLink;
			//		}*/

			//		//4 
			//		void addItem(int d) {
			//			link* newLink = new link;
			//			newLink->data = d;
			//			newLink->next = first;
			//			first = newLink;
			//		}

			//		~LinkList() {
			//			link* delMe;
			//			link* curent = first;
			//			while (curent)
			//			{
			//				delMe = curent;
			//				curent = curent->next;
			//				delete delMe;
			//			}
			//		}

			//		void display() {
			//			link* curent = first;
			//			while (curent)
			//			{
			//				cout << curent->data << endl;
			//				curent = curent->next;
			//			}
			//		}

			//		friend ostream& operator<<(ostream& stream, const LinkList &list) {
			//			link* curent = list.first;
			//			while (curent)
			//			{
			//				stream << curent->data;
			//				if (curent->next)
			//				{
			//					stream << '\n';
			//				}
			//				curent = curent->next;
			//			}
			//			return stream;
			//		}

			//		friend istream& operator>>(istream& stream, LinkList &list) {
			//			while (!stream.eof())
			//			{
			//				int iVal = 0;
			//				stream >> iVal;
			//				list.addItem(iVal);
			//			}
			//			return stream;
			//		}
			//};
		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

#pragma endregion

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 12
		// задния 9 - 10 не стал делать, это баян
		// 11 не сделал
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
			
		#pragma region Задание 4 - 6
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
			/*string name, name2;
			string lastName, lastName2;
			unsigned int id, id2;
			char ch = '\0';
			ofstream outfile("dataTest.xml", ios::app);
			while (ch != 'n')
			{
				cout << "Введите Имя\\фамилию\\номер:";
				cin >> name >> lastName >> id;
				outfile << name; 	outfile << '\n';
				outfile << lastName; 	outfile << '\n';
				outfile << id; 	outfile << '\n';
				cout << "Try again? y/n: ";cin >> ch;
				outfile << '\n';
			}
			outfile.close();

			ifstream input("dataTest.xml", ios::in);
			if (input)
			{
				while (!input.eof())
				{
					input>>name2;
					input>>lastName2;
					input>>id2;

					cout << name2 << endl;
					cout << lastName2 << endl;
					cout << id2 << endl;
				}
			}*/
		#pragma endregion
		
		#pragma region Задание 5
		/*	Time* t1[80];
			char ch = '\0';
			int n = 0;
			while (ch != 'n')
			{
				t1[n] = new Time;
				t1[n]->getTime();
				n++;
				cout << "Try again? y\\n: ";cin >> ch;
			}
			for (int i = 0; i < n; i++)
			{
				t1[i]->putTime();
			}*/
			
		#pragma endregion
		
		#pragma region Задание 7 пока не понятно что делать

		#pragma endregion
						
		#pragma region Задание 8 с божьей помощью
			/*const int value = 80;
			LinkList li;
			LinkList li2;
			int chois;
			char tryAgain = '\0';
			while (tryAgain != 'n')
			{
				cout << "Выберете действие:\n"
					<< "1. Добавить ссылку в список\n"
					<< "2. Показать данные по всем спискам\n"
					<< "3. Записать данные в файл\n"
					<< "4. Считать данные из файл\n";
				cin >> chois;

				switch (chois)
				{
					case 1: {
						while (tryAgain != 'n')
						{
							int vel = 0;
							cout << "Введите значение: ";cin >> vel;
							li.addItem(vel);
							cout << "Try Again& y\\n?: ";cin >> tryAgain;
						}
						break;
					}
					
					case 2: {
							li.display();
						break;
					}
					
					case 3: {
						ofstream outfile("dataTest8.xml", ios::app);
						outfile << li;
						cout << "Данные записанны." << endl;
						outfile.close();
						break;
					}
					
					case 4: {
						ifstream input("dataTest8.xml", ios::in);
						if (input)
						{
							while (!input.eof())
							{
								input >> li2;
								cout << li2 << endl;
							}
							cout << "Данные прочитанны." << endl;
						}
						break;
					}
						
				}
				cout << "Try Again& y\\n?: ";cin >> tryAgain;
			}*/
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
