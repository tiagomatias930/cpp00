/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <timatias@student.42luanda.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:52:00 by timatias          #+#    #+#             */
/*   Updated: 2025/01/12 20:47:42 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"
 
int isnum(std::string& num)
{
    if (num.empty())
        return (1);

    for (char ch : num)
    {
        if (ch < '0' || ch > '9')
            return (1);
    }

    return (0);
}

PhoneBook::PhoneBook()
{
    this->_tam = 0;
    _contacts = new Contact[MAX_CONTACT];
    return ;
}

PhoneBook::~PhoneBook(void)
{
    delete [] this->_contacts;
    return ;
}

int     PhoneBook::get_size ()
{
    return (this->_tam);
}

void    PhoneBook::add_list()
{
    std::string first;
    std::string last;
    std::string nick;
    std::string hidden;
    std::string number;
    std::locale local;

    start(first, "FirstName: "); 
     for (std::string::iterator istr = first.begin(); istr != first.end(); ++istr)
    {
    		if (!(std::isalpha(*istr,local)))
      		{		
      			std::cout << "Invalid data please insert again" << std::endl;
      				return; 
      		}
    }
    start(last, "LastName: ");
      for (std::string::iterator istr = last.begin(); istr != last.end(); ++istr)
    {
    		if (!(std::isalpha(*istr,local)))
      		{		
      			std::cout << "Invalid data please insert again" << std::endl;
				return ;
      		}
    }
    start(nick, "NicktName: ");
      for (std::string::iterator istr = nick.begin(); istr != nick.end(); ++istr)
    {
    		if (!(std::isalpha(*istr,local)))
      		{		
      			std::cout << "Invalid data please insert again" << std::endl;
      				return ;
      		}
    }
    start(hidden, "Hidden Secret: ");
    start(number, "Number Phone: ");
    for (std::string::iterator istr = number.begin(); istr != number.end(); ++istr)
    {
    		if (isnum(number) != 0)
   		{
   			std::cout << "number invalid, please Again" << std::endl;
   			return ;
   		}
	}

    if (this->_tam >= MAX_CONTACT)
    {
        this->_tam--;
        for (int i = 0; i < this->_tam; i++)
        {
            this->_contacts[i].set_contacts
            (
                this->_contacts[i+1].get_firstname(), this->_contacts[i+1].get_lastname(),
                this->_contacts[i+1].get_nickname(), this->_contacts[i+1].get_hidden_secret(),
                this->_contacts[i+1].get_number()
            );
        }
    }
	this->_contacts[this->_tam].set_contacts(first, last, nick, hidden, number);
	if (this->_tam < MAX_CONTACT)
		this->_tam++;
}

void	PhoneBook::list_contacts(void)
{
	std::cout << "\t---INDICE----FIRST NAME--LAST_NAME--NICKNAME--" << std::endl;
	for (int i = 0; i < this->_tam; i++)
	{
		std::cout << "\t|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << this->_contacts[i].get_firstname(10);
		std::cout << "|" << std::setw(10) << this->_contacts[i].get_lastname(10);
		std::cout << "|" << std::setw(10) << this->_contacts[i].get_nickname(10);
		std::cout << "|" << std::endl;
	}
	std::cout << "\t______________________________________________________" << std::endl;
}

void	PhoneBook::show_contact(int indece)
{
	if (indece < this->_tam && indece >= 0)
		this->_contacts[indece].get_contacts();
	else
		std::cout << "\tIndex must be between 0 and " << this->_tam - 1 << std::endl;
}
