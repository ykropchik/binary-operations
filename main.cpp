#include <iostream>

using namespace std;


void firstTask(){
    cout << "First task" << "\n";

    unsigned short int n = 0;

    cout << "������ n:" << "\n";
    cin >> n;
    cout << "�⢥�: " << (1 << n) << "\n";
}

void secondTask(){
    cout << "Second task" << "\n";

    unsigned short int a = 0;

    cout << "������ �᫮:" << "\n";
    cin >> a;
    cout << "�⢥�: ";
    for (int i = sizeof(a)*8 - 1; i >= 0; i--){
        cout << ((a & (1 << i)) >> i);
    }
    cout << "\n";
}

void thirdTask(){
    cout << "Third task" << "\n";

    unsigned short int a = 0;
    unsigned short int count = 0;

    cout << "������ �᫮:" << "\n";
    cin >> a;
    for (int i = sizeof(a)*8 - 1; i >= 0; i--){
        if ((a & (1 << i)) >> i == 1){
            count++;
        };
    }
    cout << "�⢥�: " << count << "\n";
}

void fourthTask(){
    cout << "Fourth task" << "\n";

    unsigned short int a = 0;
    unsigned short int j = 0;
    unsigned short int i = 16;

    cout << "������ �᫮:" << "\n";
    cin >> a;
    while (j != 1) {
        i--;
        j = ((a & (1 << i)) >> i);
    }
    cout << "�⢥�: " << j << "\n";
}

void fifthTask(){
    cout << "Fifth task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "������ �᫮ n:" << "\n";
    cin >> n;
    cout << "������ �᫮ i:" << "\n";
    cin >> i;
    cout << "�⢥�: " << (n | (1 << i)) << "\n";
}

void sixthTask(){
    cout << "Sixth task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "������ �᫮ n:" << "\n";
    cin >> n;
    cout << "������ �᫮ i:" << "\n";
    cin >> i;
    cout << "�⢥�: " << (n & (65535 ^ (1 << i))) << "\n";
}

void seventhTask(){
    cout << "Seventh task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "������ �᫮ n:" << "\n";
    cin >> n;
    cout << "������ �᫮ i:" << "\n";
    cin >> i;
    cout << "�⢥�: " << (n ^ (1 << i)) << "\n";
}

/*
 * �ਬ�� �� ������� �� ࠡ�⠥�, ⠪ ��� � ������� ࠧ��� 8 ���, � ᤥ��� 16 :)
 * �� �᫨ ᨫ쭮 ����� ����� �ᥣ�� �������� BITS_COUNT �� 8
 */
void eighthTask(){
    cout << "Eighth task" << "\n";

    int BITS_COUNT = 16;
    unsigned short int n = 0;

    cout << "������ �᫮ n:" << "\n";
    cin >> n;
    if ((n & (1 << (BITS_COUNT - 1))) >> (BITS_COUNT - 1) == 1){
        cout << "�⢥�: " << (((n << 1) | 1) ^ (1 << BITS_COUNT)) << "\n";
    }
    else{
        cout << "�⢥�: " << (n << 1) << "\n";
    }
}

void ninthTask(){
    cout << "Ninth task" << "\n";

    unsigned short int count = 0;
    unsigned short int n = 0;

    cout << "������ �᫮ n:" << "\n";
    cin >> n;
    for (int i = (sizeof(n)*8 - 1); i >= 0; i--) {
        if ((n & (3 << i)) >> i == 3) {
            count++;
        }
    };
    cout << "�⢥�: " << count << "\n";
}

void tenthTask(){
    cout << "Tenth task" << "\n";

    unsigned short int a = 0, b = 0, c = 0;
    cout << "������ �᫮:" << "\n";
    cin >> a;
    cout << "������ ����� ��ࢮ�� ���:" << "\n";
    cin >> b;
    cout << "������ ����� ��ண� ���:" << "\n";
    cin>> c;
    cout << "�⢥�: " << (a ^ ((1 << b) | (1 << c))) << "\n";
}

void eleventhTask(){
    cout << "Eleventh task" << "\n";

    unsigned short int n = 0;
    unsigned short int i = 0;

    cout << "������ �᫮:" << "\n";
    cin >> n;
    cout << "������ ����� ���:" << "\n";
    cin >> i;
    cout << "�⢥�: " << (((n >> (i + 1)) << i) | (n & ((1 << i) - 1))) << "\n";
}

void startMessage(){
    cout << "������ ����� ⮣� �������, ���஥ ��� �஢����" << "\n";
    cout << "��� ��室� �� �ணࠬ�� ������ 99" << "\n";

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
                    cout << "��� ⠪��� �������, ���஡�� ᭮�� :)" << "\n";
                } else{
                    cout << "�� ����� �����!" << "\n";
                }
                break;
        }
    }
    return 0;
}