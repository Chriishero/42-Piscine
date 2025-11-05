/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsingdict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:02:46 by cvillene          #+#    #+#             */
/*   Updated: 2025/07/27 18:32:39 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizenbr(char *nbr)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (nbr[i])
		size += nbr[i++] - '0';
	return (size);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_tabstrlen(char **tab)
{
	int	i;
	
	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char    *ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;

        i = 0;
        while (str[i])
        {
                j = 0;
                while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
                        j++;
                if (!to_find[j])
                        return (&str[i]);
                i++;
        }
        return (NULL);
}

char	*ft_substr(char *str, int start, int len)
{
	int		i;
	char	*s;

	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < len && str[start + i])
	{
		s[i] = str[start + i];
		i--;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_decompose_nbr(char *dict, char *nbr)
{
	char	**tab;
	char	*n;
	int		i;
	int		j;
	int		k;
	int		n_digit;

	tab = (char **)malloc(sizeof(char *) * ft_sizenbr(nbr));
	k = 0;
	i = 0;
	while (nbr[i])
	{
		n = (char *)malloc(sizeof(char) * ft_strlen(nbr));
		n_digit = ft_strlen(nbr) - 1;
		n[0] = nbr[i];
		n[1] = '\0';
		while (!ft_strstr(dict, n))
		{
			j = i;
			while (nbr[j])
			{
				if (j - i < n_digit)
					n[i - j] = nbr[j];
				else
					break ;
				j++;
			}
			n_digit -= 1;
		}
		tab[k] = n;
		k++;
		i++;
	}
	tab[k] = NULL;
	return (tab);	
}

char	*get_number(char *find_output)
{
	int	i;
	int	j;
	char	*number;

	i = 0;
	while (find_output[i] < 'a' || find_output[i] > 'z')
		i++;
	j = i;
	while (find_output[j] != '\n')
		j++;
	number = (char *)malloc(sizeof(char) * (j - i) + 1);
	j = i;
	while (find_output[j] != '\n')
	{
		number[j - i] = find_output[j];
		j++;
	}
	number[j - i] = '\0';
	return (number);
}

char	**ft_parsingnbr(char *nbr, char *dict)
{
	char	**nbr_decomp;
	char	**parse_nbr;
	char	*find_output;
	char	*number;
	int		i;

	//find_output = ft_strstr(dict, nbr);
	/*if (find_output)
	{
		if(get_number(find_output))
			number = get_number(find_output);
	}*/
	if (1 == 1)
	{
		nbr_decomp = ft_decompose_nbr(dict, nbr);
		parse_nbr = (char **)malloc(sizeof(char *) * ft_tabstrlen(nbr_decomp) + 1);
		i = 0;
		while (nbr_decomp[i])
		{
			find_output = ft_strstr(dict, nbr_decomp[i]);
			number = get_number(find_output);
			parse_nbr[i] = number;
			i++;
		}
	}
	return (parse_nbr);
}
