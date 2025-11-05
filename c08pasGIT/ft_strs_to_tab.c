/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:31:29 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/28 11:26:59 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*duplicate;

	duplicate = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (str[i])
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	if (ac < 1)
		return (NULL);
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac && av[i + 1])
	{
		tab[i].size = ft_strlen(av[i + 1]);
		tab[i].str = av[i + 1];
		tab[i].copy = ft_strdup(av[i] + 1);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	char	*s;
	char	*c;

	while(par->str)
	{
		s = par->str;
		while (*s)
			ft_putchar(*s++);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		c = par->copy;
		while (*c)
			ft_putchar(*c++);
		ft_putchar('\n');
		par++;
	}
}

int	main(int argc, char *argv[])
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}*/
