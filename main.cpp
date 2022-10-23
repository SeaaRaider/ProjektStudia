#include <iostream>
#include <cmath>

using namespace std;

float InsertNumberLoop()
{
    float number = 0;

    cout << "Wprowadz kwote potwierdzajac ENTER \n";
    while(true)
    {
        cin >> number;
        //getline(cin, number);
        if(isnan(number))
        {
            break;
            
        }
        else if(!isnan(number))
        {
            return number;
        }
    }
}

int main()
{
    string number;
    float wynagrodzenia[100] = {};

    for(int i=0; true; i++)
    {
        cout << InsertNumberLoop();
    }

    return 0;
}