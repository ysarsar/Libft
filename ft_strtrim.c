/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 01:51:42 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/19 03:35:41 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (!s[i])
		return (ft_strcpy(ft_memalloc(sizeof(char)), ""));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	str = (char*)malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	while (k < (j - i + 1))
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
