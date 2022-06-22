#include <iostream>
using namespace std;

struct Address
{
    string city;
    string street;
    int house_number;
    int apartment_number;
    int index;
};

void Print_address(const Address &person)
{
    cout << "Город: " << person.city << endl << "Улица: " << person.street << endl << "Номер дома: " << person.house_number << endl << "Номер квартиры: " << person.apartment_number << endl
        << "Индекс: " << person.index << endl;
};

int main()
{
    setlocale(LC_ALL, "Rus");

    Address person[] =
    {
    {"Москва", "Арбат", 12, 8, 123456},
    {"Ижевск", "Пушкина", 59, 143,953769},
    };

    Print_address(person[0]);

    return 0;
}

