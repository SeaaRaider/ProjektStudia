#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

bool isFloat( string myString ) {
    std::istringstream iss(myString);
    float f;
    iss >> noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail(); 
}

void InsertNumber(float arr[], int position, float liczba)
{
    arr[position] = liczba;
}

int main()
{
    float liczba = 0;
    float tabela[10] = {};
    int menu = 0;
    int pozycja = 0;
    bool isExit = false;
    bool czyLiczba = false;

    cout << "---MENU WYBORU--- \n \n";
    cout << "[1] Wprowadz dane \n";
    cout << "[2] Edytuj dane \n";
    cout << "[3] Wyswietl dane \n";
    cout << "[4] Oblicz srednia\n";
    cout << "[5] Wyszukaj z przedzialu min/max \n";
    cout << "[6] EXIT \n";
    
    while(true)
    {
        cout << "Wpisz swoj wybor: \n";
        cin >> menu;

        // if(!isnan(menu))
        // {
            switch(menu)
            {
                case 1:
                    isExit = false;
                    cout << "Wpisz dane i potwierdz klikajac ENTER \nAby wyjsc do menu wpisz EXIT i kliknij ENTER \n";
                    while(isExit == false)
                    {
                        string liczbaString;
                        cin >> liczbaString;

                        if(liczbaString == "EXIT")
                        {
                            isExit = true;
                        }
                        else if(isFloat(liczbaString) == true)
                        {
                            liczba = stof(liczbaString);
                            InsertNumber(tabela, pozycja, liczba);
                            pozycja++;
                        }
                        else
                            cout << "Blad, to nie liczba albo EXIT \n";
                    }
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

        // cin.clear();
        // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}