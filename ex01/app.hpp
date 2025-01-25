/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <timatias@student.42luanda.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 19:01:09 by timatias          #+#    #+#             */
/*   Updated: 2025/01/12 20:50:02 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APP_HPP
# define APP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <stdlib.h>
# include <limits>
# include <locale>
# include <cstring>
# include <csignal>
# include "Contact.hpp"
# include "PhoneBook.hpp"

void	start(std::string &str, std::string text);
int isnum(std::string& num);

#endif
