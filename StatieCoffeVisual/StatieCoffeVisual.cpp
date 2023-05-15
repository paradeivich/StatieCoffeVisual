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
    void preparareBautura(Coffe &coffe, int zahar)
    {
        cout << endl << "Se prepara bautura: " << coffe.getName() << endl;
        cout << coffe.getCoffe() << "ml coffe: ";
        cout << coffe.getGramsOfMilk() << "ml milk: ";
        cout << zahar * 10 << "mg sugar: " << endl;
        cout << "\n";
    }
    void makeExpresso(int zahar)
    {
        ExpressoCoffe coffe;
        preparareBautura(coffe, zahar);
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

int main()
{
    MenuCoffe();
    int opt;
    do
    {
        cin >> opt;
        switch (opt)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        }
        
    }
    while (opt != 10);

    return 0;

}



