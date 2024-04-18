#include "Implementari.h"

void runCoffeeShop(int type)
{
    const char* X = R""""(Va rugam sa alegeti cafeaua dorita
    1. Latte
    2.Americano                               
    3.Espresso                
    4.Cappucino                
    5.Macchiato     )"""";

    std::cout << X << std::endl;
    std::cin >> type;

    switch (type)
    {
    default:
    {
        std::cout << "Cafeaua introdusa nu se afla in meniul nostru. Va rugam sa alegeti din nou: " << std::endl;
        std::cout << "Daca doriti sa alegeti din nou apasati 1, pentru iesire apasati 0." << std::endl;
        char a;
        std::cin >> a;
        if (a == '1')
        {
            runCoffeeShop(type);
            break;
        }
        else {
            break;
        }
    }
    case 1:
    {
        std::cout << "Ati selectat Latte!" << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "Ati selectat Americano!" << std::endl;
        break;
    }
    case 3:
    {
        std::cout << "Ati selectat Espresso!" << std::endl;
        break;
    }
    case 4:
    {
        std::cout << "Ati selectat Cappucino!" << std::endl;
        break;
    }
    case 5:
    {
        std::cout << "Ati selectat Macchiato!" << std::endl;
        break;
    }
    }
    //}
}
int returnCosturiDeArtist(int numarCulori)
{
    float pretBaza = 40.00;
    float pretCuloare = 5.00;
    float total = pretBaza + pretCuloare * numarCulori;
    int taxa = 10 / 100.0 * total;
    total += (int) + taxa;
    return total;
}
void Gotham(int criminal_activity_level)
{
    std::string gotham = "Welcome to GOTHAM city!\nIs Batman going to help you today?\nPlease input the criminal activity level below: ";
    std::string alone = "I can handle it, thanks!";
    std::string help = "I need your help, Batman!";
    std::string glhf = "Good luck, Batman! Handle it!";
    std::cout << gotham << std::endl;
    std::cin >> criminal_activity_level;

    if (criminal_activity_level < 5 && criminal_activity_level != 0)
    {
        criminal_activity_level = 1;
    }
    else if (criminal_activity_level >= 5 && criminal_activity_level < 10)
    {
        criminal_activity_level = 2;
    }
    else if (criminal_activity_level > 10)
    {
        criminal_activity_level = 3;
    }
    else
        criminal_activity_level = 0;

    switch (criminal_activity_level)
    {
        case 1:
        {
            std::cout << alone << std::endl;
            break;
        }
        case 2:
        {
            std::cout << help << std::endl;
            break;
        }
        case 3:
        {
            std::cout << glhf << std::endl;
            break;
        }
        default:
        { 
            std::cout << "Some crime has to happen, the level can't be 0!" << std::endl;
            break;
        }
        
    }
}
void RockPaperScissors(int choice)
{

    const char* X = R""""(Pentru inceperea jocului, va rugam sa alegeti
    1.Piatra
    2.Foarfece
    3.Hartie)"""";
    
    //srand(time(0));
    int computerChoice = rand() % 3 + 1;
    std::string pc;
    if (computerChoice == 1)
        pc = "Piatra";
    else if (computerChoice == 2)
        pc = "Foarfeca";
    else
        pc = "Hartie";


    std::cout << X << std::endl;
    std::cin >> choice;
    if (choice > 3 || choice < 0)
        std::cout << "Optiune incorecta, alegeti din nou" << std::endl;
        std::cin >> choice;

    switch (choice)
    {
        case 1:
        {
        
            std::cout << "Ati ales Piatra, computerul a ales " << pc << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "Ati ales Foarfeca, computerul a ales " << pc << std::endl;
            break;
        }
        case 3:
        {
            std::cout << "Ati ales Hartie, computerul a ales " << pc << std::endl;
            break;
        }
    }
     
    switch (choice)
    {
    case 1:
    {
        if (computerChoice == 1)
        {
            std::cout << "REMIZA!" << std::endl;
        }
       else if (computerChoice == 2)
        {
            std::cout << "Ati castigat, computerul a pierdut!" << std::endl;
        }
       else
        {
            std::cout << "Ati pierdut, computerul a castigat!" << std::endl;
        }
        break;
    }
    case 2:
    {
        if (computerChoice == 1)
        {
            std::cout << "Ati pierdut, computerul a castigat!" << std::endl;

        }
        else if (computerChoice == 2)
        {
            std::cout << "REMIZA!" << std::endl;
        }
        else
        {
            std::cout << "Ati castigat, computerul a pierdut!" << std::endl;
        }
        break;
    }
    case 3:
    {
        if (computerChoice == 1)
        {
            std::cout << "Ati castigat, computerul a pierdut!" << std::endl;
        }
        else if (computerChoice == 2)
        {
            std::cout << "Ati pierdut, computerul a castigat!" << std::endl;
        }
        else
        {
            std::cout << "REMIZA!" << std::endl;
        }
        break;
    }
    }



}

