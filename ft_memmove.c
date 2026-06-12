/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:00:56 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/12 17:47:52 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
	{
		d += n;
		s += n;
		while (n > 0)
		{
			d--;
			s--;
			*d = *s;
			n--;
		}
	}
	else
		ft_memcpy (dest, src, n);
	return (dest);
}
