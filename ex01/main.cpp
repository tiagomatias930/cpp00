/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <timatias@student.42luanda.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:39:56 by timatias          #+#    #+#             */
/*   Updated: 2025/01/12 20:53:02 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"
#include <cstring>

bool ft_is_num(std::string num)
{
    if ((num >= "0" && num <= "9") && num != "-")
        return(true);
    return (false);
}

void	start(std::string &str, std::string text)
{
	str.clear();
	while (str.empty())
	{
		std::cout << text;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
	}
}

int main()
{
    PhoneBook phone;
    bool        run;
    
    run = true;
    std::cout << std::setw(32) << "\t\t\tWelcome to the  \"PhoneBook Application\"" << std::endl;
    std::cout << std::setw(22) << "\t\t\t\t\tMenu PhoneBook" << std::endl;
    std::cout << "We haves to  You Three opction:  ADD, SEARCH & EXIT" << std::endl;
    
    while (run)
	{
		std::string _start;
		start(_start, "What's your choice ==> ");

		if (!_start.compare("ADD"))
			phone.add_list();
		else if (!_start.compare("EXIT"))
			run = false;
		else if (!_start.compare("SEARCH"))
		{
			if (phone.get_size() > 0)
			{
				std::string	index;
				phone.list_contacts();
				start(index, "\tIndex to display: ");
				std::cout << std::endl;
				if (ft_is_num(index))
					phone.show_contact(atoi(index.c_str()));
				else
					std::cout << "\tPlease choice someone opction" << std::endl;
				std::cout << std::endl;
			}
			else
				std::cout << "\tNothing to show" << std::endl;
		}
		else if (_start.length() > 0)
			std::cout << "Error : This phonebook only accepts the ADD, SEARCH, EXIT or INFO commands." << std::endl;
    			if (std::cin.eof())
				break;
	}
    return (0);
}
