/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 18:08:50 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/08 09:01:07 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*crumb;
	char const	*start;
	char const	*end;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start) != NULL)
		start++;
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end) != NULL)
		end--;
	if (start > end)
		return (crumb = ft_calloc(1, 1));
	crumb = malloc((end - start) + 2);
	if (!crumb)
		return (NULL);
	ft_strlcpy(crumb, start, (end - start) + 2);
	return (crumb);
}
