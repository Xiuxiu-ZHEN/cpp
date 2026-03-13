#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook pb;
    std::string input;

    while (true)
    {
        std::cout << "PhoneBook> ";
        if (!std::getline(std::cin, input))
            break;
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            pb.add();
        else if (input == "SEARCH")
            pb.search();
        else if (!input.empty())
            std::cout << "Invalid command" << std::endl;
    }
    return 0;
}