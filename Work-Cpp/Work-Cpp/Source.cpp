// Work-Cpp.cpp: ����� � ���� ������ �������� ������ �� ����� ����� �++ .
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "ctype.h"
#include "conio.h"
#include "cmath"
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <sstream>


using namespace std;

#pragma region ������� ��� �������
	#pragma region ����� 5
		#pragma region �������
			/*void foo() {
				cout << "foo" << endl;
			}*/

			/*int times(int a){
				return (a * 2);
			}*/
	
			/*inline float footbar(float a){
				return a+a;
			}*/


			/*char byth(int a, float b) {

				return b;
			}*/
		#pragma endregion	
		
		#pragma region ������� 1
			/*float circArea (float radius){
				const float PI = 3.14159f;
				float area = PI * (radius*radius);
				return area;
			}*/
		#pragma endregion

		#pragma region ������� 2
			/*double power (double n, int p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}*/
		#pragma endregion

		#pragma region ������� 3
			/*void zeroSmaller(int& a, int& b) {
				if (a != b) {
					if (a > b) { b = 0; }
					else { a = 0; }
				}
				else
				{ cout << "�� ������!" << endl; }
			}*/
		#pragma endregion

		#pragma region ������� 4
			/*struct Distance{
				int a;
				float b;
			};

			Distance func(Distance d1, Distance d2) {
				if ((d1.a == d2.a) && (d1.b == d2.b)) {
					cout << "��� �����";
					d1.a = 0;
					d1.b = 0;
					return d1;
				}
				else if (d1.a > d2.a)
				{
					return d1;
				}
				else if (d1.a < d2.a)
				{
					return d2;
				}
				else if (d1.b > d2.b) {
					return d1;
				}
				else if (d1.b < d2.b) {
					return d2;
				}
			}

			void endDisp(Distance disp) {
				cout <<"���������� �� ���������� ����� = " << disp.a << " " << disp.b;
			}*/
		#pragma endregion

		#pragma region ������� 5
			/*long hms_to_secs(int hours, int minute, int sec){
				long second = (hours * 3600) + (minute * 60) + sec;
				return second;
			}*/
		#pragma endregion

		#pragma region ������� 6
			/*struct Time {
				int hours;
				int minutes;
				int seconds;
			};

			long time_to_sec(Time t) {
				long sec = (t.hours * 3600) + (t.minutes * 60) + t.seconds;
				return sec;
			}

			Time secs_to_time(long sec) {
				Time ti1;
				ti1.hours = sec / 3600 ^ 0;
				ti1.minutes = (sec - ti1.hours * 3600) / 60 ^ 0;
				ti1.seconds = sec - ti1.hours * 3600 - ti1.minutes * 60;
				return ti1;
			}

			void endDipl(Time time) {
				cout << "���� = " << time.hours << " " << "������ = " << time.minutes << " " << "������� = " << time.seconds << endl;
			}*/	
		#pragma endregion

		#pragma region ������� 7
			/*double power (double n, int p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}
			
			double power (long n, char p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}
			
			double power (float n, int p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}*/
			
		#pragma endregion

		#pragma region ������� 8
			/*void swop(int& a, int& b){
				const int z = 12;
				const int x = 22;
				a += z;
				b += x;
				cout << "�������� � ������� swop = " << "a =" << a << " " << "b = " << b << endl;
				cout << "�������� �������� � ������� swop = " << "z =" << z << " " << "x = " << x << endl;
			}*/
		#pragma endregion

		#pragma region ������� 9
			/*struct Time{
				int hours;
				int minutes;
				int seconds;
			};

			void swap (Time& t1, Time& t2) {
				const int h = 1;
				const int m = 2;
				const int s = 3;
				t1.hours += h;
				t1.minutes += m;
				t1.seconds += s;
				
				t2.hours += h;
				t2.minutes += m;
				t2.seconds += s;
			}	 */			
		#pragma endregion

		#pragma region ������� 10
			/*void funk (){
				static int i = 0;
				++i;
				cout << "��� ������� ������������� " << i << " ���" << endl;
			}*/
		#pragma endregion

		#pragma region ������� 11
			
		#pragma endregion

		#pragma region ������� 12
			//struct fraction{
			//	float slog;
			//	float suslog_2;
			//	float result;
			//};

			//fraction fadd (fraction num_1 , fraction num_2) {
			//	fraction f1;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "+" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f1.result = (num_1.slog*num_2.suslog_2 + num_1.suslog_2 * num_2.slog) / (num_1.suslog_2*num_2.suslog_2);
			//	//cout << " �����: " << f1.result << endl;

			//	return f1;
			//}

			//fraction fsub (fraction num_1, fraction num_2) {
			//	fraction f2;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "-" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f2.result = (num_1.slog*num_2.suslog_2 - num_1.suslog_2 * num_2.slog) / (num_1.suslog_2*num_2.suslog_2);
			//	//cout << " �����: " << f2.result << endl;

			//	return f2;
			//}

			//fraction fmul(fraction num_1, fraction num_2) {
			//	fraction f3;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "*" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f3.result = (num_1.slog*num_2.slog) / (num_1.suslog_2 * num_2.suslog_2);
			//	//cout << " �����: " << f3.result << endl;

			//	return f3;
			//}

			//fraction fdiv(fraction num_1, fraction num_2) {
			//	fraction f4;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "/" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f4.result = (num_1.slog*num_2.suslog_2) / (num_1.suslog_2 * num_2.slog);
			//	//cout << " �����: " << f4.result << endl;

			//	return f4;
			//}
		#pragma endregion

	#pragma endregion

	#pragma region ����� 6
		#pragma region �������
			/*class Leverage
			{
				private:
					int crowbar;

				public:
					void pry() {}

					int getcrow() {
						return crowbar;
					}
				
				Leverage() {
					crowbar = 0;
				}
			};*/
		#pragma endregion

		#pragma region ������� 1
			/*class Int {
				private:
					int i;

				public:
					Int() {
						i = 0;
					}

					Int(int i1) {
						i = i1;
					}
				
					void add(Int i2,Int i3) {
						i = i2.i + i3.i;
					}
				
					void display() {
						cout << i;
					}

			};*/
		#pragma endregion

		#pragma region ������� 2
			/*class toolBoth{
				private:
					unsigned int car;
					double money;

				public:
					toolBoth(){
						car = 0;
						money = 0;
					}
					void paingCar() {
						car++;
						money += 0.50;
					}
				
					void nonCar() {
						car++;
					}

					void display() {
						cout << "�������� ����� = " << car << "\n";
						cout << "��������� = " << money << " ";
					}
			};*/
		#pragma endregion

		#pragma region ������� 3
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

					void timeSum(Time t1 , Time t2) {
						
						seconds = t1.seconds + t2.seconds;
						if (seconds>=60){
							seconds -= 60;
							minute++;
						}
						minute += t1.minute + t2.minute;
						if (minute>=60)
						{
							minute -= 60;
							hours++;
						}
						hours += t1.hours + t2.hours;
						
					}
			};*/
		#pragma endregion

		#pragma region ������� 4
			///*class Emploee{
			//	private:
			//		int identif;
			//		float oklad;
			//	
			//	public:
			//		void getPersonal(int id, float zp) {
			//			identif = id;
			//			oklad = zp;
			//		}

			//		void showPersonal() {
			//			cout << "����� ���������: " << identif << endl;
			//			cout << "�������� ���������: " << oklad << endl;
			//			cout << endl;
			//		}
			//
			//};*/
		#pragma endregion

		#pragma region ������� 5
			/*class date{
				private:
					int month, day, year;
					
				public:
					void getDate(int d, int m, int y) {
						month = m;
						day = d;
						year = y;
					}

					void showData() {
						cout << day << "/" << month << "/" << year << endl;
					}
			};*/
		#pragma endregion

		#pragma region ������� 6
			/*class Date{
				public:
					int month, day, year;

					Date() : day(0), month(0), year(0) {}
					Date(int d, int m, int y) : day(d), month(m), year(y) {}
			};

			class Employee {
				private:
					int number;
					float salary;
					Date date;
					char letter;
					int post;
					enum specials { laborer, secretary, manager};

				public:
					Employee() :number(0), salary(0){}
					Employee(int id, float zp):number(id),salary(zp){}

					void get_empl()
					{
						char ch;
						cout << "������� ����� ����������" << endl;
						cin >> number;
						cout << "��������" << endl;
						cin >> salary;
						cout << "������� ������ ������ ���������� � ������� (��/��/����) " << endl;
						cin >> date.day >> ch >> date.month >> ch >> date.year;
						cout << "������� ��������� ���������� ������ ������ ����� (laborer, secretary, manager)" << endl;
						cin >> letter;
						switch (letter)
						{
						case 'l': post = laborer; break;
						case 's': post = secretary; break;
						case 'm': post = manager; break;
						}

					}
					void put_empl()const
					{
						cout << "��������� " << number << ", �������� " << salary << "$," << " ���� �������� �� ������ " << date.day << "/" << date.month << "/" << date.year << ", ��������� ";
						switch (post)
						{
						case laborer: cout << "laborer" << endl; break;
						case secretary: cout << "secretary" << endl; break;
						case manager: cout << "manager" << endl; break;
						}
					}
			};*/
		#pragma endregion

		#pragma region ������� 7
			//class Angle{
			//	private:
			//		int angle;
			//		float minute;
			//		char simbols;

			//	public:
			//		Angle() :angle(0), minute(0), simbols(0) {}

			//		Angle(int a, float m, char s) :angle(a), minute(m), simbols(s) {
			//			//cout << angle << "�" << minute << "�" << simbols << endl;
			//		}

			//		void getAngle(int a, float m, char s) {
			//			angle = a;
			//			minute = m;
			//			simbols = s;
			//		}

			//		void showAngle() {
			//			cout << angle << "�" << minute << "�" << simbols << endl;
			//		}
			//};
		#pragma endregion
			
		#pragma region ������� 8
			/*class myObject{
				private:
					static int start;
					int id;

				public:
					myObject() {
						start++;
						id = start;
					}
					int getid() {
						return id;
					}
			};

			int myObject::start = 0;*/
		#pragma endregion

		#pragma region ������� 9
			/*class Fraction{
				private:
					int chislit;
					int znamenat;
				
				public:
					Fraction() :chislit(0), znamenat(0) {};
					void getValue(int c,int z){
						chislit = c;
						znamenat = z;
					};

					void getPlus(Fraction m1, Fraction m2){
						cout << m1.chislit << "\\" << m1.znamenat << " + " << m2.chislit << "\\" << m2.znamenat << " ";
						chislit = m1.chislit*m2.znamenat + m1.znamenat * m2.chislit;
						znamenat = m1.znamenat*m2.znamenat;
						double result = (chislit / znamenat);
							cout << " �����: " << chislit << "\\" <<znamenat << "\n����: " << result << endl;
					}
			};*/
		#pragma endregion

		#pragma region ������� 10
			/*class Ship{
				private:
					static int start;
					int id;
					int angle;
					char simbols;

				public:
					Ship():id(0),angle(0),simbols(0) {
						start++;
						id = start;
					}

					Ship(int angle, char simbols): angle(angle),simbols(simbols) {}

					void getShip() {
						cout << "������� ���������� ������� � " << id << " <��հ> � <N, S, E, W>" << endl;
						cin >> angle >> simbols;
					}

					void showShip() {
						cout << "����� �������: " << id << " ���������������: " << angle << "� " << "�������: " << simbols << endl;
					}
			};

			int Ship::start = 0;*/
		#pragma endregion

		#pragma region ������� 11
			//class fraction{
			//	private:
			//		float slog;
			//		float suslog_2;

			//	public:
			//		fraction(): slog(0), suslog_2(0){}

			//		void getFraction(int slog, int suslog_2){
			//			this->slog = slog;
			//			this->suslog_2 = suslog_2;
			//		}

			//		void fadd (fraction num_1 , fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "+" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.suslog_2 + num_1.suslog_2 * num_2.slog;
			//			suslog_2 = num_1.suslog_2*num_2.suslog_2;
			//		}

			//		void fsub (fraction num_1, fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "-" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.suslog_2 - num_1.suslog_2 * num_2.slog;
			//			suslog_2 = num_1.suslog_2*num_2.suslog_2;
			//		}

			//		void fmul(fraction num_1, fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "*" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.slog;
			//			suslog_2 = num_1.suslog_2 * num_2.suslog_2;
			//		}

			//		void fdiv(fraction num_1, fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "/" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.suslog_2;
			//			suslog_2 = num_1.suslog_2 * num_2.slog;
			//		}

			//		void showFraction() {
			//			cout << "�����: " << slog << "/" << suslog_2 << endl;
			//		}

			//		void  lowterms() {
			//			long tnum, tden, temp, gcd;
			//			tnum = labs(slog); // ���������� ��������������� 
			//			tden = labs(suslog_2);// �������� (����� cmath) 
			//				if (tden == 0) // �������� ����������� �� � 
			//				{
			//					cout << "������������ �����������!";
			//					system ("pause");
			//					exit(1);
			//				}
			//				else if (tnum == 0) // �������� ��������� �� � 
			//				{
			//					tnum = 0;
			//					tden = 1;
			//					return;
			//				}
			//			while (tnum != 0) // ���������� ����������� ������ �������� 
			//			{
			//				if (tnum < tden) // ���� ��������� ������ �����������. 
			//				{
			//					//������ �� �������
			//					temp = tnum; 
			//					tnum = tden;
			//					tden = temp;  
			//				}
			//				tnum = tnum - tden; // ��������� 
			//			}
			//			gcd = tden; // ����� ��������� � ����������� �� 
			//			slog = slog / gcd; // ���������� ���������� ����� �������� 
			//			suslog_2 = suslog_2 / gcd;
			//		}
			//};
		#pragma endregion

		#pragma region ������� 12
			/*int number;
			class Fraction{
				private:

				public:
					int numerator, denominator;
					
					Fraction() :numerator(0), denominator(0){}

					void mul_fr(Fraction f1, Fraction f2)
					{
						numerator = f1.numerator * f2.numerator;
						denominator = f1.denominator * f2.denominator;
					}
					void lowterms()
					{
						long tnum, tden, temp, gcd;
						tnum = labs(numerator);
						tden = labs(denominator);
					
						if (tden == 0)
						{
							cout << "������������ �����������!"; exit(1);
						}
						else if (tnum == 0)
						{
							numerator = 0; denominator = 1; return;
						}
						while (tnum != 0)
						{
							if (tnum < tden)
							{
								temp = tnum; tnum = tden; tden = temp;
							}
							tnum = tnum - tden;
						}
						gcd = tden;
						numerator = numerator / gcd;
						denominator = denominator / gcd;
					}
					void disp_fr()const
					{
						cout << setw(5) << numerator << "/" << denominator;
					}
				};*/
		#pragma endregion
	#pragma endregion

	#pragma region ����� 7
		#pragma region �������
			/*class Birds{
				private:
					string name;
					int value;
				public:
					Birds() :name(), value(0) {};
					Birds(string n, int v) :name(n), value(v) {};

					void getArray(string n, int v) {
						name = n;
						value = v;
					}

					void showArray() {
						cout << name << " " << value << endl;
					}
			};*/
		#pragma endregion

		#pragma region ������� 1
			/*void reversit(char s[])
			{
				int len = strlen(s);
				for (int j = 0; j < len / 2; j++)
				{
					char temp = s[j];
					s[j] = s[len - j - 1];
					s[len - j - 1] = temp;
				}
			}*/
		#pragma endregion

		#pragma region ������� 2
			/*class Employee{
				private:
					string name;
					long number;
				public:
					Employee():name(),number(0){}

					void getData() {
						cout << "Name employee: ";  cin.ignore(); getline(cin, name);;
						cout << "Namber employee: "; cin >> number;
						cout << endl;
					}

					void putData() {
						cout << "Name employee: " << name << " Namber employee:  " << number << endl;
					}
			};*/
		#pragma endregion

		#pragma region ������� 3
			/*class Distance{
				private:
					int feet;
					float inches;

					public:
						Distance(): feet(0),inches(0) {}
						Distance(int f,float i): feet(f),inches(i) {}

						void getDist() {
							cout << "\n ������� ����: "; cin >> feet;
							cout << "\n ������� �����: "; cin >> inches;
							inches += (feet * 12);
							feet = 0;
						}

						void showDist() {
							cout << "the average value of 100 = " << feet << "\'-" << inches;
						}

						float addDist() {
							return inches;
						}
						
						void divDist(float sm, int divisor) {
							int mean = sm / divisor;
							feet = mean / 12;
							inches = mean % (12);
						}
			};*/
		#pragma endregion

		#pragma region ������� 4
			/*int maxInt(int arrays[]){
				int value = 0;
				int index = 0;
				for (int i = 0; i < 5; i++)
				{
					if (value < arrays[i])
					{
						value = arrays[i];
						index = i;
					}
				}

				return index;
			}*/
		#pragma endregion

		#pragma region ������� 5
			/*class Fraction {
				private:
					int slog;
					int slog_2;
				public:
					Fraction() : slog(0), slog_2(0){}

					void getFraction() {
						char znak;
						cout << "������� �������� A/B: "; cin >> slog >> znak >> slog_2;
					}

					void sredZnach(Fraction fr2[], int Max) {

						for (int i = 0; i < Max-1; i++)
						{
							slog = fr2[i].slog*fr2[i + 1].slog_2 + fr2[i].slog_2*fr2[i + 1].slog;
							slog_2 = fr2[i].slog_2*fr2[i + 1].slog_2;
						}

						if (!(slog%Max))
						{
							slog /= Max;
							cout << "Average: " << slog << "/" << slog_2 << endl;
						}
						else
						{
							slog_2 *= Max;
							cout << "Average: " << slog << "/" << slog_2 << endl;
						}
					}
			};*/
		#pragma endregion

		#pragma region ������� 6
		/*	enum Suit{clubs,diamonds, hearts, spades};
			const int jack = 11;	
			const int queen = 12;	
			const int king = 13;	
			const int ace = 14;	

			class Card{
				private:
					int number;
					Suit suit;
				public:
					Card(){}

					void set(int n, Suit s) {
						suit = s; number = n;
					}

					void display() {
						if (number >= 2 && number <=10)
						{
							cout << number;
						}
						else
						{
							switch (number)
							{
								case jack: cout << "J"; break;
								case queen: cout << "Q"; break;
								case king: cout << "K"; break;
								case ace: cout << "A"; break;
							}
						}
						switch (suit)
						{
							case clubs: cout << static_cast<char>(5); break;
							case diamonds: cout << static_cast<char>(4); break;
							case hearts: cout << static_cast<char>(3); break;
							case spades: cout << static_cast<char>(6); break;
						}
					}
			};*/
		#pragma endregion

		#pragma region ������� 7
			/*class Money{
				private:
					long double value;

					public:
						Money() : value(0) {}

						long double msTold(char a[]) {
							int length = strlen(a);
							string num;
							for (int i = 0; i < length; i++)
							{
								if (a[i] != ',' && a[i] != '$')
									num.push_back(a[i]); ;
							}
							value = stold(num);
							return value;
						}
			};*/
		#pragma endregion

		#pragma region ������� 8
			/*class safeArray{
				private:
					int LIMIT[10];
				public:
					void putel(int index, int value) {
						int limit = sizeof(LIMIT) / sizeof(LIMIT[0]);
						if (index <= limit && index > -1)
						{
							LIMIT[index] = value;
						}
						else{
							cout << "�� ����� �� ������� �������" << endl;
						}						
					}

					void getel(int index) {
						cout << LIMIT[index] << endl;
					}
			};*/
		#pragma endregion

		#pragma region ������� 9
			/*class Queue{
				private:
					enum {MAX = 10};
					int st[MAX];
					int head,tail;
				public:
					Queue(): head(0), tail(0) {}
					void put (int var){
						st[tail++] = var;
						if (head > 0) head--;
					}
					int get() { 
						if (tail > 0) tail--;
						return st[head++]; 
					}
			};*/
		#pragma endregion

		#pragma region ������� 10
			//class safeArray{
			//	private:
			//		int LIMIT[10][10];
			//	public:
			//		int in, inn;
			//		safeArray(int a, int b): in(a),inn(b){}

			//		void putel(int index, int inndex, int value) {
			//			if (index <= in && index > -1){
			//				if (inndex <= inn && inndex > -1){
			//					LIMIT[index][inndex] = value;
			//				}
			//				else {
			//					cout << "�� ����� �� ������� �������" << endl;
			//					exit(1);
			//				}
			//			}
			//			else{
			//				cout << "�� ����� �� ������� �������" << endl;
			//				exit(1);
			//			}
			//		}

			//		void getel(int index, int inndex) {
			//			cout << LIMIT[index][inndex] << endl;
			//		}
			//};
		#pragma endregion

		#pragma region ������� 11
			//class Money{
			//	private:
			//		string strMon;
			//		string strMon1;
			//		long double summ;
			//	public:
			//		void ldtoms()
			//		{
			//			stringstream conv;
			//			conv << summ;
			//			conv >> strMon;
			//		}
			//		void getmoney()
			//		{
			//			cout << "Enter the amount" << endl;
			//			cin >> summ;
			//			if (summ > 9999999999999990.00)
			//			{
			//				cout << "\nError. Try Again";
			//				system("pause");
			//				exit(1);
			//			}
			//		}
			//		void strings()
			//		{
			//			string doll("$");
			//			strMon1 = strMon;
			//			strMon1 = doll + strMon1;
			//			int x = strMon1.find('.');
			//			strMon1.erase(x, 1);
			//			reverse(strMon1.begin(), strMon1.end());
			//			strMon1.insert(5, " ");
			//			strMon1.insert(8, " ");
			//			strMon1.insert(11, " ");
			//			strMon1.insert(14, " ");
			//			//strMon1.insert(17, " ");
			//			strMon1.insert(2, ".");
			//			reverse(strMon1.begin(), strMon1.end());
			//		}
			//		void display()const
			//		{
			//			cout << "\n" << strMon1 << endl;
			//		}
			//};
		#pragma endregion

		#pragma region ������� 12

		#pragma endregion
	#pragma endregion

	#pragma region ����� 8

		#pragma region ������� 1
			/*class Distance {
				private:
					int feet;
					float inches;
				public:
					Distance() : feet(0),inches(0.0){ }
					Distance(int ft, float in) : feet(ft),inches(in){ }

					void getdist(){
						cout << "\n������� ����: "; cin >> feet;
						cout << "������� �����: "; cin >> inches;
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
							cout << "������ � ��������";
							system("pause");
							exit(1);
						}
						return Distance (f, i );
					}
			};*/
		#pragma endregion

		#pragma region ������� 3
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

		#pragma region ������� 4
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

		#pragma region ������� 5 - 6 ��������� �� ��������� � ����������� ����������
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

		#pragma region ������� 7
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
			//			cout << "�����: " << slog << "/" << suslog_2 << endl;
			//		}

			//		void  lowterms() {
			//			long tnum, tden, temp, gcd;
			//			tnum = labs(slog); // ���������� ��������������� 
			//			tden = labs(suslog_2);// �������� (����� cmath) 
			//				if (tden == 0) // �������� ����������� �� � 
			//				{
			//					cout << "������������ �����������!";
			//					system ("pause");
			//					exit(1);
			//				}
			//				else if (tnum == 0) // �������� ��������� �� � 
			//				{
			//					tnum = 0;
			//					tden = 1;
			//					return;
			//				}
			//			while (tnum != 0) // ���������� ����������� ������ �������� 
			//			{
			//				if (tnum < tden) // ���� ��������� ������ �����������. 
			//				{
			//					//������ �� �������
			//					temp = tnum; 
			//					tnum = tden;
			//					tden = temp;  
			//				}
			//				tnum = tnum - tden; // ��������� 
			//			}
			//			gcd = tden; // ����� ��������� � ����������� �� 
			//			slog = slog / gcd; // ���������� ���������� ����� �������� 
			//			suslog_2 = suslog_2 / gcd;
			//		}
			//};
		#pragma endregion

	#pragma endregion

	#pragma region ����� 9
		#pragma region ������� 1 - 3 - 4 - 9
			/*class Sales{
				protected:
					enum {monts = 3};
					float totalBook[monts];
				public:
					void getData() {
						for (int i = 0; i < monts; i++)
						{
							cout << "������� ����� ������ �� " << i+1 << " �����: "; cin >> totalBook[i];
						}	
					}
					
					void putData() {
						for (int i = 0; i < monts; i++)
						{
							cout << "����� ������ �� " << i+1 << " �����: " << totalBook[i] << endl;
						}	
					}
			};

			class Publication{
					private:
						string str;
						float price;
					public:
						Publication() :str("N\A"), price(0.0) {}
						Publication(string str, float pr) :str(str), price(pr) {}
						
						void getData() {
							cout << "������� �������� ��� �����: "; cin >> str;
							cout << "������� ���� ��� �����: "; cin >> price;
						}
						
						void putData() {
							cout << "�������� �����: "<< str <<" "; 
							cout << "���� �����: " << price << endl;
						}
			};

			class Publication2 : public Publication {
				private:
					int day, mounth, year;
				public:
					void getData() {
						Publication::getData();
						cout << "������� ���� ������ ����� {xx xx xxxx}: "; 
						cin >> day >> mounth >> year;
					}

					void putData() {
						Publication::putData();
						cout << "���� ������ ����� " << day << " " << mounth << " " << year << endl;
					}
			};

			class Book : public Publication2, public Sales {
				private:
					int page;
				public:
					Book() :page(0) {}

					void getData() {
						Publication2::getData();
						cout << "������� ���-�� ������� ��� �����: "; cin >> page;
						Sales::getData();
					}

					void putData() {
						Publication2::putData();
						cout << "������� � �����: " << page << endl;
						Sales::putData();
					}
			};
				
			class Type : public Publication2, public Sales {
				private:
					float timeBook;
				public:
					Type() :timeBook(0.0) {}

					void getData() {
						Publication2::getData();
						cout << "������� ����� ������ ��� �����: "; cin >> timeBook;
						Sales::getData();
					}

					void putData() {
						Publication2::putData();
						cout << "����� ������ �����: " << timeBook << endl;
						Sales::putData();
					}
			};*/

			/*class Disk : Publication {
				private:
					enum Type { CD, DVD };
					char eType;
				public:
					void getData() {
						Publication::getData();
						cout << "�������� ��� ����� CD (c) \ DVD (d): "; cin >> eType;
					}
					
					void putData() {
						Publication::putData();
						int temp;
						switch (eType){
							case 'c': temp = 0; break;
							case 'd': temp = 1; break;
							default: break;
						}
						
						switch (temp){
							case 0: cout << "��� ����� "<<"CD"; break;
							case 1: cout << "��� ����� " << "DVD"; break;
							default: break;
						}
					}
			};*/
		#pragma endregion

		#pragma region ������� 2 (ok) - 8 (�� ������)
			/*class String{
				protected:
					enum { SZ = 80 };
					char str[SZ];
				public:
					String(){
						str[0] == '\x0';
					}
					String(char s[]){
						SetStr(s);
					}

					void SetStr(char *s) {
						strcpy_s(str, SZ, s);
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
								str[i] = s[i];
								str[SZ-1] = '\0';
							}
						}
						else
						{
							SetStr(s);
						}
					}
			};*/
		#pragma endregion

		#pragma region ������� 5 - 10
			/*const int LEN=80;
			class Employee{
				private:
					char name[LEN];
					unsigned long number;
				public:
					void getData() {
						cout << "������� �������: "; cin >> name;
						cout << "������� �����: "; cin >> number;
					}
					
					void putData() {
						cout << "�������: " << name;
						cout << " �����: " << number << endl;
					}
			};

			class Employee2 : public Employee {
				private:
					double compenstation;
					enum eType{ hourly, weekly, monthly};
					eType period;
				public:
					void getData() {
						Employee::getData();
						char type;
						cout << "������� ��������: "; cin >> compenstation;
						cout << "������� ������ ���������� �� ��������� (h), ����������� (w), ���������� (m): "; cin >> type;

						switch (type)
						  {
						   case 'h':
							period = hourly; break;
						   case 'w':
							period = weekly; break;
						   case 'm':
							period = monthly; break;
						  }
					}

					void putData() {
						int temp;
						Employee::putData();
						cout << "�\\�: " << compenstation;
						
						switch (period)
						{
							case hourly:
								cout << " ��������"; break;
							case weekly:
								cout <<  " ����������"; break;
							case monthly:
								cout <<  " ���������"; break;
						}
					}
			};

			class Laborer :public Employee2 {

			public:
				void getData() {
					Employee2::getData();
				}

				void putData() {
					Employee2::putData();
				}
			};
			
			class Laborer2 :public Laborer {
				private:
					float yearPrice;
					int age;
				public:
					void getData() {
						Laborer::getData();
						cout << "������� ������� ��: "; cin >> yearPrice;
						cout << "������� �������: "; cin >> age;
					}
					
					void putData() {
						Laborer::putData();
						cout << "������� ��: " << yearPrice;
						cout << " �������: " << age << endl;
					}
			};*/
		#pragma endregion

		#pragma region ������� 6 �� ������
			/*const int LIMIT = 100;

			class Array {
				private:
					int startIndex;
					int endIndex;
				public:
					Array(int s, int e) : startIndex(s), endIndex(e) {}
			};

			class Safearray : public Array {
				private:
					int arr[LIMIT];
				public:
					 
					int& operator[](int n) {
						if (n < 0 || n >= LIMIT) {
							cout << "\n��������� ������!"; exit(1);
						}
						return arr[n];
					}
			};*/
		#pragma endregion

		#pragma region ������� 7
			/*class Counter{
				protected:
					unsigned int count;
				public:
				Counter() : count() { }
				Counter(int �) : count(�) { }
				unsigned int get_count() const {
					return count;
				}
				Counter operator++ () {
					return Counter(++count);
				}
				
				Counter operator++ (int) {
					return Counter(count++);
				}
			};

			class CountDn : public Counter
			{
				public:
					CountDn() : Counter() { }
					CountDn(int �) : Counter(�) { }
					CountDn operator-- ( ){
						return CountDn(--count); 
					}
					CountDn operator-- (int){
						return CountDn(count--);
					}
			};*/
		#pragma endregion

		#pragma region ������� 11 �� �������
			/*class Stack {
				protected:
					enum { MAX = 3 };
					int st[MAX];
					int top;
				public:
					Stack() { 
						top = -1; 
					}
					void push(int var) {
						st[++top] = var;
					}
					int pop() {
						return st[top--];
					}
			};

			class Stack2 : public Stack {
				public:
					void push(int var) {
						if (top >= MAX - 1) {
							cout << "\n������: ���� �����"; exit(1);
						}
						Stack::push(var);
					}

					int pop() {
						if (top < 0) {
							cout << "\n������: ���� ����\n"; exit(1);
						}
						return Stack::pop();
					}
			};

			class PairStack : public Stack2 {
				public:
					void push(int var, int var2) {
						Stack2::push(var);
						Stack2::push(var2);
					}

					int pop() {
						return Stack2::pop();
					}
			};*/
		#pragma endregion
	#pragma endregion


int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region ����� 2

		#pragma region ������� 1
			/*const float futGalon = 7.481f;
			int galon;
			float value;
			cout << "������� ���������� �������" << endl;
			cin >> galon;
			value = futGalon * galon;
			cout << "���-�� �������� = " << galon << " ����� � ���������� ����� = " << value << endl;*/
		#pragma endregion

		#pragma region ������� 2	
			/*cout << 1990 << setw(9) << 135 << "\n" <<
			1991 << setw(9) << 7290 << "\n" <<
			1992 << setw(9) << 11300 << "\n" <<
			1993 << setw(9) << 16200 << endl;*/
		#pragma endregion

		#pragma region ������� 3
			/*const int constValue = 10;
			int value = constValue + 10;
			int dicrementValue = value;
			cout <<constValue <<"\n"<< value << "\n" << --dicrementValue << endl;*/
		#pragma endregion

		#pragma region ������� 4
			/*cout << "�����!!!!" << "\n"
			<< "�� ���� � ���� ���� � ����" << "\n"
			<< "����� � ��� ���� � ����" << endl;*/
		#pragma endregion

		#pragma region ������� 5
			/*	cout << "������� �����" << endl;
			char simbol;
			cin >> simbol;
			cout << "���� �� ����� ��������� �� ������� 0, � ���� �������� ���� �����"<< endl
			<< "����� = "
			<< islower(simbol) << endl;*/
		#pragma endregion

		#pragma region ������� 6
			/*int funt;
			const float dollar = 1.487f;
			const float frank = 0.172f;
			const float marka = 0.584f;
			const float iena = 0.009955f;
			cout << "������� ���-�� ������: ";
			cin >> funt;
			cout <<"���� �� ����� �� ���� \n"
			<< "����� "<< setw(18) << funt * dollar << endl
			<< "����� "<< setw(18) << funt * frank << endl
			<< "�������� ����� "<< setw(9) << funt * marka << endl
			<< "���� "<< setw(22) <<  funt * iena << endl;*/
		#pragma endregion

		#pragma region ������� 7
			/*	float gradus;
			float foringete;
			cout << "������� ����������� � ��������: ";
			cin >> gradus;
			foringete = (gradus * 1.8) + 32;
			cout <<"����������� � ����������� " <<foringete << endl;*/
		#pragma endregion

		#pragma region ������� 8
			//char dot = '.';
			//cout << setfill(dot) << 
			//1990 << setw(9) << 135 << "\n" <<
			//1991 << setw(9) << 7290 << "\n" <<
			//1992 << setw(9) << 11300 << "\n" <<
			//1993 << setw(9) << 16200 << endl;
		#pragma endregion

		#pragma region ������� 9 �� ����������
			/*int oneDrob;
			int twoDrob;

			int threeDrob;
			int fourDrob;
			int value;

			cout << "������� ������ �����  ";
			cin >> oneDrob;
			cout << " / ";
			cin >> twoDrob;

			cout << "������� ������ �����  ";
			cin >> threeDrob;
			cout << " / ";
			cin >> fourDrob;

			value = ((oneDrob * fourDrob) + (twoDrob * threeDrob)) / (twoDrob*fourDrob);
			cout << "����� ����� " << value << endl;*/
		#pragma endregion

		#pragma region ������� 10
			/*int funt;
			int shiling;
			int pens;

			cout << "������� ���-�� ������: ";
			cin >> funt;

			cout << "������� ���-�� ���������: ";
			cin >> shiling;

			cout << "������� ���-�� ������: ";
			cin >> pens;*/
		#pragma endregion

	#pragma endregion

	#pragma region ����� 3
		#pragma region ������� ��������� �����
			/*char game ='n';

			do
			{
			int user = 0;

			cout << "������� :\n 1.���� for \n 2.���� while \n 3.���� Do while " << endl;
			cin >> user;

			if ((!cin) || user == 1 || user == 2 || user == 3)
			{
			if (user == 1) {
			cout << "���� for ����� �������� ����� �� 100 - 110" << endl;
			for (int i = 100; i <= 110; i++)
			{
			cout << i << endl;
			}
			}
			else if (user == 2) {
			cout << "���� while ����� �������� ����� �� 100 - 110" << endl;
			int i = 100;
			while (i <= 110)
			{
			cout << i++ << endl;
			}
			}
			else if (user == 3) {
			cout << "���� Do while ����� �������� ����� �� 100 - 110" << endl;
			int i = 100;
			do
			{
			cout << i++ << endl;
			} while (i <= 110);
			}
			}
			else
			{
			cout << "�� ��������, ���������� ��� ���!" << endl;
			continue;
			}

			cout << "������ ��������� ? y/n:  ";
			cin >> game;
			} while (game != 'n');*/
		#pragma endregion

		#pragma region ������� 1
			/*int n;
			cout << "������� ��������: " << endl;
			cin >> n;
			for (int i = 1; i <= 100; i++) {
			cout << n * i<<' ';
			if (i % 10==0)
			cout << endl;
			}*/
		#pragma endregion

		#pragma region ������� 2
			/*int n;
			cout << "������� ��������: " << endl;
			cin >> n;
			for (int i = 1; i <= 100; i++) {
			cout << n * i<<' ';
			if (i % 10==0)
			cout << endl;
			}*/
		#pragma endregion

		#pragma region ������� 2
			/*char tryAgain;

			do
			{
			cout << "������� 1 ���  �������� ����� ������� � ����� ���������� \n"
			<< "������� 2 ��� �������� ����� ���������� � ����� �������" << endl;

			int simb;
			cin >> simb;

			if (simb / 1) {
			if (simb == 1) {
			cout << "������� ������� � �������: "<< endl;
			double celsia;
			cin >> celsia;
			celsia = (celsia *1.8)+32;
			cout << "������� � �����������: "<< celsia << endl;
			}
			else if (simb == 2) {
			cout << "������� ������� � �����������: " << endl;
			double faring;
			cin >> faring;
			faring = (faring - 32)* 0.5555555555555556;
			cout << "������� � ��������: " << faring << endl;
			}

			cout << "������ ������������? y/n: ";
			cin >> tryAgain;

			if (tryAgain == 'y'){
			tryAgain = 'y';
			}
			else if(tryAgain == 'n'){
			tryAgain = 'n';
			}
			}
			else {
			cout << "�� ��������!" << endl;
			continue;
			}

			} while (tryAgain !='n');*/
		#pragma endregion

		#pragma region ������� 3 �� ����������
			/*	cout << "������� �����: ";
			char num;
			unsigned long total = 0;
			while ((num = _getche()) != '\r')
			total = total * 10 + (num - '48');
			cout << "������ ������������: " << total << endl;*/
		#pragma endregion

		#pragma region ������� 4
			/*char tryAgain;
			do
			{
			cout << "������� (������ ������� - ���� - ������ �������): " << endl;
			int num_1;
			int num_2;
			int result;
			char simb;
			cin >> num_1>>simb>> num_2;

			switch (simb)
			{
			case '+': result = num_1 + num_2;
			break;
			case '-': result = num_1 - num_2;
			break;
			case '/': result = num_1 / num_2;
			break;
			case '*': result = num_1 * num_2;
			break;
			}

			cout << "���������: " << result << endl;

			cout << "������ ������������? y/n: ";
			cin >> tryAgain;

			if (tryAgain == 'y') {
			tryAgain = 'y';
			}
			else if (tryAgain == 'n') {
			tryAgain = 'n';
			}

			} while (tryAgain != 'n');*/

		#pragma endregion

		#pragma region ������� 5
			/*int size = 19;
			for (int i = 1; i < 20; i += 2)
			{
			cout << setw(size);
			for (int j = 0; j < i; j++)
			{
			cout <<'x';
			}
			cout << setw(size--) << endl;
			}*/
		#pragma endregion

		#pragma region ������� 6
			/*unsigned int numb;

			do
			{
			unsigned long fact = 1;
			cout << "������� �����: ";
			cin >> numb;

			for (int j = numb; j > 0; j--)
			fact *= j;
			cout << fact << endl;
			} while (numb != 0);*/

		#pragma endregion

		#pragma region ������� 7
			/*float vklad;
			float age;
			float stavka;

			cout << "������� �������������� �����: ";
			cin >> vklad;
			cout << "������� ���������� ���: ";
			cin >> age;
			cout << "������� ���������� ������: ";
			cin >> stavka;

			for (int i = 0; i < age; i++)
			{
			vklad = vklad + (vklad*(stavka/100.00));
			}
			cout << "����: " << vklad<<endl;*/
		#pragma endregion

			//������� ��� ������� �������� � �� �����

		#pragma region ������� 9
			//unsigned int mest = 4;
			//int frends;
			//int result=1;
			////int result2=0;
			//cout << "������� ���-�� ������:";
			//cin >> frends;

			//for (; mest >= 1; mest--)
			//{	
			//	result *= frends;
			//	//result2 *= result;
			//	frends--;
			//}
			//cout << "Itog " << result << endl;
		#pragma endregion

		#pragma region ������� 10
			/*float vklad;
			float sum;
			int age=0;
			float stavka;

			cout << "������� �������������� �����: ";
			cin >> vklad;
			cout << "������� �������� �����: ";
			cin >> sum;
			cout << "������� ���������� ������: ";
			cin >> stavka;

			while (sum >= vklad)
			{
			vklad = vklad + (vklad*(stavka / 100.00));
			age++;
			}
			cout << "����� ���: " << age <<endl;*/
		#pragma endregion

			//������� 11 � ����� ���� ������� �������

		#pragma region ������� 12
			/*float num_1;
			float num_2;
			char znak;
			char tryAgain;
			float num_3;
			float num_4;
			float result;

			do
			{
			cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			cin >> num_1 >> znak >> num_2;
			cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			cin >> num_3 >> znak >> num_4;

			cout << "������� ���� (+ - * /): ";
			cin >> znak;

			switch (znak)
			{
			case'+': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_4 + num_2 * num_3) / (num_2*num_4);
			cout << " �����: " << result << endl;
			} break;

			case'-': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_4 - num_2 * num_3) / (num_2*num_4);
			cout << " �����: " << result << endl;;
			}break;

			case'*': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_3) / (num_2 * num_4);
			cout << " �����: " << result << endl;;
			}break;
			case'/': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_4) / (num_2 * num_3);
			cout << " �����: " << result << endl;;
			}break;

			default: cout << "�� ����� �� ��� ������!";
			break;
			}

			cout << "������ ����������� ��� ���? y/n: ";
			cin >> tryAgain;
			} while (tryAgain != 'n');*/
		#pragma endregion

	#pragma endregion

	#pragma region ����� 4
		#pragma region �������
			/*struct Time
			{
			int hrs;
			int mins;
			int secs;
			};

			Time myTime;
			myTime.hrs = 11;
			myTime.mins = 10;
			myTime.secs = 59;
			cout << myTime.hrs << " " << myTime.mins << " " << myTime.secs;;*/

			/*enum Players	{B1,B2,SS,B3,RF,CF,LF,P,C};

			Players joe = LF;
			Players tom = P;*/

			/*enum Speeds {absolete = 78,single = 45,album = 33};*/
		#pragma endregion

		#pragma region ������� 1
			/*struct Phone
			{
			int code;
			int nomerStation;
			int nomerAbanenta;
			};

			Phone phone = { 980,540,1564 };

			Phone myPhone;
			cin >> myPhone.code >> myPhone.nomerStation >> myPhone.nomerAbanenta;

			cout << "(" << phone.code << ")" << "-" << phone.nomerStation << "-" << phone.nomerAbanenta << endl;
			cout << "(" << myPhone.code << ")" << "-" << myPhone.nomerStation << "-" << myPhone.nomerAbanenta << endl;*/
		#pragma endregion

		#pragma region ������� 2
			/*struct Point
			{
			int x;
			int y;
			};

			Point p1;
			cout << "������� �������� ��� ����� � � Y:  ";
			cin >> p1.x >> p1.y;

			Point p2;
			cout << "������� �������� ��� ����� � � Y:  ";
			cin >> p2.x >> p2.y;

			Point p3;
			p3.x = p1.x + p2.x;
			p3.y = p1.y + p2.y;

			cout << "p3 = " << p3.x << " " << p3.y << endl;*/
		#pragma endregion

		#pragma region ������� 3 � ����� ����� ����
			/*struct Volume
			{
			int feat;
			float inches;

			};*/
		#pragma endregion

		#pragma region ������� 4
			/*struct Emploe
			{
			int id;
			float zarplata;
			};

			Emploe emploe1;
			Emploe emploe2;
			Emploe emploe3;
			cout << "������� ����� � �� ������� ����������: "; cin >> emploe1.id >> emploe1.zarplata;
			cout << "������� ����� � �� ������� ����������: "; cin >> emploe2.id >> emploe2.zarplata;
			cout << "������� ����� � �� �������� ����������: "; cin >> emploe3.id >> emploe3.zarplata;

			cout << emploe1.id << " " << emploe1.zarplata << endl;
			cout << emploe2.id << " " << emploe2.zarplata << endl;
			cout << emploe3.id << " " << emploe3.zarplata << endl;*/
		#pragma endregion

		#pragma region ������� 5
			/*struct Data
			{
			int date;
			int month;
			int year;
			};
			cout << "������� ���� � ������� ��/��/��: ";
			Data data;
			cin >> data.date >> data.month >> data.year;

			cout << data.date << "/" << data.month << "/" << data.year << endl;*/

		#pragma endregion

		#pragma region ������� 6
			/*enum eType {laborer,secretary,manager,accountant,executive,resercher};
			eType etype;
			char simb;
			cout << "������� ������ ����� ���������: \n" << "(laborer,secretary,manager,accountant,executive,resercher)" << endl;
			cin >> simb;

			switch (simb)
			{
			case 'l': etype = laborer; break;
			case 's': etype = secretary; break;
			case 'm': etype = manager; break;
			case 'a': etype = accountant; break;
			case 'e': etype = executive; break;
			case 'r': etype = resercher; break;
			}
			switch (etype)
			{
			case 0: cout << "laborer"; break;
			case 1: cout << "secretary"; break;
			case 2: cout << "manager"; break;
			case 3: cout << "accountant"; break;
			case 4: cout << "executive"; break;
			case 5: cout << "resercher"; break;
			}*/
		#pragma endregion

		#pragma region ������� 7
			/*struct Emploe
			{
			enum eType { laborer, secretary, manager, accountant, executive, resercher };

			int id;
			float zarplata;

			int date;
			int month;
			int year;
			};

			Emploe emploe1;
			int type;
			char simb;
			cout << "������� ������ ����� ���������: \n" << "(laborer,secretary,manager,accountant,executive,resercher)" << endl;
			cin >> simb;

			switch (simb)
			{
			case 'l': type = emploe1.laborer; break;
			case 's': type = emploe1.secretary; break;
			case 'm': type = emploe1.manager; break;
			case 'a': type = emploe1.accountant; break;
			case 'e': type = emploe1.executive; break;
			case 'r': type = emploe1.resercher; break;
			}

			Emploe emploe2;
			cout << "\n������� ����� � �� ����������: "; cin >> emploe2.id >> emploe2.zarplata;

			Emploe emploe3;
			cout << "������� ���� �������� �� ������ � ������� ��/��/�� : "; cin >> emploe3.date >> emploe3.month >> emploe3.year;

			switch (type)
			{
			case 0: cout << "laborer"; break;
			case 1: cout << "secretary"; break;
			case 2: cout << "manager"; break;
			case 3: cout << "accountant"; break;
			case 4: cout << "executive"; break;
			case 5: cout << "resercher"; break;
			}

			cout << " " << emploe2.id << " " << emploe2.zarplata << " " << emploe3.date << "/" << emploe3.month << "/" << emploe3.year << endl;
			*/
		#pragma endregion

		#pragma region ������� 8
			//struct Fraction
			//{
			//	float num_1;
			//	float num_2;
			//};
			//
			//char znak;
			//char tryAgain;
			//float result;

			//Fraction f1;
			//Fraction f2;

			//do
			//{
			//	cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			//	cin >> f1.num_1 >> znak >> f1.num_2;
			//	cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			//	cin >> f2.num_1 >> znak >> f2.num_2;

			//	cout << "������� ���� (+ - * /): ";
			//	cin >> znak;

			//	switch (znak)
			//	{
			//		case'+': {
			//			cout << f1.num_1 << "/" << f1.num_2 << znak << f2.num_1 << "/" << f2.num_2 << " ";
			//			result = (f1.num_1*f2.num_2 + f1.num_2 * f2.num_1) / (f1.num_2*f2.num_2);
			//			cout << " �����: " << result << endl;
			//		} break;

			//		/*case'-': {
			//			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			//			result = (num_1*num_4 - num_2 * num_3) / (num_2*num_4);
			//			cout << " �����: " << result << endl;;
			//		}break;

			//		case'*': {
			//			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			//			result = (num_1*num_3) / (num_2 * num_4);
			//			cout << " �����: " << result << endl;;
			//		}break;
			//		case'/': {
			//			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			//			result = (num_1*num_4) / (num_2 * num_3);
			//			cout << " �����: " << result << endl;;
			//		}break;

			//		default: cout << "�� ����� �� ��� ������!";
			//		break;*/
			//	}

			//	cout << "������ ����������� ��� ���? y/n: ";
			//	cin >> tryAgain;
			//} while (tryAgain != 'n');
		#pragma endregion

		#pragma region ������� 9
			/*struct Time
			{
			int hours;
			int minutes;
			int seconds;
			};

			Time t1;
			cout << "������� ����� � ������� ��/��/��: ";
			cin >> t1.hours >> t1.minutes >> t1.seconds;
			cout << "������� ��� � ��������� ������� " << t1.hours * 3500 + t1.minutes * 60 + t1.seconds<<endl;*/
		#pragma endregion

		#pragma region ������� 11
			/*struct Time
			{
			int hours;
			int minutes;
			int seconds;
			int value;
			};

			Time t1;
			cout << "������� ����� � ������� ��/��/��: ";
			cin >> t1.hours >> t1.minutes >> t1.seconds;
			t1.value = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
			cout << "������� ��� � ��������� ������� " << t1.value << endl;

			t1.hours = t1.value / 3600 ^ 0;
			t1.minutes = (t1.value - t1.hours * 3600) / 60 ^ 0;
			t1.seconds = t1.value - t1.hours * 3600 - t1.minutes * 60;

			cout << "�������: " << t1.hours << " " << t1.minutes << " " << t1.seconds << endl;*/
		#pragma endregion
	#pragma endregion

	#pragma region ����� 5
		#pragma region �������
			//foo();

			/*int b = 0;
			b = times(2);
			cout <<b<<endl;*/
			
			/*float b = 10.0f;
			footbar(b);
			cout << b << endl;*/

			/*int a = 1;
			float b = 3.14159f;
			byth(a, b);
			cout << byth << endl;*/
		#pragma endregion

		#pragma region ������� 1
			/*float rad = 0;
			cout << "������� ������" << endl;
			cin >> rad;
			float area = 0;
			area = circArea(rad);
			cout << rad << endl;*/
		#pragma endregion

		#pragma region ������� 2
			/*int p = 2;
			double n = 0;

			cout << "������� �������� � �������:" << endl;
			cin >> n >> p;

			if (p <= 0) {
				cout << "�� �� ������� �������� ��� �������, �� ��������� ���������� 2: " << endl;
				p = 2;
			}

			double sum = power(n, p);

			cout << sum << endl;*/
		#pragma endregion

		#pragma region ������� 3
			/*int a, b;
			cout << "������� �������� ���������� a and b" << endl;
			cin >> a >> b;
			zeroSmaller(a, b);
			cout << "a = " << a << "\nb = " << b << endl;*/
		#pragma endregion

		#pragma region ������� 4
			/*cout << "������� �������� ��� d1" << endl;
			Distance di1, di2,di3;
			cin >> di1.a >> di1.b;

			cout << "������� �������� ��� d2" << endl;
			cin >> di2.a >> di2.b;
			di3 = func(di1, di2);
			endDisp(di3);*/
		#pragma endregion

		#pragma region ������� 5
			/*bool repeat = true;
			do
			{
				int h = 0;
				int m = 0;
				int s = 0;
				long rezult = 0;
				cout << "������� ���� - ������ - �������" << endl;
				cin >> h >> m >> s;
				if (h!=0 || m!=0 || s!=0) {
					rezult = hms_to_secs(h, m, s);
					cout << "������ = " << rezult << endl;
				}
				else { repeat = false; }

			} while (repeat);*/
		#pragma endregion

		#pragma region ������� 6
			/*bool repeat = true;
			do
			{
				Time time, secTime;
				time.hours = 0;
				time.minutes = 0;
				time.seconds = 0;
				long rezult = 0;
				cout << "������� ���� - ������ - �������" << endl;
				cin >> time.hours >> time.minutes >> time.seconds;
				if (time.hours != 0 || time.minutes != 0 || time.seconds != 0) {
				rezult = time_to_sec(time);
				cout << "������ = " << rezult << endl;
	
				secTime = secs_to_time(rezult);

				endDipl(secTime);
			}
			else { repeat = false; }

			} while (repeat);*/
		#pragma endregion

		#pragma region ������� 7
			/*int p = 2;
			double n = 0;

			cout << "������� �������� � �������:" << endl;
			cin >> n >> p;

			if (p <= 0) {
				cout << "�� �� ������� �������� ��� �������, �� ��������� ���������� 2: " << endl;
				p = 2;
			}

			double sum = power(n, p);

			cout << sum << endl;
			
			char c = 2;
			long l = 0;

			cout << "������� �������� � �������:" << endl;
			cin >> l >> c;

			if (c <= 0) {
				cout << "�� �� ������� �������� ��� �������, �� ��������� ���������� 2: " << endl;
				c = 2;
			}

			long sum2 = power(l, c);

			cout << sum << endl;
			
			int c2 = 2;
			float f = 0;

			cout << "������� �������� � �������:" << endl;
			cin >> f >> c2;

			if (c2 <= 0) {
				cout << "�� �� ������� �������� ��� �������, �� ��������� ���������� 2: " << endl;
				c2 = 2;
			}

			long sum3 = power(f,c2);

			cout << sum3 << endl;*/
		#pragma endregion

		#pragma region ������� 8
			/*int a = 30;
			int b = 40;
			swop(a, b);
			cout << "�������� � ������� ���� = " << "a =" << a << " " << "b = " << b << endl;*/
		#pragma endregion

		#pragma region ������� 9
			/*Time time1, time2;
			cout << "������� �������� h,m,s" << endl;
			cin >> time1.hours >> time1.minutes >> time1.seconds;
			cout << "������� �������� h,m,s ��� ����2" << endl;
			cin >> time2.hours >> time2.minutes >> time2.seconds;
			swap(time1, time2);

			cout << "���� 1" << " " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
			cout << "���� 2" << " " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;*/
		#pragma endregion

		#pragma region ������� 10
			/*for (int i = 1; i <= 10; i++)
			{
				funk();
			}*/
		#pragma endregion

		#pragma region ������� 11 �� ������
			
		#pragma endregion

		#pragma region ������� 12
			/*fraction fr1, fr2, fr3;
			cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			cin >> fr1.slog >> fr1.suslog_2;
			cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			cin >> fr2.slog >> fr2.suslog_2;

			fr3 = fadd(fr1, fr2);
			cout << " �����: " << fr3.result  << endl;

			fr3 = fsub(fr1, fr2);
			cout << " �����: " << fr3.result  << endl;

			fr3 = fmul(fr1, fr2);
			cout << " �����: " << fr3.result  << endl;

			fr3 = fdiv(fr1, fr2);
			cout << " �����: " << fr3.result  << endl;*/
		#pragma endregion

	#pragma endregion

	#pragma region ����� 6
		#pragma region �������
			/*Leverage lever;
			int a = 1;
			a = lever.getcrow();
			cout << a;*/
		#pragma endregion
	
		#pragma region ������� 1
			/*Int Int1(3);
			Int Int2(12);
			Int Int3;
			Int3.add(Int1, Int2);
			Int3.display();*/
		#pragma endregion
	
		#pragma region ������� 2
			/*char ch;
			const char ESC = 27;
			toolBoth Tool;
			
			do
			{
				cout << "������� �����, 1 - ���� ������ � ������ �� ������" << endl;
				cout << "������� �����, 2 - ���� ������" << endl;
				cout << "������� ESC ��� ������" << endl;

				cout << endl;

				ch = _getche();

				cout << endl;

				if (ch == '1')
				{
					Tool.paingCar();
				}
				else if (ch == '2')
				{
					Tool.nonCar();
				}
			} while (ch != ESC);

			Tool.display();*/
		#pragma endregion
	
		#pragma region ������� 3
			/*Time time1(2,55,30);
			Time time2(15, 40, 41);
				
			time1.display();
			time2.display();

			Time t3;
			t3.timeSum(time1, time2);
			t3.display();*/
		#pragma endregion
	
		#pragma region ������� 4
			/*Emploee emp1, emp2;				
			int id;
			float zp;
			cout << "������� ����� � �� ���������: ";
			cin >> id >> zp;
			emp1.getPersonal(id,zp);

			cout << "������� ����� � �� ���������: ";
			
			cin >> id >> zp;
			emp2.getPersonal(id,zp);
	
			emp1.showPersonal();
			emp2.showPersonal();*/
		#pragma endregion
	
		#pragma region ������� 5
			/*date d1;
			int m, d, y;
			cin >> d >> m >> y;
			d1.getDate(d, m, y);
			d1.showData();*/
		#pragma endregion
	
		#pragma region ������� 6
			/*Employee Emp1, Emp2;
			Emp1.get_empl();
			Emp2.get_empl();
			Emp1.put_empl();
			Emp2.put_empl();*/
		#pragma endregion
	
		#pragma region ������� 7
			/*Angle angle1(135, 34.5f, 'S');
			Angle angle2;
			char tryAgain;
			do
			{
				int angl;
				float minut;
				char simb;
				cout << "������� �������: ";
				cin >> angl;
				cout << "������ (��.�): ";
				cin >> minut;
				cout << "����������� (N,S,E,W): ";
				cin >> simb;

				angle2.getAngle(angl, minut, simb);
				angle2.showAngle();

				cout << "Try again? y/n: " << endl;
				cin >> tryAgain;
			} while (tryAgain != 'n');*/
			
		#pragma endregion
	
		#pragma region ������� 8
			/*myObject myobj1, myobj2, myobj3;
			cout<<"��� ���������� �����: "<<myobj1.getid()<< endl;
			cout<<"��� ���������� �����: "<<myobj2.getid()<< endl;
			cout<<"��� ���������� �����: "<<myobj3.getid()<< endl;*/
		#pragma endregion
	
		#pragma region ������� 9
			/*Fraction f1, f2, f3;
			char tryAgain;
			do
			{
				int chislit, znamenat;
				char znak;
				cout << "������� ������ ����� X/X" << endl;
				cin >> chislit >> znak >> znamenat;
				f1.getValue(chislit, znamenat);
					
				cout << "������� ������ ����� X/X" << endl;
				cin >> chislit >> znak >> znamenat;
				f2.getValue(chislit, znamenat);

				f3.getPlus(f1, f2);

				cout << "Try Again? y/n " << endl;
				cin >> tryAgain;
			} while (tryAgain != 'n');*/

			
		#pragma endregion
	
		#pragma region ������� 10
			/*Ship ship1, ship2, ship3;
			
			ship1.getShip();
			ship2.getShip();
			ship3.getShip();

			ship1.showShip();
			ship2.showShip();
			ship3.showShip();*/
		#pragma endregion
	
		#pragma region ������� 11
			//fraction fr1, fr2, fr_sum;
			//int slog, suslog_2;
			//char znak, drob;
			//cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			//cin >> slog >>drob>> suslog_2;
			//fr1.getFraction(slog, suslog_2);

			//cout << "������� ����: <+ - * />" << endl;
			//cin >> znak;

			//cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			//cin >> slog >> drob >> suslog_2;
			//fr2.getFraction(slog, suslog_2);

			//switch (znak)
			//{
			//case '+': fr_sum.fadd(fr1, fr2); break;
			//case '-': fr_sum.fsub(fr1, fr2); break;
			//case '*': fr_sum.fmul(fr1, fr2); break;
			//case '/': fr_sum.fdiv(fr1, fr2); break;
			//}
			////����� �� �����
			//{
			//	fr_sum.showFraction();
			//	fr_sum.lowterms();
			//}
		#pragma endregion
	
		#pragma region ������� 12
			/*Fraction fr1, fr2, fr3;
			fr1.denominator = fr2.denominator = number;
			cout << "������� �����������: " << endl; 
			cin >> number;

			for (int j = 1; j<number; j++)
			{
				fr1.numerator = j;
				fr1.denominator = number;
				fr1.lowterms();
				fr1.disp_fr();
			}
			cout << endl;
			for (int i = 1; i < number; i++)
			{
				fr2.numerator = i;
				fr2.denominator = number;
				fr2.lowterms();
				fr2.disp_fr();

				for (int j = 1; j < number; j++)
				{
					fr1.numerator = j;
					fr1.denominator = number;
					fr3.mul_fr(fr1, fr2);
					fr3.lowterms();
					fr3.disp_fr();
				}
				cout << endl;
			}*/
		#pragma endregion
	#pragma endregion

	#pragma region ����� 7
		#pragma region �������
			/*double doubleArray[5]{12,15,18,16,55};

			for (int i = 0; i < 5; i++) {
				cout << doubleArray[i] << endl;
			}*/

			/*int twoD[2][4]{
				11, 12, 13, 14,
				21, 22, 23, 24
			};

			cout << twoD[1][3] << endl;*/

			/*string word[4];
			for (int i = 0; i < 4; i++)
			{
				word[i] = "������ ";
				cout << word[i] << endl;
			}*/


		/*	struct Employee{
				int id;
				float salary;
			};

			Employee employee[17];

			employee[16].id = 17;
			employee[16].salary = 350.0;
			cout << employee[16].id << " " <<employee[16].salary << endl;*/

			/*Birds birds[50];

			birds[20].getArray("������", 021);
			birds[20].showArray();*/
		#pragma endregion
		
		#pragma region ������� 1
			/*const int MAX = 80;
			char str[MAX];
			cout << "\nEnter string: ";
			cin.get(str, MAX);
			reversit(str);
			cout << "inverted string: " << str << endl;*/
		#pragma endregion
		
		#pragma region ������� 2
			/*const int Max = 10;
			Employee empployee[Max];

			for (int i = 0; i < Max; i++)
			{
				empployee[i].getData();
			}
			
			for (int i = 0; i < Max; i++)
			{
				empployee[i].putData();
			}*/
		#pragma endregion
		
		#pragma region ������� 3 �� ��� �����
			/*const int MAX = 10;
			Distance dist[MAX], averdist;
			int n = 0;
			double sum = 0;
			int mean;
			do
			{
				cout << "Enter distance ";
				dist[n++].getDist();
			} while (n != 10);

			for (int j = 0; j<10; j++)
			{
				sum += dist[j].addDist();
			}
			averdist.divDist(sum, MAX);
			averdist.showDist();
			cout << endl;*/
		#pragma endregion
		
		#pragma region ������� 4
			/*int arrays[5];
			int index = 0;
			for (int i = 0; i < 5; i++) {
				cout << "������� ����� ��������: "; cin >> arrays[i];
			}

			cout << "������������ �������� �����: " << arrays[maxInt(arrays)] << " ������ ��������: " << maxInt(arrays) <<endl;*/
		#pragma endregion
		
		#pragma region ������� 5 �� ��� �����
		/*	const int Max = 4;
			Fraction fr1[Max];

			for (int i = 0; i <= Max-1; i++)
			{
				fr1[i].getFraction();
			}
			 
			int j = 0;
			do
			{
				fr1[j].sredZnach(fr1, Max);
				j++;
			} while (j >= Max-1);*/
		#pragma endregion
		
		#pragma region ������� 6 �� ��� �����
			//Card deck[52], group[4][52];
			//int j;

			//cout << endl;

			//for (j = 0; j < 52; j++)
			//{
			//	int num = (j % 13) + 2;
			//	Suit su = Suit(j / 13);
			//	deck[j].set(num, su);
			//}

			//cout << "�������� ������: \n";
			//for (j = 0; j < 52; j++)
			//{
			//	deck[j].display();
			//	cout << " ";
			//	if (!((j+1)%13))
			//	{
			//		cout << endl;
			//	}
			//}

			//srand(time(NULL)); // �������������� ��������� ��������� �����
			//for (j = 0; j < 52; j++)
			//{
			//	int k = rand() % 52; // �������� ��������� �����
			//	Card temp = deck[j]; // � ������ �� � �������
			//	deck[j] = deck[k];
			//	deck[k] = temp;
			//}
			//// ���������� ������������ ������
			//cout << "\n������������ ������:\n";
			//for (j = 0; j < 52; j++)
			//{
			//	deck[j].display();
			//	cout << " ";
			//	if (!((j + 1) % 13)) // �������� ����� ������ ����� ������ 13-� �����
			//		cout << endl;
			//}

			//int k = 0; // deck of cards 0-52
			//for (int i = 0; i < 4; i++)
			//{
			//	for (int j = 0; j < 13; j++)
			//	{
			//		group[i][j] = deck[k]; // insert card into group
			//		k++; // increment card
			//	}
			//}

			//cout << endl;

			//// Display deck of card by group
			//for (int i = 0; i < 4; i++)
			//{
			//	cout << "#" << i << "Group" << endl;
			//	for (int j = 0; j < 13; j++)
			//	{
			//		group[i][j].display();
			//	}
			//	cout << endl;
			//}			
		#pragma endregion
		
		#pragma region ������� 7 �� ��� �����
			/*Money money;
			char value[17];
			long double a = 0;

			cout << "������� �������� ����� ����� $x,xxx,xxx,xxx.xx: "; cin.get(value,17);
			a = money.msTold(value);
			cout << setiosflags(ios::fixed)
				<< setiosflags(ios::showpoint)
				<< setprecision(2)
				<< "\n" << a << endl;*/
		#pragma endregion
		
		#pragma region ������� 8
			/*safeArray s1;
			int in,val;
			char simb;
			do
			{	
				cout << "������� ������ � ��������" << endl;
				cin >> in >> val;

				s1.putel(in, val);
				s1.getel(in);

				cout << "Tty Again? y/n: ";
				cin >> simb;
			} while (simb != 'n');*/
		#pragma endregion
		
		#pragma region ������� 9 �� ��� �����
			/*Queue s1;

			s1.put(11);
			s1.put(22);
			cout << "1: " << s1.get() << endl;
			cout << "2: " << s1.get() << endl;

			s1.put(33);
			s1.put(44);
			s1.put(55);
			s1.put(66);
			cout << "3: " << s1.get() << endl;
			cout << "4: " << s1.get() << endl;
			cout << "5: " << s1.get() << endl;
			cout << "6: " << s1.get() << endl;*/
		#pragma endregion
		
		#pragma region ������� 10
			/*safeArray s1 (4, 5);
			int value, in, inn;
			char simb;
			do
			{
				cout << "������� ������ � ��������" << endl;
				cin >> in >> inn >> value;

				s1.putel(in, inn, value);
				s1.getel(in, inn);

				cout << "Tty Again? y/n: ";
				cin >> simb;
			} while (simb != 'n');*/
		#pragma endregion
		
		#pragma region ������� 11 �� �����
			/*Money money;
			money.getmoney();
			money.ldtoms();
			money.strings();
			money.display();*/
		#pragma endregion
		
		#pragma region ������� 12 �� �����

		#pragma endregion
	#pragma endregion

	#pragma region ����� 8

		#pragma region ������� 1
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
				
		#pragma region ������� 3
			/*Time time1(1,10,30);
			Time time2(15, 40, 41);
				
			time1.display();
			time2.display();

			Time t3;
			t3= time1+time2;
			t3.display();*/
		#pragma endregion
		
		#pragma region ������� 4
			//Int i1(-2147483647), i2(8), i3,i4,i5,i6,i7;
			//i3 = i1 * i2; i3.display();
			//i4 = i1 / i2; i4.display();
			//i5 = i1 + i2; i5.display();
			//i6 = i1 - i2; i6.display();
		#pragma endregion
		
		#pragma region ������� 5 - 6 ��������� �� ��������� � ����������� ����������
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
		
		#pragma region ������� 7
			//fraction fr1, fr2, fr_sum;
			//int slog, suslog_2;
			//char znak, drob;
			//cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			//cin >> slog >>drob>> suslog_2;
			//fr1.getFraction(slog, suslog_2);

			//cout << "������� ����: <+ - * />" << endl;
			//cin >> znak;

			//cout << "������� ��������� ������ ����� - / - ����������� ������ �����:" << endl;
			//cin >> slog >> drob >> suslog_2;
			//fr2.getFraction(slog, suslog_2);

			//switch (znak)
			//{
			//	case '+': fr_sum = fr1 + fr2; break;
			//	case '-': fr_sum = fr1 - fr2; break;
			//	case '*': fr_sum = fr1 * fr2; break;
			//	case '/': fr_sum = fr1 / fr2; break;
			//}
			////����� �� �����
			//{
			//	fr_sum.showFraction();
			//	fr_sum.lowterms();
			//}
		#pragma endregion

	#pragma endregion

	#pragma region ����� 9		
		#pragma region ������� 1 - 3 - 4 - 9
			/*Book b1;
			Type t1;
			Disk d1;

			b1.getData();
			t1.getData();
			b1.putData();
			t1.putData();
			d1.getData();
			d1.putData();*/
		#pragma endregion
		
		#pragma region ������� 2 (ok) - 8 (�� ������)
		/*	char xstr[] = "���, ��������! ";
			Pstring si = xstr;
			si.display();

			char xstr1[] = "�� �������!";
			Pstring s2 = xstr1;
			cout << static_cast<char*>(s2);
			cout << endl;

			char xstr2[] = "��� ����� ������� ������, ��� ��� ����� ��� ��������� ����������, �� ������� �� ������!";
			Pstring s3 = xstr2;
			s3.display();*/
		#pragma endregion
		
		#pragma region ������� 5 - 10
			/*Laborer l1;
			l1.getData();
			l1.putData();
			cout << endl;
			
			Laborer2 l2;
			l2.getData();
			l2.putData();*/
		#pragma endregion
		
		#pragma region ������� 6 �� ������
			/*Safearray sal;
			for (int j = 0; j < LIMIT; j++) {
				sal[j] = j * 10;
			}
				
			for (int j = 0; j < LIMIT; j++){
				int temp = sal[j];
				cout << "������� " << j << " ����� " << temp << endl;
			}*/
		#pragma endregion
		
		#pragma region ������� 7
			/*CountDn cl;
			CountDn c2(100);
			cout << "\ncl = " << cl.get_count();
			cout << "\nc2 = " << c2.get_count();
			cl++; cl++; cl++;

			cout << "\ncl = " << cl.get_count(); 
			c2--; c2--;

			cout << "\nc2 = " << c2.get_count(); 
			CountDn �� = --c2;
			cout << "\n�� = " << ��.get_count();
			cout << endl;*/
		#pragma endregion
		
		#pragma region ������� 11
		/*Stack si;
		si.push(11);
		si.push(22);
		si.push(33);
		cout << endl << si.pop();
		cout << endl << si.pop();
		cout << endl << si.pop();
		cout << endl << si.pop();
		cout << endl;
		
		PairStack p1;
		p1.push(35,55);
		cout << endl << p1.pop();
		cout << endl;*/
		#pragma endregion
	#pragma endregion


	system("pause");
	return 0;
}