/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 09:32:01 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/31 09:20:04 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

unsigned int	ft_lenstr(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	i;
	unsigned int	j;

	dest_size = ft_lenstr(dest);
	if (dest_size >= size)
		return (size + ft_lenstr(src));
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < (size - dest_size - 1) && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest_size + ft_lenstr(src));
}
/*
int main(void)
{
	printf("%d", ft_strlcat("nonoui", "oui", 3));	
	return 0;
}*/
