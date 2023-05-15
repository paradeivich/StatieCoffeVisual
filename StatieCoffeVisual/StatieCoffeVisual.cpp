#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Coffe.h"
#include "LatteCream.h"
#include "HotChocolatte.h"
#include "Americano.h"
#include "Mocha.h"
#include "Espresso.h"
#include "Irish.h"
#include "LatteCoffe.h"
#include "Cappucino.h"
using namespace std;

class PreparareCoffe
{
public:
    void preparareBautura(Coffe &coffe, int zahar)
    {
        cout << endl << "Se prepara bautura: " << coffe.getName() << endl;
        Sleep(5000);
        cout << coffe.getCoffe() << "ml coffe.. ";
        Sleep(3000);
        cout << coffe.getGramsOfMilk() << "ml milk.. ";
        Sleep(2000);
        cout << zahar * 10 << "mg sugar.. " << endl;
        Sleep(1000);
        cout << "\n";
        cout << "Bautura dumneavoastra a fost preparata ! Va rugam ridicati paharul!" << endl << endl;
    }
    void makeLatteCoffe(int zahar)
    {
        LatteCoffe coffe;
        preparareBautura(coffe, zahar);
    };

    void makeIrish(int zahar)
    {
        Irish coffe;
        preparareBautura(coffe, zahar);
    };

    void makeEspresso(int zahar)
    {
        Espresso coffe;
        preparareBautura(coffe, zahar);
    };
    void makeMocha(int zahar)
    {
        Mocha coffe;
        preparareBautura(coffe, zahar);
    };
    void makeCappuccino(int zahar)
    {
        Cappucino coffe;
        preparareBautura(coffe, zahar);
    };
    void makeAmericano(int zahar)
    {
        Americano coffe;
        preparareBautura(coffe, zahar);
    };
    void makeHotChocolatte(int zahar)
    {
        HotChocolatte coffe;
        preparareBautura(coffe, zahar);
    };
    void makeLatteCream(int zahar)
    {
        LatteCream coffe;
        preparareBautura(coffe, zahar);
    };
    

};
void MenuCoffe()
{
    cout << "______________________________Automat cafea___________________________" << endl;
    cout << "\n" << endl;
    cout << "1. Americano                           2. Espresso " << endl;
    cout << "3. Mocha                               4. Latte" << endl;
    cout << "5. Cappuccino                          6. Irish" << endl;
    cout << "7. Ciocolata Calda                     8. Spuma de lapte" << endl;
    cout << "\n9. Exit" << endl;
    cout << "____________________________________________________________________________" << endl;
    cout << endl << "                          Alegeti optiunea: ";
}
int citireSuma(int drinkCost)
{
    int sum;
    cout << endl << "Pret: " << drinkCost << " lei. Introduceti suma: ";
    cin >> sum;
    return sum;
}
bool costIsValid(int userInput, int cost)
{
    if (userInput < cost)
    {
        cout << endl << "Nu ati introdus suma necesara! ";
        return false;
    }
    return true;
}
void proceseazaRestul(int userInput, int cost)
{
    cout << endl << "Rest: " << (userInput - cost) << "lei";
}
int citireZahar()
{
    int level;
    cout << "NIVEL De Zahar (1-5): ";
    cin >> level;
    return level;
}


int main()
{
    PreparareCoffe preparareCoffe;

    MenuCoffe();
    int opt;
    do
    {
        cin >> opt;
        int userInput, nivelZahar;
        switch (opt)
        {
        case 1:
            userInput = citireSuma(5);
            if (costIsValid(userInput, 5))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeIrish(nivelZahar);
                proceseazaRestul(userInput, 5);
            }
            break;
        case 2:
            userInput = citireSuma(9);
            if (costIsValid(userInput, 9))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeEspresso(nivelZahar);
                proceseazaRestul(userInput, 9);
            }
            break;
        case 3:
            userInput = citireSuma(10);
            if (costIsValid(userInput, 10))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeMocha(nivelZahar);
                proceseazaRestul(userInput, 10);
            }
            break;
        case 4:
            userInput = citireSuma(8);
            if (costIsValid(userInput, 8))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeLatteCoffe(nivelZahar);
                proceseazaRestul(userInput, 8);
            }
            break;
        case 5:
            userInput = citireSuma(4);
            if (costIsValid(userInput, 4))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeCappuccino(nivelZahar);
                proceseazaRestul(userInput, 4);
            }
            break;
        case 6:
            userInput = citireSuma(4);
            if (costIsValid(userInput, 4))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeAmericano(nivelZahar);
                proceseazaRestul(userInput, 4);
            }
            break;
        case 7:
            userInput = citireSuma(9);
            if (costIsValid(userInput, 9))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeHotChocolatte(nivelZahar);
                proceseazaRestul(userInput, 9);
            }
            break;
        case 8:
            userInput = citireSuma(6);
            if (costIsValid(userInput, 6))
            {
                nivelZahar = citireZahar();
                preparareCoffe.makeLatteCream(nivelZahar);
                proceseazaRestul(userInput, 6);
            }
            break;
            
        case 9:
            return 0;
        default:
            cout << "Ati ales o optiune gresita! Reintroduceti alta optiune valida:" << endl << endl;
            MenuCoffe();
        }
        
    }
    while (opt != 10);

    return 0;

}



