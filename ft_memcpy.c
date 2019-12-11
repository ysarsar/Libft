/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 01:49:56 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/21 00:15:53 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*tmps;
	char			*tmpd;
	size_t			i;

	i = 0;
	tmps = (char *)src;
	tmpd = (char *)dest;
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (dest);
}
