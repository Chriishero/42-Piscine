/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulon <asulon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:10:01 by asulon            #+#    #+#             */
/*   Updated: 2025/07/26 18:59:09 by asulon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define DICTIONARY "numbers.dict"
#define SIZE 100

void	ft_readfile(char *file, char *str);
void	ft_translatenbr(char *str);

int	main(int argc, char *argv[])
{
	if (argc > 1 & argc < 4)
	{
		ft_translatenbr(argv[1]);
		// if (argc == 2)
	}
	else
		ft_putstr("Error0\n");
	return (0);
}

/**
 * Translate str with DICTIONARY file
 */
void	ft_translatenbr(char *str)
{
	ft_readfile(DICTIONARY, str);
}

/**
 * Open and print file
 */
void	ft_readfile(char *filename, char *str)
{
	char	buf[SIZE + 1];
	int		file;
	int		nb_read;

	(void)str;
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (ft_putstr("ERREUR1\n"));
	}
	nb_read = -1;
	while (nb_read != 0)
	{
		nb_read = read(file, buf, SIZE);
		if (nb_read == -1)
		{
			return (ft_putstr("ERREUR2\n"));
		}
		buf[nb_read] = '\0';
		printf("%d", nb_read);
		ft_putstr(buf);
	}
	close(file);
}

void	ft_parse(void)
{
}
