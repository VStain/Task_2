#include <iostream>
//#include <cstdint>
using namespace std;

struct Client_information
{
    int64_t account_number = 0;
    string owners_name;
    int balance = 0;
};

int main()
{
    setlocale(LC_ALL, "Rus");

    Client_information info;
    info.account_number = 0;
    info.owners_name;
    info.balance;

    cout << "Введите номер счёта :" ;
    cin >> info.account_number;
    cout <<  "Введите имя владельца :";
    cin >> info.owners_name;
    cout << "Введите баланс :" ;
    cin >> info.balance;
    cout << "Введите новый баланс :";
    cin >> info.balance;
    cout << "Ваш счёт :" << info.owners_name << ", " << info.account_number << ", " << info.balance << endl;


    return 0;
}

/**/