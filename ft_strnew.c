/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 20:56:08 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/14 21:03:14 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, (size + 1));
	return (str);
}
