/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:00:00 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/13 07:54:48 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}*/
