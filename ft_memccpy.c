/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 01:46:25 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/21 00:03:56 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*a;
	unsigned char		*b;
	size_t				i;
	unsigned char		cc;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (a[i] == cc)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
