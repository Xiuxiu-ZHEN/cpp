#include "PhoneBook.hpp"
#include <sstream>
#include <limits>
#include <cctype>
#include <algorithm>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}
static std::string trim(const std::string &str)
{
	size_t start = 0;
	size_t end = str.length();

	while (start < end && std::isspace(static_cast<unsigned char>(str[start])))
		start++;
	while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
		end--;
	return str.substr(start, end - start);
}

void	PhoneBook::add()
{
	static int	i = 0;
	std::string	input[5];
	std::cout << "\t\tCONTACT INFO" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, input[0]);
	input[0] = trim(input[0]);
	while (input[0].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "First name : ";
		std::getline(std::cin, input[0]);
		input[0] = trim(input[0]);
	}
	std::cout << "Last name : ";
	std::getline(std::cin, input[1]);
	input[1] = trim(input[1]);
	while (input[1].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Last name : ";
		std::getline(std::cin, input[1]);
		input[1] = trim(input[1]);
	}
	std::cout << "Nickname : ";
	std::getline(std::cin, input[2]);
	input[2] = trim(input[2]);
	while (input[2].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Nickname : ";
		std::getline(std::cin, input[2]);
		input[2] = trim(input[2]);
	}
	std::cout << "Number : ";
	std::getline(std::cin, input[3]);
	input[3] = trim(input[3]);
	while (input[3].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Number : ";
		std::getline(std::cin, input[3]);
		input[3] = trim(input[3]);
	}
	std::cout << "Darkest secret : ";
	std::getline(std::cin, input[4]);
	input[4] = trim(input[4]);
	while (input[4].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Darkest secret : ";
		std::getline(std::cin, input[4]);
		input[4] = trim(input[4]);
	}
	Contact c(input);
	contacts[i++ % 8] = c;
}

void PhoneBook::search()
{
    std::string input;
    int index;

    std::cout << "     Index|First name| Last name|  Nickname" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << "         " << i + 1 << "|";
        contacts[i].displayMenu();
    }

    while (true)
    {
        std::cout << "Select contact index : ";

        if (!std::getline(std::cin, input))
            return;

        if (input.length() != 1 || !std::isdigit(input[0]))
        {
            std::cout << "Invalid index" << std::endl;
            continue;
        }

        std::stringstream ss(input);
        ss >> index;

        if (index < 1 || index > 8)
        {
            std::cout << "Invalid index" << std::endl;
            continue;
        }

        if (contacts[index - 1].getfirstname().empty())
        {
            std::cout << "No contact found at index "
                      << index << "." << std::endl;
            return;
        }

        contacts[index - 1].displayContact();
        return;
    }
}