/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:55:23 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/18 14:13:42 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = lst;
		while (1)
		{
			f(tmp->content);
			tmp = tmp->next;
			if (tmp == NULL)
				return ;
		}
	}
}

//iterates the list and applies the func
//f on the content of each node
