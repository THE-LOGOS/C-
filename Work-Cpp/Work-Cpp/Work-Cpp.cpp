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
#include <cctype>

#include <fstream>


using namespace std;

#pragma region Функции для заданий

	#pragma region Глава 11
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

#pragma endregion

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 11
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
