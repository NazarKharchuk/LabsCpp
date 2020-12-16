#include <iostream>
#include <ctime>

using namespace std;
const int n = 3;
float first_mass[n][n], second_mass[n][n];

void input_mass(float arr[n][n]);							//�������� ������� ����������� ������
void output_mass(float arr[n][n]);							//�������� ������� ��������� ������
void sort(float arr[n][n]);									//�������� ������� ���������� ������� ������
void exchange(float aarr_one[n][n], float arr_two[n][n]);		//�������� ������� ������������� ��������� ������

/*============= ������� ������� =============*/
int main() {
	input_mass(first_mass);						//����������� ������� ������
	input_mass(second_mass);					//����������� ������� ������
	cout << "First masiwe:" << endl;
	output_mass(first_mass);					//��������� ������� ������
	cout << "Second masiwe:" << endl;
	output_mass(second_mass);					//��������� ������� ������
	sort(first_mass);							//���������� ������� ������� ������� ������
	sort(second_mass);							//���������� ������� ������� ������� ������
	cout << "Sorted first masiwe:" << endl;
	output_mass(first_mass);					//��������� ������� ������
	cout << "Sorted second masiwe:" << endl;
	output_mass(second_mass);					//��������� ������� ������
	exchange(first_mass, second_mass);			//������������� ��������� ������
	cout << "Terminal first masiwe:" << endl;
	output_mass(first_mass);					//��������� ������� ������
	cout << "Terminal second masiwe:" << endl;
	output_mass(second_mass);					//��������� ������� ������
}

/*========== ������� ����������� ������ ==========*/
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

/*============ ������� ��������� ������ ============*/
void output_mass(float arr[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

/*======= ������� ���������� ������� ������ =======*/
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

/*============= ������� ������������� ��������� ������ =============*/
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
