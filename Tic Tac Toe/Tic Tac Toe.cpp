#include <iostream>
#include <math.h>
#include<cstdlib>
#include<random>
#include<windows.h>
using namespace std;
template<int txt = 7, int bg = 0>
ostream& color(ostream& text) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | txt));
    return text;
}
int SetColor(int text, int background) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
    return text, background;
}
int Drow(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    cout << endl;
    cout << "\t |\t |\t" << endl;
    cout << "    " << a << "    |   " << b << "   |    " << c << endl;
    cout << "_________|_______|________" << endl;
    cout << "\t |\t |\t" << endl;
    cout << "    " << d << "    |   " << e << "   |    " << f << endl;
    cout << "_________|_______|________" << endl;
    cout << "\t |\t |\t" << endl;
    cout << "    " << g << "    |   " << h << "   |    " << i << endl;
    cout << "\t |\t |\t" << endl;
    return a, b, c, d, e, f, g, h, i;
}
int main() {
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
    int X1, O1, X2, O2, X3, O3, X4, O4, X5;
    int Players;
    char X = 'X', O = 'O';
    cout << "ИГРА КРЕСТИКИ-НОЛИКИ" << endl;
    cout << "\nВыберите варианты игры:" << endl;
    cout << "1. Против компьютера\n2. Друг против друга" << endl;
    cout << "\nУкажите вариант: ";
    cin >> Players;
    if (Players == 2) {
        Drow(a, b, c, d, e, f, g, h, i);
        SetColor(1, 0);
        cout << "\nПервыми ходят крестики" << color << endl;                                          // X1
        cout << "Введите номер ячейки куда хотите поставить Х: ";
        cin >> X1;
        if (!cin || X1 < 1 || X1 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X1 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        SetColor(6, 0);
        cout << "\nТеперь ходят нолики" << color << endl;
        cout << "Введите номер ячейки куда хотите поставить O: ";                    //O1
        cin >> O1;
        while (O1 == X1)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O1;
        }
        if (!cin || O1 < 1 || O1 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O1 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        SetColor(1, 0);
        cout << "\nХодят крестики" << color << endl;                                                     //Х2
        cout << "Введите номер ячейки куда хотите поставить Х: ";
        cin >> X2;
        while (X2 == X1 || X2 == O1)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X2;
        }
        if (!cin || X2 < 1 || X2 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X2 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        SetColor(6, 0);
        cout << "\nХодят нолики" << color << endl;                                                     //O2
        cout << "Введите номер ячейки куда хотите поставить O: ";
        cin >> O2;
        while (O2 == X1 || O2 == O1 || O2 == X2)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O2;
        }
        if (!cin || O2 < 1 || O2 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O2 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        SetColor(1, 0);
        cout << "\nХодят крестики" << color << endl;                                                     //Х3
        cout << "Введите номер ячейки куда хотите поставить Х: ";
        cin >> X3;
        while (X3 == X1 || X3 == O1 || X3 == X2 || X3 == O2)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X3;
        }
        if (!cin || X3 < 1 || X3 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X3 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        SetColor(6, 0);
        cout << "\nХодят нолики" << color << endl;                                                     //O3
        cout << "Введите номер ячейки куда хотите поставить O: ";
        cin >> O3;
        while (O3 == X1 || O3 == O1 || O3 == X2 || O3 == O2 || O3 == X3)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O3;
        }
        if (!cin || O3 < 1 || O3 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O3 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ НОЛИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        SetColor(1, 0);
        cout << "\nХодят крестики" << color << endl;                                                     //Х4
        cout << "Введите номер ячейки куда хотите поставить Х: ";
        cin >> X4;
        while (X4 == X1 || X4 == O1 || X4 == X2 || X4 == O2 || X4 == X3 || X4 == O3)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X4;
        }
        if (!cin || X4 < 1 || X4 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X4 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        SetColor(6, 0);
        cout << "\nХодят нолики" << color << endl;                                                     //O4
        cout << "Введите номер ячейки куда хотите поставить O: ";
        cin >> O4;
        while (O4 == X1 || O4 == O1 || O4 == X2 || O4 == O2 || O4 == X3 || O4 == O3 || O4 == X4)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O4;
        }
        if (!cin || O4 < 1 || O4 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O4 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ НОЛИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        SetColor(1, 0);
        cout << "\nХодят крестики" << color << endl;                                                     //Х5
        cout << "Введите номер ячейки куда хотите поставить Х: ";
        cin >> X5;
        while (X5 == X1 || X5 == O1 || X5 == X2 || X5 == O2 || X5 == X3 || X5 == O3 || X5 == X4 || X5 == O4)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X5;
        }
        if (!cin || X5 < 1 || X5 > 9) {
            cerr << "ОШИБКА!" << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X5 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        else {
            SetColor(2, 0);
            cout << "\nНИЧЬЯ!" << color << endl;
        }
    }
    else if (!cin || Players < 1 || Players>2) {
        SetColor(4, 0);
        cerr << "ОШИБКА!" << color << endl;
        system("pause");
        return 0;
   }
    else {
    int player;
    cout << "\nВыбирете за кого будете играть: " << endl;
    cout << "1. Крестики\n2. Нолики" << endl;
    cout << "Укажите вариант: ";
    cin >> player;
    if (player == 1) {
        Drow(a, b, c, d, e, f, g, h, i);
        cout << "\nВы выбрали игру за крестики\nВаш ход первый" << endl;
        cout << "Введите номер ячейки куда хотите поставить Х: ";
        cin >> X1;
        if (!cin || X1 < 1 || X1 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X1 == 1) {                                                                          //X1
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        O1 = 1 + rand() % 9;
        if (O1 == X1) {
            while (O1 == X1) {
                O1 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (O1 == 1) {                                                                //O1
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        cout << "\nВведите номер ячейки куда хотите поставить Х: ";                       //Х2
        cin >> X2;
        while (X2 == X1 || X2 == O1)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X2;
        }
        if (!cin || X2 < 1 || X2 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X2 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }

        O2 = 1 + rand() % 9;                                                                       //O2
        if (O2 == X1 || O2 == X2 || O2 == O1) {
            while (O2 == X1 || O2 == X2 || O2 == O1) {
                O2 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (O2 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }                                                
        cout << "\nВведите номер ячейки куда хотите поставить Х: ";                                //Х3
        cin >> X3;
        while (X3 == X1 || X3 == O1 || X3 == X2 || X3 == O2)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X3;
        }
        if (!cin || X3 < 1 || X3 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X3 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        O3 = 1 + rand() % 9;                                                                       //O3
        if (O3 == X1 || O3 == X2 || O3 == O1 || O3 == X3 || O3 == O2) {
            while (O3 == X1 || O3 == X2 || O3 == O1 || O3 == X3 || O3 == O2) {
                O3 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (O3 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ НОЛИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        cout << "\nВведите номер ячейки куда хотите поставить Х: ";                                  //Х4
        cin >> X4;
        while (X4 == X1 || X4 == O1 || X4 == X2 || X4 == O2 || X4 == X3 || X4 == O3)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X4;
        }
        if (!cin || X4 < 1 || X4 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X4 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        O4 = 1 + rand() % 9;                                                                       //O4
        if (O4 == X1 || O4 == X2 || O4 == O1 || O4 == X3 || O4 == O2) {
            while (O4 == X1 || O4 == X2 || O4 == O1 || O4 == X3 || O4 == O2 || O4 == O3 || O4 == X4) {
                O4 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (O4 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ НОЛИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        cout << "\nВведите номер ячейки куда хотите поставить Х: ";                                    //Х5
        cin >> X5;
        while (X5 == X1 || X5 == O1 || X5 == X2 || X5 == O2 || X5 == X3 || X5 == O3 || X5 == X4 || X5 == O4)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> X5;
        }
        if (!cin || X5 < 1 || X5 > 9) {
            cerr << "ОШИБКА!" << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (X5 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        else {
            SetColor(2, 0);
            cout << "\nНИЧЬЯ!" << color << endl;
        }
    }
    else if (!cin || player < 1 || player>2) {
        SetColor(4, 0);
        cerr << "ОШИБКА!" << color << endl;
        system("pause");
        return 0;
    }
    else {
        cout << "\nВы выбрали игру за нолики\nПервыми ходят крестики" << endl;
        X1 = 1 + rand() % 9;                                                        //X1
        if (X1 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X1 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        cout << "\nВведите номер ячейки куда хотите поставить O : ";                    //O1
        cin >> O1;
        while (O1 == X1)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O1;
        }
        if (!cin || O1 < 1 || O1 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O1 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O1 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        X2 = 1 + rand() % 9;                                                                       //X2
        if (X2 == X1 || X2 == O1) {
            while (X2 == X1 || X2 == O1) {
                X2 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (X2 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X2 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }                                          
        cout << "\nВведите номер ячейки куда хотите поставить O: ";                                //O2
        cin >> O2;
        while (O2 == X1 || O2 == O1 || O2 == X2)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O2;
        }
        if (!cin || O2 < 1 || O2 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O2 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O2 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        X3 = 1 + rand() % 9;                                                                       //X3
        if (X3 == X1 || X3 == X2 || X3 == O1 || X3 == O2) {
            while (X3 == X1 || X3 == X2 || X3 == O1 || X3 == O2) {
                X3 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (X3 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X3 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        cout << "\nВведите номер ячейки куда хотите поставить O: ";                                //O3
        cin >> O3;
        while (O3 == X1 || O3 == O1 || O3 == X2 || O3 == O2 || O3 == X3)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O3;
        }
        if (!cin || O3 < 1 || O3 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O3 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O3 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ НОЛИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        X4 = 1 + rand() % 9;                                                                       //X4
        if (X4 == X1 || X4 == X2 || X4 == O1 || X4 == X3 || X4 == O2 || X4 == O3) {
            while (X4 == X1 || X4 == X2 || X4 == O1 || X4 == X3 || X4 == O2 || X4 == O3) {
                X4 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (X4 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X4 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        cout << "\nВведите номер ячейки куда хотите поставить O: ";                                //O2
        cin >> O4;
        while (O4 == X1 || O4 == O1 || O4 == X2 || O4 == O2 || O4 == X3 || O4 == O3 || O4 == X4)
        {
            SetColor(4, 0);
            cout << "\nВы ввели номер ячейки которая уже используется!" << color << endl;
            cout << "Введите номер ячейки еще раз: ";
            cin >> O4;
        }
        if (!cin || O4 < 1 || O4 > 9) {
            SetColor(4, 0);
            cerr << "ОШИБКА!" << color << endl;
            system("pause");
            return 0;
        }
        system("cls");
        if (O4 == 1) {
            a = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 2) {
            b = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 3) {
            c = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 4) {
            d = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 5) {
            e = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 6) {
            f = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 7) {
            g = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 8) {
            h = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (O4 == 9) {
            i = O;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ НОЛИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        X5 = 1 + rand() % 9;                                                                       //X5
        if (X5 == X1 || X5 == X2 || X5 == X3 || X5 == X4 || X5 == O1 || X5 == O2 || X5 == O3 || X5 == O4) {
            while (X5 == X1 || X5 == X2 || X5 == X3 || X5 == X4 || X5 == O1 || X5 == O2 || X5 == O3 || X5 == O4) {
                X5 = 1 + rand() % 9;
            }
        }
        system("cls");
        if (X5 == 1) {
            a = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 2) {
            b = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 3) {
            c = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 4) {
            d = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 5) {
            e = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 6) {
            f = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 7) {
            g = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 8) {
            h = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        else if (X5 == 9) {
            i = X;
            Drow(a, b, c, d, e, f, g, h, i);
        }
        if (a == b && b == c || d == e && e == f || g == h && h == i || a == d && d == g || b == e && e == h || c == f && f == i || a == e && e == i || c == e && e == g) {
            SetColor(4, 0);
            cout << "\nПОБЕДИЛИ КРЕСТИКИ!" << color << endl;
            system("pause");
            return 0;
        }
        else {
            SetColor(2, 0);
            cout << "\nНИЧЬЯ!" << color << endl;
        }
    }
    }
    system("pause");
    int getch();
    return 0;
}