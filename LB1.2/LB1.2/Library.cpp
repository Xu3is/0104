#include <iostream>
#include <string>
#include <clocale>
#include "Book.h"
#include "Reader.h"
#include "Librarian.h"
#include "Order.h"
#include "Catalog.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    Book book1, book2, book3, book4, book5, book6;
    book1.init("Горе от ума", "Грибоедов", 1824);
    book2.init("Идиот", "Достоевский", 1869);
    book3.init("Тихий Дон", "Шолохов", 1928);
    book4.init("Отцы и дети", "Тургенев", 1862);
    book5.init("Герой нашего времени", "Лермонтов", 1840);
    book6.init("Мёртвые души", "Гоголь", 1842);

    Reader reader1, reader2, reader3, reader4, reader5, reader6;
    reader1.init("Сергей Волков", 1101, "20.04.2018");
    reader2.init("Алина Козлова", 1102, "15.08.2020");
    reader3.init("Павел Зайцев", 1103, "03.02.2019");
    reader4.init("Оксана Фёдорова", 1104, "12.06.2021");
    reader5.init("Максим Горбунов", 1105, "25.11.2022");
    reader6.init("Юлия Романова", 1106, "30.03.2024");

    Librarian librarian1, librarian2, librarian3, librarian4, librarian5, librarian6;
    librarian1.init("Екатерина Соловьёва", 301, 8);
    librarian2.init("Андрей Белов", 302, 4);
    librarian3.init("Марина Кравцова", 303, 12);
    librarian4.init("Владимир Егоров", 304, 1);
    librarian5.init("Светлана Миронова", 305, 6);
    librarian6.init("Роман Дроздов", 306, 3);

    Order order1, order2, order3, order4, order5, order6;
    order1.init(401, 1101, "Горе от ума");
    order2.init(402, 1102, "Идиот");
    order3.init(403, 1103, "Тихий Дон");
    order4.init(404, 1104, "Отцы и дети");
    order5.init(405, 1105, "Герой нашего времени");
    order6.init(406, 1106, "Мёртвые души");

    Catalog catalog1, catalog2, catalog3, catalog4, catalog5, catalog6;
    catalog1.init(501, 90, "Электронный");
    catalog2.init(502, 45, "Карточный");
    catalog3.init(503, 80, "Электронный");
    catalog4.init(504, 35, "Карточный");
    catalog5.init(505, 110, "Электронный");
    catalog6.init(506, 55, "Карточный");

    book1.printInfo();
    reader1.printInfo();
    librarian1.printInfo();
    order1.printInfo();
    catalog1.printInfo();

    return 0;
}