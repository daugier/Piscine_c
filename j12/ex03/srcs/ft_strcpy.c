/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 18:26:00 by daugier           #+#    #+#             */
/*   Updated: 2015/12/30 19:25:51 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_strcpy(char *str, char *buf)
{
	int i;

	i = 0;
	while (str[i])
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
}
