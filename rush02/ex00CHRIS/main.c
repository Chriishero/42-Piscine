/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:42:33 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/27 12:57:17 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int	i;
	char	*dict_content;
	char	**nbr_parse;

	if (argc == 2)
	{
		dict_content = ft_readdict("numbers.dict");
		nbr_parse = ft_parsingnbr(argv[1], dict_content);
		i = 0;
		while (nbr_parse[i])
		{
			ft_putstr(nbr_parse[i]);
			if (nbr_parse[i + 1])
				ft_putstr(" ");
			i++;
		}
	}
	else if (argc == 3)
	{}
}
