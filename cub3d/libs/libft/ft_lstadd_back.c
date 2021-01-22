/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:55:27 by fngoc             #+#    #+#             */
/*   Updated: 2020/11/03 16:55:28 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstadd_back: добавляет новый элемент в конец списка.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if ((p = ft_lstlast(*lst)) != NULL)
		p->next = new;
}
