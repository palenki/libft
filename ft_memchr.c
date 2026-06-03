/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:29:16 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/03 16:03:00 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	chr;

	arr = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n > 0)
	{
		if (*arr == chr)
			return ((void *)arr);
		arr++;
		n--;
	}
	return (NULL);
}
