#include <iostream>
#include <ctime>  
#include <iomanip> 
using namespace std;

const int SIZE = 25;


void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}


int PlusEl(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] > 0 && mas[i] % 2 == 0) ? 1 : 0) + PlusEl (mas, size, i + 1);
}


int SUM(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] > 0 && mas[i] % 2 == 0) ? mas[i] : 0) + SUM(mas, size, i + 1);
}


void Nulls(int mas[], int size, int i = 0) {
    if (i == size) return;
    if (mas[i] > 0 && mas[i] % 2 == 0) {
        mas[i] = 0;
    }
    Nulls(mas, size, i + 1);
}

int main() {
    srand((unsigned)time(0)); //генератора випадкових чисел
    setlocale(LC_CTYPE, "ukr");
    int a[SIZE];

   
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 51 - 20; 
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE); 

    
    int count = PlusEl (a, SIZE);
    int sum = SUM(a, SIZE);

    cout << "Кiлькiсть додатних парних елементiв: " << count << endl;
    cout << "Сума додатних парних елементiв: " << sum << endl;

    
    Nulls(a, SIZE);

    cout << "Модифiкований масив: " << endl;
    COUT(a, SIZE); 

    return 0;
}
