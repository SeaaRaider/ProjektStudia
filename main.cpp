#include <iostream>

using namespace std;

float InsertLoop(string kwota)
{
    cout << "Wprowadz kwote potwierdzajac ENTER \n";
    while(true)
    {
        cin >> kwota;
        //getline(cin, kwota);
        if(kwota.empty())
        {
            break;
        }
        else if(kwota.empty() == false)
        {
            return stof(kwota);
        }
        else
        {
            cout << "Error \n";
        }
    }
}

int main()
{
    float wynagrodzenia[] = {};


    return 0;
}