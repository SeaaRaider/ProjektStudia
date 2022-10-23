#include <iostream>
#include <cmath>

using namespace std;

void Insert(float arr[])
{
    float liczba = 0;

    cout << "Wpisz dane i potwierdz klikajac ENTER \n";

    for(int i = 0; true; i++)
    {
        cin >> liczba;

        if(isnan(liczba))
            break;
        else
        {
            arr[i] = liczba;
            cout << "Aby zakonczyc wpisywanie kliknij ENTER \n";
        }
    }
}

int main()
{
    float tabela[10] = {};
    int menu = 0;

    cout << "---MENU WYBORU--- \n \n";
    cout << "[1] Wprowadz dane \n";
    cout << "[2] Edytuj dane \n";
    cout << "[3] Wyswietl dane \n";
    cout << "[4] Oblicz srednia\n";
    cout << "[5] Wyszukaj z przedzialu min/max \n";
    cout << "[6] EXIT \n";
    
    while(true)
    {
        cin >> menu;

        // if(!isnan(menu))
        // {
            switch(menu)
            {
                case 1:
                    Insert(tabela);
                    break;
                case 2:
                    break;
                case 3:
                    for(int i = 0; sizeof(tabela) > i; i++)
                    {
                        cout << tabela[i] << " ";
                    }
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    return 0;
                    break;
                default:
                    cout << "Wybierz poprawna cyfre \n";
                    break;
            }
        // }
        // else if(isnan(menu))
        // {
        // cout << "To nie liczba";
        // }

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}