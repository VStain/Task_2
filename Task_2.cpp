#include <iostream>
using namespace std;

struct Client_information
{
    unsigned int long account_number = 0;
    string owners_name;
    int balance = 0;
};

int main()
{
    setlocale(LC_ALL, "Rus");

    Client_information i_info;
    Client_information* info = &i_info;
    info->account_number = 0;
    info->owners_name;
    info->balance;

    cout << "Введите номер счёта :" ;
    cin >> info->account_number;
    cout <<  "Введите имя владельца :";
    cin >> info->owners_name;
    cout << "Введите баланс :" ;
    cin >> info->balance;
    cout << "Введите новый баланс :";
    cin >> info->balance;
    cout << "Ваш счёт :" << info->owners_name << ", " << info->account_number << ", " << info->balance << endl;


    return 0;
}

/* 1. Впервые сделал просто через "Client_information info;" и "info.(название поля)".Но потом прочитал про указатели.С помощью указателей мы потребляем меньше памяти, верно у лучшаем производительность ? Если так, то почему нужно писать "Client_information info;" а потом
"Client_information* info = &i_info;" ? Это обязательно или можно как то иначе осуществить это?
   2. Заметил, что несмотря на "setlocale(LC_ALL, "Rus");" появляются квакозябры на кирилице. Как это исправить? 
   3. Длинный номер счета приводит к крашу приложения. Как это исправить? Я полагаю это связано с тем, что большая сумма вводится в переменную?*/