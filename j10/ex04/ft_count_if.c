/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:05:19 by daugier           #+#    #+#             */
/*   Updated: 2015/12/08 13:31:47 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
