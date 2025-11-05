/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readdict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:50:18 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/26 17:15:08 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_readdict(char *path)
{
	int		file;
	char	*content;

	content = malloc(sizeof(char) * 1024 + 1);
	file = open(path, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n");
		return ("");
	}
	read(file, content, 1024);
	if (close(file) == -1)
	{
		ft_putstr("Dict Error\n");
		return ("");
	}
	return (content);
}
