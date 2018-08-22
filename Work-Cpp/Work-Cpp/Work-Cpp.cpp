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
#include <string.h>
#include <stdlib.h>
#include <sstream>


using namespace std;

#pragma region Функции для заданий

	#pragma region Глава 8

		#pragma region Задание 1
			/*class Distance {
				private:
					int feet;
					float inches;
				public:
					Distance() : feet(0),inches(0.0){ }
					Distance(int ft, float in) : feet(ft),inches(in){ }

					void getdist(){
						cout << "\nВведите футы: "; cin >> feet;
						cout << "Введите дюймы: "; cin >> inches;
					}

					void showdist(){
						cout << feet << "\'-" << inches << '\"';
					}

					Distance operator+ (Distance d2) const{
						int f = feet + d2.feet;
						float i = inches + d2.inches;
						if (i >= 12.0)
						{
							i -= 12.0;
							f++;
						}
						return Distance (f, i );
					}
					
					Distance operator- (Distance d2) const{
						int f = feet - d2.feet;
						float i = inches - d2.inches;
						if (f>0){
							if (i<0){
								i += 12.0;
								f--;
							}
						}
						else{
							cout << "Ошибка в расчетах";
							system("pause");
							exit(1);
						}
						return Distance (f, i );
					}
			};*/
		#pragma endregion

		#pragma region Задание 2 проблемма с заданием
			/*class String{
				private:
					enum { SZ = 80 };
					char str[SZ];
				public:
					String(){
						strcpy_s(str, "");
					}
					String(char s[]){
						strcpy_s(str, s);
					}
					void display() const{
						cout << str;
					}
					String operator+ (String ss) const{
						String temp;
						if (strlen (str) + strlen(ss.str) < SZ ){
							strcpy_s(temp.str, str);
							strcat(temp.str, ss.str);
						}
						else{
							cout << "\nПереполнение!";
							exit(1);
						}
						return temp;
					}
			};*/

		#pragma endregion

		#pragma region Задание 3
			/*class Time {
				private:
					int hours;
					int minute;
					int seconds;

				public:
					Time() {
						hours = 0;
						minute = 0;
						seconds = 0;
					}

					Time(int h, int m, int s) {
						hours = h;
						minute = m;
						seconds = s;
					}

					void display()const {
						cout << hours << ":" << minute << ":" << seconds<<endl;
					}

					Time operator+(Time t1) {
						Time t2;
						t2.seconds = seconds + t1.seconds;
						if (t2.seconds>=60){
							t2.seconds -= 60;
							t2.minute++;
						}
						t2.minute += minute + t1.minute;
						if (t2.minute>=60)
						{
							t2.minute -= 60;
							t2.hours++;
						}
						t2.hours += hours + t1.hours;
						return (t2);
					}
			};*/
		#pragma endregion

		#pragma region Задание 4
			/*class Int {
				private:
					int value;
					int MAX = 2147483647;
					int MIN = -2147483646;
				public:
					Int() {
						value = 0;
					}

					Int(int value) {
						this->value = value;
					}
				
					int operator+(Int i1) {
						if (!(value * i1.value) > MAX || !(value * i1.value) > MIN) {
							system("pause");
							exit(1);
						}
						return value+i1.value;
					}
					
					int operator-(Int i1) {
						if (!(value * i1.value) > MAX || !(value * i1.value) > MIN) {
							system("pause");
							exit(1);
						}
						return value-i1.value;
					}

					int operator*(Int i1) {
						if (!(value * i1.value) > MAX || !(value * i1.value) > MIN) {
							system("pause");
							exit(1);
						}
						return value*i1.value;
					}
					
					int operator/(Int i1) {
						if (!(value==0 && i1.value==0)) {
							if (!(value * i1.value) > MAX || !(value * i1.value) > MIN) {
								return value / i1.value;
							}
						}
						else {
							system("pause");
							exit(1);
						}
					}
				
					void display() {
						cout << value<<endl;
					}
			};*/
		#pragma endregion

		#pragma region Задание 5 - 6
			/*class Time {
				private:
					int days;
					int hours;
					int minute;
					int seconds;
				public:
					Time() {
						days = 0;
						hours = 0;
						minute = 0;
						seconds = 0;
					}

					Time(int d, int h, int m, int s) {
						days= d;
						hours = h;
						minute = m;
						seconds = s;
					}

					void display()const {
						cout << "Day: " << days << " " << hours << ":" << minute << ":" << seconds << endl;
					}

					Time operator+(Time t1) {
						int totalTime = ((hours * 3600) + (minute * 60) + seconds)
							+ ((t1.hours * 3600) + (t1.minute * 60) + t1.seconds);
						hours = totalTime / (60 * 60);
						minute = totalTime / (60*60) % 60;
						seconds = totalTime % (60 * 60) % 60;
						
						while (hours > 24)
						{
							hours -= 24;
							days++;
						}
						return Time(days, hours, minute, seconds);
					}
					
					Time operator-(Time t1) {
						int totalTime = ((hours * 3600) + (minute * 60) + seconds)
							- ((t1.hours * 3600) + (t1.minute * 60) + t1.seconds);
						hours = totalTime / (60 * 60);
						minute = totalTime / (60*60) % 60;
						seconds = totalTime % (60 * 60) % 60;
						while (hours > 24)
						{
							hours -= 24;
							days++;
						}
						return Time(days, hours, minute, seconds);
					}

					Time operator*(Time t1) {
						int totalTime = ((hours * 3600) + (minute * 60) + seconds)
							* ((t1.hours * 3600) + (t1.minute * 60) + t1.seconds);
						hours = totalTime / (60 * 60);
						minute = totalTime / (60*60) % 60;
						seconds = totalTime % (60 * 60) % 60;
						while (hours > 24)
						{
							hours -= 24;
							days++;
						}
						return Time(days, hours, minute, seconds);
					}
					
					Time operator/(Time t1) {
						int totalTime = ((hours * 3600) + (minute * 60) + seconds)
							/ ((t1.hours * 3600) + (t1.minute * 60) + t1.seconds);
						hours = totalTime / (60 * 60);
						minute = totalTime / (60*60) % 60;
						seconds = totalTime % (60 * 60) % 60;
						while (hours > 24)
						{
							hours -= 24;
							days++;
						}
						return Time(days, hours, minute, seconds);
					}

					int operator++(){
						return(++hours, ++minute, ++seconds);
					}

					int operator++(int) {
						return(hours++, minute++, seconds++);
					}
					
					int operator--() {
						return(--hours, --minute, --seconds);
					}

					int operator--(int) {
						return(hours--, minute--, seconds--);
					}
			};*/
		#pragma endregion

		#pragma region Задание 7
			//class fraction{
			//	private:
			//		float slog;
			//		float suslog_2;

			//	public:
			//		fraction(): slog(0), suslog_2(0){}
			//		fraction(float s1, float s2): slog(s1), suslog_2(s2){}

			//		void getFraction(int slog, int suslog_2){
			//			this->slog = slog;
			//			this->suslog_2 = suslog_2;
			//		}

			//		fraction operator+ (fraction num_1) {
			//			cout << slog << "/" << suslog_2 << "+" << num_1.slog << "/" << num_1.suslog_2 << " ";
			//			slog = slog * num_1.suslog_2 + suslog_2 * num_1.slog;
			//			suslog_2 = num_1.suslog_2*suslog_2;
			//			
			//			return fraction(slog, suslog_2);
			//		}

			//		fraction operator- (fraction num_1) {
			//			cout << slog << "/" << suslog_2 << "-" << num_1.slog << "/" << num_1.suslog_2 << " ";
			//			slog = slog * num_1.suslog_2 - suslog_2 * num_1.slog;
			//			suslog_2 = suslog_2 * num_1.suslog_2;

			//			return fraction(slog, suslog_2);
			//		}

			//		fraction operator* (fraction num_1) {
			//			cout << slog << "/" << suslog_2 << "*" << num_1.slog << "/" << num_1.suslog_2 << " ";
			//			slog = slog * num_1.slog;
			//			suslog_2 = suslog_2 * num_1.suslog_2;

			//			return fraction(slog, suslog_2);
			//		}

			//		fraction operator/ (fraction num_1) {
			//			cout << slog << "/" << suslog_2 << "/" << num_1.slog << "/" << num_1.suslog_2 << " ";
			//			slog = slog* num_1.suslog_2;
			//			suslog_2 = suslog_2 * num_1.slog;

			//			return fraction(slog, suslog_2);
			//		}

			//		void showFraction() {
			//			cout << "Равно: " << slog << "/" << suslog_2 << endl;
			//		}

			//		void  lowterms() {
			//			long tnum, tden, temp, gcd;
			//			tnum = labs(slog); // используем неотрицательные 
			//			tden = labs(suslog_2);// значения (нужен cmath) 
			//				if (tden == 0) // проверка знаменателя на О 
			//				{
			//					cout << "Недопустимый знаменатель!";
			//					system ("pause");
			//					exit(1);
			//				}
			//				else if (tnum == 0) // проверка числителя на О 
			//				{
			//					tnum = 0;
			//					tden = 1;
			//					return;
			//				}
			//			while (tnum != 0) // нахождение наибольшего общего делителя 
			//			{
			//				if (tnum < tden) // если числитель больше знаменателя. 
			//				{
			//					//меняем их местами
			//					temp = tnum; 
			//					tnum = tden;
			//					tden = temp;  
			//				}
			//				tnum = tnum - tden; // вычитание 
			//			}
			//			gcd = tden; // делим числитель и знаменатель на 
			//			slog = slog / gcd; // полученный наибольший общий делитель 
			//			suslog_2 = suslog_2 / gcd;
			//		}
			//};
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
	#pragma region Глава 9
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

	#pragma region Глава 8

		#pragma region Задание 1
			/*Distance distl, dist2, dist3, dist4;
			distl.getdist();
			dist2.getdist();
			dist3 = distl + dist2;
			dist4 = dist3 - (distl + dist2);

			cout << "distl = "; distl.showdist(); cout << endl;
			cout << "dist2 = "; dist2.showdist(); cout << endl;
			cout << "dist3 = "; dist3.showdist(); cout << endl;
			cout << "dist4 = "; dist4.showdist(); cout << endl;*/
		#pragma endregion
		
		#pragma region Задание 2
			/*String s1 = "\nC Рождеством! "; 
			String s2 = "С Новым годом!";
			String s3;
			s1.display();
			s2.display();
			s3.display();
			s3 = s1 + s2; 
			s3.display();
			cout << endl;*/
		#pragma endregion
		
		#pragma region Задание 3
			/*Time time1(1,10,30);
			Time time2(15, 40, 41);
				
			time1.display();
			time2.display();

			Time t3;
			t3= time1+time2;
			t3.display();*/
		#pragma endregion
		
		#pragma region Задание 4
			//Int i1(-2147483647), i2(8), i3,i4,i5,i6,i7;
			//i3 = i1 * i2; i3.display();
			//i4 = i1 / i2; i4.display();
			//i5 = i1 + i2; i5.display();
			//i6 = i1 - i2; i6.display();
		#pragma endregion
		
		#pragma region Задание 5 - 6 Выполнена но проблемма с измененнием переменной
			/*Time time1(0, 3, 2, 1);
			Time time2(0, 5, 2, 1);
			Time t3, t4, t5, t6;
			time1++; ++time2;

			time1.display(); time2.display();

			t3 = time2 + time1;
			t4 = time2 - time1;
			t5 = time2 * time1;
			t6 = time2 / time1;

			t3.display(); t4.display();
			t5.display(); t6.display();*/
		#pragma endregion
		
		
		#pragma region Задание 7
			//fraction fr1, fr2, fr_sum;
			//int slog, suslog_2;
			//char znak, drob;
			//cout << "Введите числитель первой дроби - / - знаменатель первой дроби:" << endl;
			//cin >> slog >>drob>> suslog_2;
			//fr1.getFraction(slog, suslog_2);

			//cout << "Введите знак: <+ - * />" << endl;
			//cin >> znak;

			//cout << "Введите числитель второй дроби - / - знаменатель первой дроби:" << endl;
			//cin >> slog >> drob >> suslog_2;
			//fr2.getFraction(slog, suslog_2);

			//switch (znak)
			//{
			//	case '+': fr_sum = fr1 + fr2; break;
			//	case '-': fr_sum = fr1 - fr2; break;
			//	case '*': fr_sum = fr1 * fr2; break;
			//	case '/': fr_sum = fr1 / fr2; break;
			//}
			////Вывод на экран
			//{
			//	fr_sum.showFraction();
			//	fr_sum.lowterms();
			//}
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
	#pragma region Глава 9
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