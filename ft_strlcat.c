/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:23:13 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/02 07:49:21 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t sizedst;
	size_t sizesrc;
	size_t i;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (size <= sizedst)
		return (size + sizesrc);
	i = sizedst;
	while(*src && i < size - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (sizedst + sizesrc);
}
