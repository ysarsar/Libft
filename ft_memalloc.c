/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 20:36:25 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/14 20:46:06 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = (void*)malloc(sizeof(void*) * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, size);
	return (str);
}
