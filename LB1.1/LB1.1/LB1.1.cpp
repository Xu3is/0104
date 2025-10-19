#include <iostream>
#include <vector>
#include <cmath>
#include <clocale>
#include "Triangle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int n;
    cout << "Введите количество треугольников: ";
    cin >> n;

    vector<Triangle> triangles(n);

    for (int i = 0; i < n; i++) {
        double side, angle1, angle2;
        cout << "Введите данные для треугольника " << i + 1 << " (сторона, угол1, угол2 в градусах): ";
        cin >> side >> angle1 >> angle2;
        triangles[i].NewTriangle(side, angle1, angle2);
    }

    while (true) {
        cout << "\nВыберите операцию:\n"
            << "1. Добавить новый треугольник\n"
            << "2. Показать информацию о треугольнике\n"
            << "3. Вычислить все стороны\n"
            << "4. Изменить длину стороны\n"
            << "5. Вычислить длину медианы\n"
            << "6. Проверить подобие с другим треугольником\n"
            << "7. Выход\n"
            << "Введите выбор (1-7): ";

        int choice;
        cin >> choice;

        if (choice == 7) break;

        if (choice != 1 && choice != 2) {
            int index;
            cout << "Введите индекс треугольника (1-" << n << "): ";
            cin >> index;
            index--;

            if (index < 0 || index >= n) {
                cout << "Недопустимый индекс!\n";
                continue;
            }

            switch (choice) {

            case 3: {
                double sides[3];
                if (triangles[index].CalculateSides(sides)) {
                    cout << "Длины сторон:\n"
                        << "Сторона A: " << sides[0] << "\n"
                        << "Сторона B: " << sides[1] << "\n"
                        << "Сторона C: " << sides[2] << endl;
                }
                else {
                    cout << "Невозможно вычислить стороны (неверные углы)\n";
                }
                break;
            }

            case 4: {
                double multiplier;
                cout << "Введите множитель для длины стороны: ";
                cin >> multiplier;
                triangles[index].ChangeSide(multiplier);
                cout << "Новая длина стороны: " << triangles[index].GetSide() << endl;
                break;
            }

            case 5: {
                int sideChoice;
                cout << "Выберите сторону для медианы (1-основная сторона, 2 или 3-другие стороны): ";
                cin >> sideChoice;
                double median = triangles[index].CalculateMedian(sideChoice);
                if (median >= 0)
                    cout << "Длина медианы: " << median << endl;
                else
                    cout << "Недопустимый выбор стороны или ошибка вычислений!\n";
                break;
            }

            case 6: {
                int otherIndex;
                cout << "Введите индекс треугольника для сравнения (1-" << n << "): ";
                cin >> otherIndex;
                otherIndex--;
                if (otherIndex >= 0 && otherIndex < n && otherIndex != index) {
                    bool similar = triangles[index].IsSimilar(triangles[index], triangles[otherIndex]);
                    cout << (similar ? "Треугольники подобны" : "Треугольники не подобны") << endl;
                }
                else {
                    cout << "Недопустимый индекс!\n";
                }
                break;
            }
            default:
                cout << "Недопустимый выбор!\n";
            }
        }

        else if (choice == 1) {
            double side, angle1, angle2;
            cout << "Введите данные для нового треугольника (сторона, угол1, угол2 в градусах): ";
            cin >> side >> angle1 >> angle2;
            Triangle newTriangle;
            newTriangle.NewTriangle(side, angle1, angle2);
            triangles.push_back(newTriangle);
            n++;
            cout << "Треугольник добавлен, новый индекс: " << n << endl;
        }

        else {
            for (int i = 0; i < n; i++) {
                cout << "Треугольник " << i + 1 << ": сторона = " << triangles[i].GetSide()
                    << ", угол1 = " << triangles[i].GetAngleA()
                    << ", угол2 = " << triangles[i].GetAngleB() << endl;
            }
        }
    }
    return 0;
}