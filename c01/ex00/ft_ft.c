/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:00:00 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/25 11:50:44 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ft(int nbr)
{
	nbr = 42;
	printf("dans la fonction : %d", nbr);
}

int	main(void)
{
	int	n;

	n = 14;
	ft_ft(n);
	printf("dans le main : %d", n);
	return (0);
}
