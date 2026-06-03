/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:23:13 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/03 14:25:39 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizedst;
	size_t	sizesrc;
	size_t	rest;

	sizedst = 0;
	while (dst[sizedst] && sizedst < size)
		sizedst++;
	sizesrc = ft_strlen(src);
	if (size <= sizedst)
		return (size + sizesrc);
	dst += sizedst;
	rest = size - sizedst;
	while (*src && rest > 1)
	{
		*dst = *src;
		src++;
		dst++;
		rest--;
	}
	*dst = '\0';
	return (sizedst + sizesrc);
}
