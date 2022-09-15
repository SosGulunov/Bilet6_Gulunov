#include <iostream>
using namespace std;


template <class T>
class Number {
private:
    T num;
public:
    Number(T n) { num = n; };
    T get_num() { return num; };
    T set_num(T n) { num = n; return n; }
};


int main()
{
    Number number1 = Number(2022);
    Number number2 = Number(3.14);
    cout << "int Number = " << number1.num << endl;
    cout << "double Number = " << number2.num << end;
}

//1 ошибка:18 и 19 строка. Нужно указать тип в <>.
//2 ошибка:20 и 21 строка. Мы не имеем доступ к num тк она в привате