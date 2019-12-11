/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:19:56 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/14 00:19:41 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	cc;
	size_t	i;

	cc = (char)c;
	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == cc)
			return ((char*)str + i);
	}
	return (NULL);
}
