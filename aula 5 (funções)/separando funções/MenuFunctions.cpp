#include <iostream>
#include "MenuFunctions.h"
using namespace std;

int readChoice ()
{
  int choice;

  cout << "Choose your option: ";
  cin >> choice;

  return choice;
}

void showMainMenu ()
{
  int choice;
  do
  {
    cout << "-=-=-=-=-=-=-=- Welcome to Kinoplex first website! -=-=-=-=-=-=-=-" << endl
         << "                       1 - Buy a ticket                           " << endl
         << "                       2 - See on diplay movies                   " << endl
         << "                       3 - Exit                                   " << endl;

    choice = readChoice();

  } while (choice != 3);
}

void showMoviesOnDisplay ()
{
  cout << "-=-=-=-=-=-=-=- Kinoplex - Movies on display now: -=-=-=-=-=-=-=-" << endl
       << "                        1 - The Eternals (2021)                  " << endl
       << "                        2 - Toy Story 6: Revenge (2021)          " << endl
       << "                        3 - Bolsonaro: how to destroy your nation (2021)" << endl;
}

void processTicketBuying ( int type, int amount, int choosenMovie)
{
  float price;

  if ((type != 1 && type != 2 && type != 3) || amount >= 50)
  {
    showTicketBuyingMenu(choosenMovie);
    return;
  }
  
  switch (type)
  {
    case 1:
      price = 27.50 * amount;
      break;
    
    case 2:
      price = 13.75 * amount;
      break;
    case 3:
      price = 0;
      break;
  }

  switch (choosenMovie)
  {
    case 1:
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
      printf( "    Ticket for The Eternals successfuly buyed! Price: %.2f     ", price);
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
      return showMenus(0);
  
    case 2:
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
      printf( " Ticket for Toy Story 6: revenge successfuly buyed! Price: %.2f", price);
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
      return showMenus(0);
    case 3:
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
      printf( "Ticket for Bolsonaro: how to destroy your nation successfuly buyed! Price: %.2f", price);
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
      return showMenus(0);
  }
}

void showTicketBuyingMenu (int choosenMovie)
{
  int ticketChoice, ticketAmount, choosenMovie;
  cout << "-=-=-=-=-=-=-=--=-=-=-=-=- Kinoplex -=-=-=-=-=--=-=-=-=-=-=-=-" << endl;
  switch (choosenMovie)
  {
    case 1:
      cout << "                Movie choosen: The Eternals (2021)            " << endl
           << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
           << endl
           << "                          Ticket type:                        " << endl
           << "                           1 - Half                           " << endl
           << "                           2 - Full                           " << endl;
      ticketChoice = readChoice();
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
           << "                        Ticket amount:                         " << endl;
      ticketAmount = readChoice();

      return processTicketBuying(ticketChoice, ticketAmount, choosenMovie);
    
    case 2:
      cout << "               Movie choosen: Toy Story 6: Revenge             " << endl
           << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
           << "                          Ticket type:                         " << endl
           << "                           1 - Half                            " << endl
           << "                           2 - Full                            " << endl
           << "                           3 - Kid                             " << endl;
      ticketChoice = readChoice();
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
            << "                       Ticket amount:                         " << endl;
      ticketAmount = readChoice();

      return processTicketBuying(ticketChoice, ticketAmount, choosenMovie);

    case 3:
      cout << "  Movie choosen: Bolsonaro: how to destroy your nation (2021)  " << endl
           << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
           << "                          Ticket type:                         " << endl
           << "                           1 - Half                            " << endl
           << "                           2 - Full                            " << endl;
      ticketChoice = readChoice();
      cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
           << "                      Ticket amount:                           " << endl;
      ticketAmount = readChoice();

      return processTicketBuying(ticketChoice, ticketAmount, choosenMovie);
  
    default:
      cout << "An error has occurred!";
      exit(0);
      return;
  }
}

void showMoviesMenu ()
{
  showMoviesOnDisplay();
  showTicketBuyingMenu(readChoice());
}

void showMenus (int choice)
{
  switch (choice)
  {
    case 1:
      showMoviesMenu();
      return showMenus(0);
    
    case 2:
      showMoviesOnDisplay();
      system("PAUSE");
      return showMenus(0);
    
    case 3:
      cout << "Ending the web program...";
      exit(0);
      return;

    default:
      showMainMenu();
      return;
  }
}

