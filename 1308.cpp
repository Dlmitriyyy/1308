#include <iostream>
using namespace std;

bool simple_number(int number) 
{
    if (number <= 1) 
    {
        return false;
    }
    if (number <= 3) 
    {
        return true;
    }
    if (number % 2 == 0) 
    {
        return false;
    }
    for (int a = 3; a * a <= number; a += 2) 
    {
        if (number % a == 0) {
            return false;
        }
    }
    return true;
}

int main() 
{
    system("chcp 1251 > nul");

    int choice, number;

    cout << "Ця програма перевіряє, чи є введене число простим." << endl;

    do {
        cout << endl << "Введіть 0 для перевірки чи є число простим або довільне число для завершення програми: ";
        cin >> choice;

        if (choice == 0) 
        {
            cout << endl << "Введіть число для перевірки: ";
            cin >> number;
        }
        else 
        {
            cout << endl << "Ви завершили програму." << endl;
            break;
        }

        if (number >= 0)
        {
            if (simple_number(number)) 
            {
                cout << endl << "Число " << number << " це просте число." << endl;
            }
            else 
            {
                cout << endl <<"Число " << number << " не є простим числом." << endl;
            }
        }
        else 
        {
            cout << endl << "Число має бути невід'ємним." << endl;
        }
    } 
    while (true);

    return 0;
}
