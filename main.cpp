#include <iostream>
#include <fstream>

using namespace std;

void olkusz(string pracownik)
{
    ofstream moj_plik("olkusz.txt");
    moj_plik << pracownik;
    moj_plik.close();
}

void katowice(string pracownik)
{
    ofstream moj_plik("katowice.txt");
    moj_plik << pracownik;
    moj_plik.close();
}

void warszawa(string pracownik)
{
    ofstream moj_plik("warszawa.txt");
    moj_plik << pracownik;
    moj_plik.close();
}

int main()
{

    int x = (rand()%3)+1;
    string pracownik;

    cout << x << "\n\n";

    cout << "Imie i nazwisko pracownika: ";
    getline(cin, pracownik);

    switch(x)
    {
    case 1:
        olkusz(pracownik);
        break;
    case 2:
        katowice(pracownik);
        break;
    case 3:
        warszawa(pracownik);
        break;
    }

main();

    return 0;
}
