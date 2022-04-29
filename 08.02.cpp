/**
 * @file 08.2.cpp
 * @author plinh
 * @brief 
 * создать небольшую программу для проверки логина и пароля одного конкретного пользователя: 
 * создать функцию, которая принимает на вход только логин. Пароль запрашивается из функции(три попытки). После неудачной попытки необходимо сгенерировать собственное программное исключение. Функция возвращает успех операции - пользователь корректный и пароль подходит к нему. 
 * в main необходимо запросить логин и вызвать вышеописанную функцию. Корректно обработать исключение из функции - написать пользователю об неуспешности входа
 * @version 0.1
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */
// Build: g++ -std=c++11 08.2.cpp -o linh
// Run: ./linh

#include <iostream>
#include <string>
using namespace std;

string LOGIN = "linh";
string PASSW = "123456";

bool submit(const string login) {
    // ask max 3 times password
    cout << "Password: ";
    string pwd; cin >> pwd;
    return PASSW.compare(pwd) == 0;
}

int main() {
    string login; 
    do {
        cout << "Login: ";
        cin >> login;
    } while (LOGIN.compare(login) != 0);
        
    try {
        bool e = submit(login) || submit(login) || submit(login);
        if (e)
            cout << "Login successfully" << endl;
        else
            throw e;
    } catch (bool e) {
        if (!e)
            cout << "Login failed" << endl;
    }
    return 0;
}
