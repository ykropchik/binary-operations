#include <iostream>

using namespace std;


void firstTask(){
    cout << "First task" << "\n";

    unsigned short int n = 0;

    cout << "Введите n:" << "\n";
    cin >> n;
    cout << "Ответ: " << (1 << n) << "\n";
}

void secondTask(){
    cout << "Second task" << "\n";

    unsigned short int a = 0;

    cout << "Введите число:" << "\n";
    cin >> a;
    cout << "Ответ: ";
    for (int i = sizeof(a)*8 - 1; i >= 0; i--){
        cout << ((a & (1 << i)) >> i);
    }
    cout << "\n";
}

void thirdTask(){
    cout << "Third task" << "\n";

    unsigned short int a = 0;
    unsigned short int count = 0;

    cout << "Введите число:" << "\n";
    cin >> a;
    for (int i = sizeof(a)*8 - 1; i >= 0; i--){
        if ((a & (1 << i)) >> i == 1){
            count++;
        };
    }
    cout << "Ответ: " << count << "\n";
}

void fourthTask(){
    cout << "Fourth task" << "\n";

    unsigned short int a = 0;
    unsigned short int j = 0;
    unsigned short int i = 16;

    cout << "Введите число:" << "\n";
    cin >> a;
    while (j != 1) {
        i--;
        j = ((a & (1 << i)) >> i);
    }
    cout << "Ответ: " << j << "\n";
}

void fifthTask(){
    cout << "Fifth task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "Введите число n:" << "\n";
    cin >> n;
    cout << "Введите число i:" << "\n";
    cin >> i;
    cout << "Ответ: " << (n | (1 << i)) << "\n";
}

void sixthTask(){
    cout << "Sixth task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "Введите число n:" << "\n";
    cin >> n;
    cout << "Введите число i:" << "\n";
    cin >> i;
    cout << "Ответ: " << (n & (65535 ^ (1 << i))) << "\n";
}

void seventhTask(){
    cout << "Seventh task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "Введите число n:" << "\n";
    cin >> n;
    cout << "Введите число i:" << "\n";
    cin >> i;
    cout << "Ответ: " << (n ^ (1 << i)) << "\n";
}

/*
 * Пример из задания не работает, так как в задании размер 8 бит, я сделал 16 :)
 * Но если сильно хочется можно всегда поменять BITS_COUNT на 8
 */
void eighthTask(){
    cout << "Eighth task" << "\n";

    int BITS_COUNT = 16;
    unsigned short int n = 0;

    cout << "Введите число n:" << "\n";
    cin >> n;
    if ((n & (1 << (BITS_COUNT - 1))) >> (BITS_COUNT - 1) == 1){
        cout << "Ответ: " << (((n << 1) | 1) ^ (1 << BITS_COUNT)) << "\n";
    }
    else{
        cout << "Ответ: " << (n << 1) << "\n";
    }
}

void ninthTask(){
    cout << "Ninth task" << "\n";

    unsigned short int count = 0;
    unsigned short int n = 0;

    cout << "Введите число n:" << "\n";
    cin >> n;
    for (int i = (sizeof(n)*8 - 1); i >= 0; i--) {
        if ((n & (3 << i)) >> i == 3) {
            count++;
        }
    };
    cout << "Ответ: " << count << "\n";
}

void tenthTask(){
    cout << "Tenth task" << "\n";

    unsigned short int a = 0, b = 0, c = 0;
    cout << "Введите число:" << "\n";
    cin >> a;
    cout << "Введите номер первого бита:" << "\n";
    cin >> b;
    cout << "Введите номер второго бита:" << "\n";
    cin>> c;
    cout << "Ответ: " << (a ^ ((1 << b) | (1 << c))) << "\n";
}

void eleventhTask(){
    cout << "Eleventh task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "Введите число:" << "\n";
    cin >> n;
    cout << "Введите номер бита:" << "\n";
    cin >> i;
    cout << "Ответ: " << (((n >> (i + 1)) << i) | (n & ((1 << i) - 1))) << "\n";
}

void startMessage(){
    cout << "Введите номер того задания, которое хотите проверить" << "\n";
    cout << "Для выхода из программы введите 99" << "\n";

}

int main() {
    int task = 0;

    while (task != 99){
        startMessage();
        cin >> task;
        switch (task){
            case 1:
                firstTask();
                break;
            case 2:
                secondTask();
                break;
            case 3:
                thirdTask();
                break;
            case 4:
                fourthTask();
                break;
            case 5:
                fifthTask();
                break;
            case 6:
                sixthTask();
                break;
            case 7:
                seventhTask();
                break;
            case 8:
                eighthTask();
                break;
            case 9:
                ninthTask();
                break;
            case 10:
                tenthTask();
                break;
            case 11:
                eleventhTask();
                break;
            default :
                if (task != 99) {
                    cout << "Нет такого задания, попробуйте снова :)" << "\n";
                } else{
                    cout << "До новых встреч!" << "\n";
                }
                break;
        }
    }
    return 0;
}