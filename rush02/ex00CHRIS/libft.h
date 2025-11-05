/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:47:30 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/27 12:43:59 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
char	*ft_readdict(char *path);
char	**ft_decompose_nbr(char *dict, char *nbr);
char	*ft_strstr(char *str, char *to_find);
char	**ft_parsingnbr(char *nbr, char *dict);

#endif
