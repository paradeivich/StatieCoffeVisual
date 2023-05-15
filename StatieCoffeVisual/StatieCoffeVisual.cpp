#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Coffe.h"
#include "LatteCream.h"
#include "HotChocolatte.h"
#include "ArabicCoffe.h"
#include "LongExpresso.h"
#include "ShortExpresso.h"
#include "ExpressoCoffe.h"
#include "LatteCoffe.h"
#include "Cappucino.h"
using namespace std;

class PreparareCoffe
{
public:
    void preparareBautura(Coffe &coffe, int sugar)
    {
        cout << endl << "Se prepara bautura: " << coffe.getName() << endl;
        cout << coffe.getCoffe() << "ml coffe: ";
        cout << coffe.getGramsOfMilk() << "ml milk: ";
        cout << sugar * 10 << "mg sugar: " << endl;
        cout << "\n";
    }
    void makeLatteCoffe(int sugar)
    {
        LatteCoffe coffe;
        preparareBautura(coffe, sugar);
    };

    void makeExpresso(int sugar)
    {
        ExpressoCoffe coffe;
        preparareBautura(coffe, sugar);
    };

    void makeShortExpresso(int sugar)
    {
        ShortExpresso coffe;
        preparareBautura(coffe, sugar);
    };
    void makeLongExpresso(int sugar)
    {
        LongExpresso coffe;
        preparareBautura(coffe, sugar);
    };
    void makeCappuccino(int sugar)
    {
        Cappucino coffe;
        preparareBautura(coffe, sugar);
    };
    void makeArabicCoffe(int sugar)
    {
        ArabicCoffe coffe;
        preparareBautura(coffe, sugar);
    };
    void makeHotChocolatte(int sugar)
    {
        HotChocolatte coffe;
        preparareBautura(coffe, sugar);
    };
    void makeLatteCream(int sugar)
    {
        LatteCream coffe;
        preparareBautura(coffe, sugar);
    };
    

};
void MenuCoffe()
{
    cout << "Aparat de cafea:" << "\n" << endl;
    cout << "1. Cafea Expresso         2. Expresso Scurt " << endl;
    cout << "3. Expresso Lung          4. Cafea Latte" << endl;
    cout << "5. Cappuccino             6. Cafea Arabica" << endl;
    cout << "7. Ciocolata Calda        8. Spuma de lapte" << endl;
    cout << "9. Exit" << endl;
    cout << endl << "Alegeti optiunea: ";
}
int readMoney(int drinkCost)
{
    int sum;
    cout << endl << "Pret: " << drinkCost << "Introduceti suma: .";
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
int readSugar()
{
    int level;
    cout << "Selectati NIVELUL de zahar dorit (1-5)";
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
            userInput = readMoney(5);
            if (costIsValid(userInput, 5))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeExpresso(nivelZahar);
                proceseazaRestul(userInput, 5);
            }
            break;
        case 2:
            userInput = readMoney(9);
            if (costIsValid(userInput, 9))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeShortExpresso(nivelZahar);
                proceseazaRestul(userInput, 9);
            }
            break;
        case 3:
            userInput = readMoney(10);
            if (costIsValid(userInput, 10))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeLongExpresso(nivelZahar);
                proceseazaRestul(userInput, 10);
            }
            break;
        case 4:
            userInput = readMoney(8);
            if (costIsValid(userInput, 8))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeLatteCoffe(nivelZahar);
                proceseazaRestul(userInput, 8);
            }
            break;
        case 5:
            userInput = readMoney(4);
            if (costIsValid(userInput, 4))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeCappuccino(nivelZahar);
                proceseazaRestul(userInput, 4);
            }
            break;
        case 6:
            userInput = readMoney(12);
            if (costIsValid(userInput, 12))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeArabicCoffe(nivelZahar);
                proceseazaRestul(userInput, 12);
            }
            break;
        case 7:
            userInput = readMoney(9);
            if (costIsValid(userInput, 9))
            {
                nivelZahar = readSugar();
                preparareCoffe.makeHotChocolatte(nivelZahar);
                proceseazaRestul(userInput, 9);
            }
            break;
        case 8:
            userInput = readMoney(6);
            if (costIsValid(userInput, 6))
            {
                nivelZahar = readSugar();
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



