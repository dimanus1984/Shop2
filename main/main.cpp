#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void Price(string p_name[], float p_price[])
{
    int pos, n, sum = 0, i;
    int stop = false;
    cout << "В магазине имеются 10 продуктов:\n";
    for (int i = 0; i < 10; i++)
        cout << setw(2) << i + 1 << ". " << setw(8) << p_name[i] << setw (8) << "    Цена:" << setw(8) << p_price[i] << "\n";
    for (;;)
    {
        cout << "\nЧто будете покупать? <1>-перейти к выбору, <0>-хватит\n";
        cin >> stop;
        if ((stop > 1) || (stop < 0)) continue;
        if (!stop)
        {
            cout << "\n==================================\n";
            cout << "Итого к оплате: " << sum << " руб.\n";
            cout << "\n==================================\n";
            break;
        }
        else
        {
            cout << "Введите № товара: ";
            cin >> pos;
            pos--;
            cout << "Введите количество: ";
            cin >> n;
            sum += n * p_price[pos];
            cout << "Промежуточная сумма: " << sum << " руб.\n";
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int pos, n, sum = 0, i;
    int stop = false;
    string p_name[] = { "Молоко","Масло","Яблоки","Kinder","Соки","Пряники","Банан","Сахар","Соль","Мука" }; 
    float p_price[] = { 70.50, 100.40, 65.90, 75.0, 80.00, 40.00, 65.50, 45.50, 35.0, 90.00 };
    Price(p_name, p_price);
    cin >> n;
    return 0;
}