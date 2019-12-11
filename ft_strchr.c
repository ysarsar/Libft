/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:55:00 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/14 00:14:45 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	cc;
	int		i;

	cc = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == cc)
			return ((char*)(str + i));
		i++;
	}
	if (cc == '\0')
		return ((char *)(str + i));
	return (NULL);
}
