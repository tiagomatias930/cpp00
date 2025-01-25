/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <debion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 07:04:37 by timatias            #+#    #+#             */
/*   Updated: 2025/01/10 11:17:56 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
	for (int cur = 1; argv[cur] != NULL; ++cur)
	{
		for (int acur = 0; argv[cur][acur]; acur++)
			argv[cur][acur] = std::toupper(argv[cur][acur]);
		std::cout << argv[cur];
	}
	std::cout << std::endl;
	}
	return (0);
}
