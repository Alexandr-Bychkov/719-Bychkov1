#include <iostream>


using namespace std;

int main()
{
	int *A; // указатель для  массива
	int n; // размер массива

	// Ввод количества элементов массива
	cout << "n = ";
	cin >> n;

	A = new int[n]; // создание массива размера n

	// заполнение массива
	cout << "vvedite elementi massiva = ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int temp; // временная переменная для обмена элементов местами

	// Сортировка массива 
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (A[j] > A[j + 1]) {
				// меняем элементы местами
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	// Вывод отсортированного массива
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	delete[] A; // удаление массива

	return 0;
}
