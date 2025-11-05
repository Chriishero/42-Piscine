/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 07:53:04 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/13 10:57:11 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	char_to_hexadecimal_address(void *addr)
{
	unsigned long	n;
	char	*base16;
	int	i;
	char	buffer[16];
	int	j;

	n = (unsigned long)addr;
	base16 = "0123456789abcdef";
	i = 0;

	if (n == 0)
	{
		return;
	}
	while (n > 0)
	{
		buffer[i++] = base16[n % 16];
		n /= 16;
	}
	j = 16 - i;
	while (j-- > 0)
	{
		write(1, "0", 1);
	}
	while (i-- > 0)
	{
		write(1, &buffer[i], 1);
	}
}

void char_to_hexadecimal(char c)
{
	char	*base16;
	char	hex[3];

	base16 = "0123456789abcdef";
	hex[0] = base16[c / 16];
	hex[1] = base16[c % 16];
	write(1, hex, 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;
	unsigned int	i;

	if (size == 0)
	{
		return (0);
	}
	str = (char *)addr;
	i = 0;
	while(i < size)
	{
		if (i == 0)
		{
			char_to_hexadecimal_address(&str[i]);
			write(1, ": ", 2);		
		}
		else if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
		char_to_hexadecimal(str[i]);
		i++;
	}
	write(1, " ", 1);
	i = 0;
	while (i < size)
	{
		if (str[i] < ' ')
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return (addr);
}

int main(void)
{
	char *addr = "oui bonjour\tnon!\nAAAAAAAAAHHHHHYY\n";
	ft_print_memory(addr, 16);
	return (0);
}
