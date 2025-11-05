/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:26:17 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/31 09:15:06 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	int		dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[] = "yuiop";
	char dest[10] = "qwert";
	printf("%s", ft_strcat(dest, src, 3));
	return 0;
}*/
