#include <iostream>
#include <ctime>

using namespace std;
const int n = 3;
float first_mass[n][n], second_mass[n][n];

void input_mass(float arr[n][n]);							//Прототип функції ініціалізації масиву
void output_mass(float arr[n][n]);							//Прототип функції виведення масиву
void sort(float arr[n][n]);									//Прототип функції сортування діагоналі масиву
void exchange(float aarr_one[n][n], float arr_two[n][n]);		//Прототип функції переставлення діагоналей масивів

/*============= Головна функція =============*/
int main() {
	input_mass(first_mass);						//Ініціалізація першого масиву
	input_mass(second_mass);					//Ініціалізація другого масиву
	cout << "First masiwe:" << endl;
	output_mass(first_mass);					//Виведення першого масиву
	cout << "Second masiwe:" << endl;
	output_mass(second_mass);					//Виведення другого масиву
	sort(first_mass);							//Сортування головної діагоналі першого масиву
	sort(second_mass);							//Сортування головної діагоналі другого масиву
	cout << "Sorted first masiwe:" << endl;
	output_mass(first_mass);					//Виведення першого масиву
	cout << "Sorted second masiwe:" << endl;
	output_mass(second_mass);					//Виведення другого масиву
	exchange(first_mass, second_mass);			//Переставлення діагоналей масивів
	cout << "Terminal first masiwe:" << endl;
	output_mass(first_mass);					//Виведення першого масиву
	cout << "Terminal second masiwe:" << endl;
	output_mass(second_mass);					//Виведення другого масиву
}

/*========== Функція ініціалізації масиву ==========*/
void input_mass(float arr[n][n]) {
	float t;
	cout << "Enter a random number: "; cin >> t;
	srand(t);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = float(rand() % 100) / 10;
		}
	}
}

/*============ Функція виведення масиву ============*/
void output_mass(float arr[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

/*======= Функція сортування діагоналі масиву =======*/
void sort(float arr[n][n]) {
	float temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j][j] > arr[j + 1][j + 1]) {
				temp = arr[j + 1][j + 1];
				arr[j + 1][j + 1] = arr[j][j];
				arr[j][j] = temp;
			}
		}
	}
}

/*============= Функція переставлення діагоналей масивів =============*/
void exchange(float arr_one[n][n], float arr_two[n][n]) {
	float temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				temp = arr_two[i][j];
				arr_two[i][j] = arr_one[i][j];
				arr_one[i][j] = temp;
			}
		}
	}
}
