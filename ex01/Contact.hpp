/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <timatias@student.42luanda.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 09:11:11 by timatias          #+#    #+#             */
/*   Updated: 2025/01/12 16:06:42 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CONTACT_HPP
# define CONTACT_HPP

# include "app.hpp"

class Contact
{
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _hidden_secret;
        std::string _number;

    public:
        Contact();
        ~Contact();
        void    set_contacts(std::string firstname, std::string lastname, std::string nickname, std::string hidden_secret, std::string number);
        std::string    get_firstname(long unsigned int size = -1);
        std::string    get_lastname(long unsigned int size = -1);
        std::string    get_nickname(long unsigned int size = -1);
        std::string    get_hidden_secret(void);
        std::string get_number(void);
        void    get_contacts(void);
};

#endif

