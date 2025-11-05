/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 08:31:50 by cvillene          #+#    #+#             */
/*   Updated: 2025/08/01 08:45:35 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (-1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *nb, char *base)
{
	int	n;
	int	sign;
	int	j;
	int	digit;
	int	i;

	if (ft_check_base(base) == -1)
		return (0);
	n = 0;
	sign = 1;
	i = 0;
	while (nb[i] == ' ' || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '+' || nb[i] == '-')
	{
		i++;
		if (nb[i] == '-')
			sign = -1;
	}
	while (nb[i])
	{
		digit = -1;
		j = 0;
		while (base[j])
		{
			if (nb[i] == base[j])
				digit = j;
			j++;
		}
		if (digit == -1)
			break ;
		n = n * ft_strlen(base) + digit;
		i++;	
	}
	return (n * sign);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
