#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

//Очистка буфера ввода
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

//Ввод положительного числа
double Polozitelnoe_chislo(string text) {
    double num;
    while (true) {
        cout << text;
        
        if (!(cin >> num)) {
            cout << "Нет числа! Введите число: ";
            clearInput();
            continue;
        }
        
        if (num <= 0) {
            cout << "Число должно быть положительным!" << endl;
            continue;
        }
        
        return num;
    }
}

//Ввод сторон треугольника
double Storoni_treygolnika(string text) {
    double num;
    while (true) {
        cout << text;
        
        if (!(cin >> num)) {
            cout << "Нет числа! Введите число: ";
            clearInput();
            continue;
        }
        
        if (num <= 0) {
            cout << "Сторона должна быть положительной!" << endl;
            continue;
        }
        
        return num;
    }
}

// Треугольник
void Treygolnik() {
    cout << "\n";
    
    double a, b, c;
    
    while (true) {
        a = Storoni_treygolnika("Введите сторону a: ");
        b = Storoni_treygolnika("Введите сторону b: ");
        c = Storoni_treygolnika("Введите сторону c: ");
        cout << "\n";
        
        if (a + b > c && a + c > b && b + c > a) {
            break;
        } else {
            cout << "Таких треугольников не бывает\n";
            cout << "\n";
        }
    }
    
    double perimeter = a + b + c;
    double p = perimeter / 2;  
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    bool isIsosceles = (a == b) || (a == c) || (b == c);
    
    cout << "\n";
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Треугольник " << (isIsosceles ? "равнобедренный" : "не равнобедренный") << endl;
    cout << "\n";
}

// Главное меню
void Glavnoe_menu() {
    cout << "\n";
    cout << "1. Треугольник\n";
    cout << "0. Выход\n";
    cout << "Введено: ";
}

int main() {
    int choice;
    
    do {
        Glavnoe_menu();
        
        if (!(cin >> choice)) {
            clearInput();
            choice = -1;
            continue;
        }
        
        switch (choice) {
            case 1:
                Treygolnik();
                break;
            case 0:
                break;
            default:
                cout << "Отказано! Введите число от 0 до 1.\n";
        }
        
    } while (choice != 0);
    
    return 0;
}