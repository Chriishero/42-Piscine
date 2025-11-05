/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:00:00 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/13 07:56:11 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	temp_tab[1024];

	j = 0;
	i = size - 1;
	while (i >= 0)
	{
		temp_tab[j] = tab[i];
		j++;
		i--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp_tab[i];
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];

	tab[0] = 14;
	tab[1] = 5;
	tab[2] = 3;
	tab[3] = 15;
	tab[4] = 65;
	ft_rev_int_tab(tab, 5);
	return (0);
}*/
