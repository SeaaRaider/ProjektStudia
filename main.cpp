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
    string kwota;
    float wynagrodzenia[] = {};

    for(int i=0; true; i++)
    {
        wynagrodzenia[i] = InsertLoop(kwota);
    }

    return 0;
}