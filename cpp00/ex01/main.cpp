/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:03:32 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 14:19:03 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <cstdlib>

static std::string	getUserInput(std::string prompt)
{
	std::string	userInputStr;

	std::cout << prompt;
	std::getline(std::cin, userInputStr);
	return (userInputStr);
}

static std::string	getPhoneNumberUserInput(std::string prompt)
{
	std::string	userInputStr;
	int			i;
	bool		number;

	number = false;
	while (!std::cin.eof() && !number)
	{
		number = true;
		std::cout << prompt;
		std::getline(std::cin, userInputStr);
		i = 0;
		if (userInputStr[i] == '+')
			i++;
		for (; userInputStr[i] != '\0'; i++)
			if ((userInputStr[i] < '0' || userInputStr[i] > '9') && \
				userInputStr[i] != ' ')
				number = false;
		if (!number)
			std::cout << "Expected valid phone number" << std::endl;
	}
	return (userInputStr);
}

static void	addContact(PhoneBook *phonebook)
{
	std::string	firstName;
	std::string	lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	while (!std::cin.eof() && (firstName = getUserInput("input > firstName > ")) == "");
	while (!std::cin.eof() && (lastName = getUserInput("input > lastName > ")) == "");
	while (!std::cin.eof() && (nickName = getUserInput("input > nickName > ")) == "");
	while (!std::cin.eof() && (phoneNumber = getPhoneNumberUserInput("input > phoneNumber > ")) == "");
	while (!std::cin.eof() && (darkestSecret = getUserInput("input > darkestSecret > ")) == "");
	if (!std::cin.eof())
		phonebook->AddContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}

static bool	isNumber(std::string str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
		if (!std::isdigit(str[i++]))
			return (false);
	return (true);
}

static bool	isOutOfRange(int index, int maxRange)
{
	return (index <= 0 || index > maxRange);
}

static void	searchContact(PhoneBook phonebook)
{
	std::string	input;
	int			index;
	int			contactArrSize;

	phonebook.DisplayContactList();
	contactArrSize = phonebook.GetContactArrSize();
	while (!std::cin.eof() && contactArrSize > 0)
	{
		input = getUserInput("input > index > ");
		if (std::cin.eof())
			break ;
		if (!isNumber(input))
		{
			std::cout << "Write an valid number" << std::endl;
			continue ;
		}
		index = std::atoi(input.c_str());
		if (isOutOfRange(index, contactArrSize))
		{
			std::cout << "Out of range" << std::endl;
			continue ;
		}
		break;
	}
	if (!isOutOfRange(index, contactArrSize))
		phonebook.DisplayContact(index);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	userInputStr;
	
	while (!std::cin.eof())
	{
		userInputStr = getUserInput("input> ");
		if (std::cin.eof())
			break ;
		if (userInputStr == "ADD")
			addContact(&phonebook);
		else if (userInputStr == "SEARCH")
			searchContact(phonebook);
		else if (userInputStr == "EXIT")
			break ;
		else if (userInputStr == "")
			continue ;
		else
			std::cout << "Available command: 'ADD' 'SEARCH' 'EXIT'" << std::endl;
	}
}
