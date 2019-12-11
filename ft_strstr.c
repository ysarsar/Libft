/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:56:22 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/13 17:19:39 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i] != '\0' &&
				haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char*)haystack + i - j);
		else
			i = i - j;
		i++;
	}
	return (0);
}
