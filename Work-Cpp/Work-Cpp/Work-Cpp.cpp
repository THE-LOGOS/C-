// Work-Cpp.cpp: Здесь я буду делать домашнюю работу по книге Лафре С++ .
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "ctype.h"
#include "conio.h"
#include "cmath"
#include <algorithm>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <sstream>


using namespace std;

#pragma region Функции для заданий

	#pragma region Глава 9
		#pragma region Задание 1
			//class Publication
			//{
			//	private:
			//		string str;
			//		float price;
			//	public:
			//		Publication() :str("N\A"), price(0.0) {}
			//		//Publication(string str, float pr) :str(str), price(pr) {}
			//		
			//		void getData() {
			//			cout << "Введите название для книги: "; cin >> str;
			//			cout << "Введите цену для книги: "; cin >> price;
			//		}
			//		
			//		void putData() {
			//			cout << "Название книги: "<< str <<" "; 
			//			cout << "Цена книги: " << price << endl;
			//		}
			//};

			//class Book : public Publication {
			//	private:
			//		int page;
			//	public:
			//		Book() :page(0) {}

			//		void getData() {
			//			Publication::getData();
			//			cout << "Введите кол-во страниц для книги: "; cin >> page;
			//		}

			//		void putData() {
			//			Publication::putData();
			//			cout << "Страниц в книге: " << page << endl;
			//		}
			//};
			//
			//class Type : public Publication {
			//	private:
			//		float timeBook;
			//	public:
			//		Type() :timeBook(0.0) {}

			//		void getData() {
			//			Publication::getData();
			//			cout << "Введите время записи для книги: "; cin >> timeBook;
			//		}

			//		void putData() {
			//			Publication::putData();
			//			cout << "Время записи книги: " << timeBook << endl;
			//		}
			
		#pragma endregion

		#pragma region Задание 2
			/*class String{
				protected:
					enum { SZ = 80 };
					char str[SZ];
				public:
					String(){
						str[0] == '\x0';
					}
					String(char s[]){
						strcpy_s(str,s);
					}
					void display() const{
						cout << str;
					}
					operator char* (){
						return str;
					}
			};

			class Pstring : public String{
				public:
					Pstring(char s[]){
						if (strlen(s) > SZ - 1)
						{
							for (int i = 0; i < SZ - 1; i++) {
								str[i] == s[i];
								str[i] == '\0';
							}
						}
						else
						{
							String(s);
						}
					}

			};*/
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

/*
	#pragma region Глава 10
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

	#pragma region Глава 11
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
#pragma endregion

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 9		
		#pragma region Задание 1
			/*Book b1;
			Type t1;

			b1.getData();
			t1.getData();
			b1.putData();
			t1.putData();*/
		#pragma endregion
		
		#pragma region Задание 2
		/*	char xstr[] = "Ура, товарищи! ";
			Pstring si = xstr;
			si.display();

			char xstr1[] = "Мы победим!";
			Pstring s2 = xstr1;
			cout << static_cast<char*>(s2);
			cout << endl;

			char xstr2[] = "Это очень длинная строка, фиг его знает как программа отработает, но надеюсь она не упадет!";
			Pstring s3 = xstr2;
			s3.display();*/
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

/*
	#pragma region Глава 10
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

	#pragma region Глава 11
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

	system("pause");
	return 0;
}