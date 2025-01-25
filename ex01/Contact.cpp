/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <timatias@student.42luanda.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 09:15:46 by timatias          #+#    #+#             */
/*   Updated: 2025/01/12 16:10:12 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void    Contact::set_contacts(std::string firstname, std::string lastname, std::string nickname, std::string hidden_secret, std::string number)
{
    this->_firstname = firstname;
    this->_lastname = lastname;
    this->_nickname = nickname;
    this->_hidden_secret = hidden_secret;
    this->_number = number;
}

std::string    Contact::get_firstname(long unsigned int tam)
{
    std::string first;

    if (tam > 0 && this->_firstname.length() > tam)
    {
        first = this->_firstname.substr(0, tam -1);
        first.push_back('.');
        return (first);
    }
    return (this->_firstname);
}

std::string    Contact::get_lastname(long unsigned int tam)
{
    if (tam > 0 && this->_lastname.length() > tam)
    {
        std::string last = this->_lastname.substr(0, tam -1);
        last.push_back('.');
        return (last);
    }
    return (this->_lastname);
}

std::string    Contact::get_nickname(long unsigned int tam)
{
    if (tam > 0 && this->_nickname.length() > tam)
    {
        std::string nick = this->_nickname.substr(0, tam -1);
        nick.push_back('.');
        return (nick);
    }
    return (this->_nickname);
}

std::string     Contact::get_hidden_secret(void)
{
    return (this->_hidden_secret);
}

std::string Contact::get_number(void)
{
    return (this->_number);
}

void    Contact::get_contacts(void)
{
    std::cout << "Firstname: " << this->_firstname << std::endl;
    std::cout << "Lastname: " << this->_lastname << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Hidden Secret: " << this->_hidden_secret << std::endl;
    std::cout << "Number: " << this->_number << std::endl;
}
