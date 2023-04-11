/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:19:40 by krochefo          #+#    #+#             */
/*   Updated: 2022/12/06 18:46:08 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	(void)argc;
	int i, j;

	j = 1;
	if (argc <= 1)
	{
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				argv[j][i] = std::toupper(argv[j][i]);
				i++;
			}
			std::cout << argv[j];
			j++;
		}	
	}
	return 0;	
}
