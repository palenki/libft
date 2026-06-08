/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:05:06 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/08 13:58:48 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		if (*s != c && !flag)
		{
			flag = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static char	**ft_free_matrix(char **str, size_t j)
{
	while (j > 0)
	{
		free(str[j - 1]);
		j--;
	}
	free(str);
	return (NULL);
}

static char	**ft_strcploc(char const *s, char **str, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != c && s[i])
			i++;
		str[j] = ft_substr(s, start, i - start);
		if (!str[j])
			return (ft_free_matrix(str, j));
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_strcploc(s, str, c);
	return (str);
}
