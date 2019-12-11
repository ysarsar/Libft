/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 17:23:07 by ysarsar           #+#    #+#             */
/*   Updated: 2018/10/18 04:14:50 by ysarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	else if (ft_strcmp(s1, "") == 0 && ft_strcmp(s2, "") == 0)
		return (1);
	else if (ft_strcmp(s1, "") == 0 || ft_strcmp(s2, "") == 0)
		return (0);
	else if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
