#include "abstrakcyjnafabrykaosob.h"
#include "fabrykabibliotekarzy.h"
#include "fabrykauzytkownikow.h"

 AbstrakcyjnaFabrykaOsob* AbstrakcyjnaFabrykaOsob::wybierzFabryke(RodzajKonta type)
 {
     switch (type)
     {
     case Type_Bibliotekarz:
        return new FabrykaBibliotekarzy();
     case Type_Uzytkownik:
        return new FabrykaUzytkownikow();
     default:
        return new FabrykaUzytkownikow();
     }
 }

 std::string AbstrakcyjnaFabrykaOsob::podajHaslo()
 {
    std::string haslo;
    std::cout << "Podaj haslo dla nowego konta: ";
    std::cin >> haslo;
    std::cout << "\n";
    return haslo;
 }

 std::string AbstrakcyjnaFabrykaOsob::podajLogin()
 {
    std::string login;
    std::cout << "Podaj login dla nowego konta: ";
    std::cin >> login;
    std::cout << "\n";
    return login;
 }

 //bool AbstrakcyjnaFabrykaOsob::podajRodzajKonta()
 //{
 //    bool typKonta;
 //    int wybor;
 //    std::cout << "wpisz 1 aby utworzyc konto uzytkownika \nlub 2 aby utworzyc konto bibliotekarza: ";
 //    std::cin >> wybor;
 //    std::cout << "\n";
 //    if (wybor == 2)
 //    {
 //        typKonta = true;
 //        std::cout << "utworzono konto bibliotekarza\n";
 //    }
 //    else
 //    {
 //        typKonta = false;
 //        std::cout << "utworzono konto uzytkownika\n";
 //    }
 //    return typKonta;
// }
