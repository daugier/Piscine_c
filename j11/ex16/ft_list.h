/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 22:05:11 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 22:27:41 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H
# define __FT_LIST_H

# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);

#endif
