/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <timatias@student.42luanda.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 09:11:11 by timatias          #+#    #+#             */
/*   Updated: 2025/01/12 17:06:42 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "app.hpp"
# define MAX_CONTACT 8

class PhoneBook
{
    private:
        Contact *_contacts;
        int _tam;
    public:
        PhoneBook();
        ~PhoneBook();
        int get_size();
        void    add_list();
        void    list_contacts();
        void    show_contact(int indece);
};

#endif
