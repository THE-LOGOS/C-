// Work-Cpp.cpp: Здесь я буду делать домашнюю работу по книге Лафре С++ .
//


#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "ctype.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 2

		#pragma region Задание 1
			/*const float futGalon = 7.481f;
			int galon;
			float value;
			cout << "Введите количество галонов" << endl;
			cin >> galon;
			value = futGalon * galon;
			cout << "Кол-во головнов = " << galon << " Объем в кубических футах = " << value << endl;*/
		#pragma endregion

		#pragma region Задание 2	
			/*cout << 1990 << setw(9) << 135 << "\n" <<
			1991 << setw(9) << 7290 << "\n" <<
			1992 << setw(9) << 11300 << "\n" <<
			1993 << setw(9) << 16200 << endl;*/
		#pragma endregion

		#pragma region Задание 3
			/*const int constValue = 10;
			int value = constValue + 10;
			int dicrementValue = value;
			cout <<constValue <<"\n"<< value << "\n" << --dicrementValue << endl;*/
		#pragma endregion

		#pragma region Задание 4
			/*cout << "Симон!!!!" << "\n"
			<< "Не верь в свою веру в себя" << "\n"
			<< "Вверь в мою веру в тебя" << endl;*/
		#pragma endregion

		#pragma region Задание 5
			/*	cout << "Введите букву" << endl;
			char simbol;
			cin >> simbol;
			cout << "Если вы ввели заглавную вы увидете 0, а если строчную цело число"<< endl
			<< "Число = "
			<< islower(simbol) << endl;*/
		#pragma endregion

		#pragma region Задание 6
			/*int funt;
			const float dollar = 1.487f;
			const float frank = 0.172f;
			const float marka = 0.584f;
			const float iena = 0.009955f;
			cout << "Введите кол-во фунтов: ";
			cin >> funt;
			cout <<"Цены на бирже за фунт \n"
			<< "Долар "<< setw(18) << funt * dollar << endl
			<< "Франк "<< setw(18) << funt * frank << endl
			<< "Немецкие марки "<< setw(9) << funt * marka << endl
			<< "Йена "<< setw(22) <<  funt * iena << endl;*/
		#pragma endregion

		#pragma region Задание 7
			/*	float gradus;
			float foringete;
			cout << "Введите температуру в градусах: ";
			cin >> gradus;
			foringete = (gradus * 1.8) + 32;
			cout <<"Температура в форингейтах " <<foringete << endl;*/
		#pragma endregion

		#pragma region Задание 8
			//char dot = '.';
			//cout << setfill(dot) << 
			//1990 << setw(9) << 135 << "\n" <<
			//1991 << setw(9) << 7290 << "\n" <<
			//1992 << setw(9) << 11300 << "\n" <<
			//1993 << setw(9) << 16200 << endl;
		#pragma endregion

		#pragma region Задание 9 не получилось
			/*int oneDrob;
			int twoDrob;

			int threeDrob;
			int fourDrob;
			int value;

			cout << "ВВедите первую дробь  ";
			cin >> oneDrob;
			cout << " / ";
			cin >> twoDrob;

			cout << "ВВедите вторую дробь  ";
			cin >> threeDrob;
			cout << " / ";
			cin >> fourDrob;

			value = ((oneDrob * fourDrob) + (twoDrob * threeDrob)) / (twoDrob*fourDrob);
			cout << "Сумма равна " << value << endl;*/
		#pragma endregion

		#pragma region Задание 10
			/*int funt;
			int shiling;
			int pens;

			cout << "Введите кол-во Фунтов: ";
			cin >> funt;

			cout << "Введите кол-во Шиллингов: ";
			cin >> shiling;

			cout << "Введите кол-во Пенсов: ";
			cin >> pens;*/
		#pragma endregion

	#pragma endregion

	#pragma region Глава 3
		#pragma region Вопросы вернуться позже
			/*char game ='n';

			do
			{
			int user = 0;

			cout << "Введите :\n 1.Цикл for \n 2.Цикл while \n 3.Цикл Do while " << endl;
			cin >> user;

			if ((!cin) || user == 1 || user == 2 || user == 3)
			{
			if (user == 1) {
			cout << "Цикл for будет выводить числа от 100 - 110" << endl;
			for (int i = 100; i <= 110; i++)
			{
			cout << i << endl;
			}
			}
			else if (user == 2) {
			cout << "Цикл while будет выводить числа от 100 - 110" << endl;
			int i = 100;
			while (i <= 110)
			{
			cout << i++ << endl;
			}
			}
			else if (user == 3) {
			cout << "Цикл Do while будет выводить числа от 100 - 110" << endl;
			int i = 100;
			do
			{
			cout << i++ << endl;
			} while (i <= 110);
			}
			}
			else
			{
			cout << "Вы ошиблись, попробуйте еще раз!" << endl;
			continue;
			}

			cout << "Хотите повторить ? y/n:  ";
			cin >> game;
			} while (game != 'n');*/
		#pragma endregion

		#pragma region Задание 1
			/*int n;
			cout << "Введите значение: " << endl;
			cin >> n;
			for (int i = 1; i <= 100; i++) {
			cout << n * i<<' ';
			if (i % 10==0)
			cout << endl;
			}*/
		#pragma endregion

		#pragma region Задание 2
			/*int n;
			cout << "Введите значение: " << endl;
			cin >> n;
			for (int i = 1; i <= 100; i++) {
			cout << n * i<<' ';
			if (i % 10==0)
			cout << endl;
			}*/
		#pragma endregion

	#pragma endregion


	system("pause");
	return 0;
}

