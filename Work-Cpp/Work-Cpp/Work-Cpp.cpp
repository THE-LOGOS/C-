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

using namespace std;

#pragma region Функции для заданий

	#pragma region Глава 10
		#pragma region Задание 2
			/*class String{
				private:
					char* str;
				public:
					String(char* s){
						const int length = strlen(s);
						str = new char[length + 1];
						strcpy_s(str, length+1, s);
					}
					~String(){
						cout << "Удаляем строку\n";
						delete[] str;
					}
					void display() {
						upIt(str);
						cout << str << endl;
					}

					void upIt(char *s) {
						int val = strlen(s);
						for (int i = 0; i < val; i++) {
							*(s + i) = toupper(*(s+i));
						}
						
					}
			};*/
		#pragma endregion

		#pragma region Задание 3
			/*void const bsort(const char** pp, int n) {
				void order(const char**, const char**);
				int j, k;
				for (j = 0; j < n - 1; j++) {
					for (k = j + 1; k < n; k++) {
						order(pp + j, pp + k);
					}
				}
			}

			void order(const char** ppl, const char** pp2) {
				if (strcmp(*ppl, *pp2)>0) {
					const char* tempptr = *ppl;
					*ppl = *pp2;
					*pp2 = tempptr;
				}
			}*/
		#pragma endregion

		#pragma region Задание 4 - 8 не сделал
//			struct link{
//				int data;
//				link* next;
//			};
//			
//			class LinkList {
//				private:
//					link* first;
//				public:
//					LinkList() { first = NULL; }
//
//					//8 не сделал
//					void addItem(int d) {
//						link* newLink = new link;
//						newLink->data = d;
//						newLink->next = first;
//						first = newLink;
//					}
//
//					//4 
//					/*void addItem(int d) {
//						link* newLink = new link;
//						newLink->data = d;
//						newLink->next = first;
//						first = newLink;
//					}
//*/
//					~LinkList() {
//						delete first;
//					}
//
//					void display() {
//						link* curent = first;
//						while (curent)
//						{
//							cout << curent->data << endl;
//							curent = curent->next;
//						}
//					}
//			};
		#pragma endregion

		#pragma region Задание 5
			/*void addArrys(float *arr1, float *arr2, float *arr3, int val){
				for (int i = 0; i < val; i++){
					*(arr3+i) = *(arr1 + i) + *(arr2 + i);
				}
			}*/
		#pragma endregion

		#pragma region Задание 6 сделал чистично
			//int compstr(const char* str1, const char* str2){
			//	/*int val1 = strlen(str1);
			//	int val2 = strlen(str2);*/
			//	int sum = 0;
			//	while (*(str1 + sum) != '\0' || (str2 + sum) != '\0')
			//	{
			//		if (*(str1 + sum) == *(str2 + sum)) {
			//			return 0;
			//		}
			//		if (*(str1 + sum) > *(str2 + sum)) {
			//			return -1;
			//		}
			//		if (*(str1 + sum) < *(str2 + sum)) {
			//			return 2;
			//		}
			//		sum++;
			//	}
			//}
		#pragma endregion

		#pragma region Задание 7 не понятно
			/*class Person{
				protected:
					string name;
					float selary;
				public:
					void setName() { 
						cout << "Введите имя: "; cin >> name;
						cout << "Введите Z\P: "; cin >> selary;
					}
					void printName() { 
						cout << endl << name; 
						cout << endl << selary; 
					}
					string getName() { return name; }
					float getSelary() { return selary; }

					void const salSort (Person** pp, int n) {
						int j, k;
						for (j = 0; j < n - 1; j++) {
							for (k = j + 1; k < n; k++) 
								if ((*(pp+j) > *(pp+k))) {
									Person* tempptr = *(pp+j);
									*(pp + j) = *(pp + k);
									*(pp + k) = tempptr;
								}
							}
						}
			};*/
		#pragma endregion
	#pragma endregion

/*

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

	#pragma region Глава 10
		#pragma region Задание 1
			/*float Array[5];
			float *ArrayPtr = Array;
			float SredZnach = 0;
			for (int i = 0; i < 5; i++){
				*(ArrayPtr++) = i;
			}
			for (int i = 0; i < 5; i++)
			{
				SredZnach += Array[i];
			}
			cout << SredZnach / 5;*/

		#pragma endregion

		#pragma region Задание 2
			/*char chhar[] = "Тише едешь - дальше будешь.";
			String s1 = chhar;
			cout << "s1 = ";
			s1.display();*/
		#pragma endregion

		#pragma region Задание 3
			/*const int days = 7;
			char a[7];
			const char* arrptrs[days] = { "Суббота", "Пятница" , "Четверг" , "Среда",
								"Вторник", "Понедельник" , "Воскресеье" };
			for (int  i = 0; i < days; i++) {
				cout << *(arrptrs + i) << endl;
			}
			cout << endl;
			bsort(arrptrs, days);
			for (int i = 0; i < days; i++) {
				cout << *(arrptrs + i) << endl;
			}*/
		#pragma endregion

		#pragma region Задание 4 - 8 не сделал
			/*LinkList li;
			li.addItem(25);
			li.addItem(22);
			li.addItem(2);
			li.addItem(88);
			li.addItem(47);

			li.display();*/
		#pragma endregion

		#pragma region Задание 5
			/*const int VALUE = 4;
			float Arrays1[VALUE] = { 1,2,3,4 };
			float Arrays2[VALUE] = { 5,6,7,8 };
			float Arrays3[VALUE];

			float *arraysPtr1 = Arrays1;
			float *arraysPtr2 = Arrays2;
			float *arraysPtr3 = Arrays3;

			addArrys(arraysPtr1, arraysPtr2, arraysPtr3, VALUE);
			for (int i = 0; i < VALUE; i++)
			{

				cout << *(arraysPtr3+i) << " ";
			}*/
		#pragma endregion

		#pragma region Задание 6 сделал чистично
			/*const char Str1[] = {"Sqdsao"};
			const char Str2[] = {"SRSAso"};
			int i = compstr(Str1, Str2);
			if (i == -1) { cout << "Str1 > Str2"; }
			else if (i == 0) { cout << "Str1 = Str2"; }
			else { cout << "Str1 < Str2"; }
			cout << endl;
			const char Str3[] = { "Привет" };
			const char Str4[] = { "Арбуз" };
			i = compstr(Str3, Str4);
			if (i == -1) { cout << "Str1 > Str2"; }
			else if (i == 0) { cout << "Str1 = Str2"; }
			else { cout << "Str1 < Str2"; }*/
		#pragma endregion

		#pragma region Задание 7 не понятно
			/*Person* persPtr[5];
			int n = 0;
			char choice;
			do
			{
				persPtr[n] = new Person;
				persPtr[n]->setName();
				cout << "Try again? y\\n: ";
				n++; cin >> choice;

			} while (choice != 'n' || n == 5);
			
			cout << "\nНеотсортированный список: ";
			for (int j = 0; j < n; j++) {
				persPtr[j]->printName();
				cout << endl;
			}
			cout << "\nОтсортированный список: "; 
			Person **a = persPtr;
			a[0]->salSort(persPtr, 5);
			for (int j = 0; j < n; j++) {
				a[j]->printName();
				cout << endl;
			}
			cout << endl;*/
		#pragma endregion

		#pragma region Задание 9
			/*const int val = 10;
			int a0[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a1[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a2[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a3[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a4[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a5[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a6[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a7[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a8[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int a9[val] = { 10,20,30,40,50,60,70,80,90,100 };
			int* ap[10];
			ap[0] = a0;
			ap[1] = a1;
			ap[2] = a2;
			ap[3] = a3;
			ap[4] = a4;
			ap[5] = a5;
			ap[6] = a6;
			ap[7] = a7;
			ap[8] = a8;
			ap[9] = a9;
			for (int i = 0; i < val; i++)
			{
				cout << "a" << i << " ";
				for (int j = 0; j < val; j++)
				{
					cout << ap[i][j] << " ";
				}
				cout << endl;
			}*/
		#pragma endregion

		#pragma region Задание 10
			/*const int VALUE = 10;
			int* ap[VALUE];
			for (int i = 0; i < VALUE; i++)
			{
				*(ap + i) = new int[VALUE];
				
				for (int j = 0; j < VALUE; j++)
				{
					ap[i][j] = 10 * j;
				}
			}
			for (int i = 0; i < VALUE; i++)
			{
				cout << "a" << i << " ";
				for (int j = 0; j < VALUE; j++)
				{
					cout << ap[i][j] << " ";
				}
				cout << endl;
			}*/
		#pragma endregion
	#pragma endregion

/*

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