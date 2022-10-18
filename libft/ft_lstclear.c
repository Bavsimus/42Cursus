/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:46:42 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/14 13:56:22 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr)
	{
		ptr = ptr->next;
		if ((*lst)->next != NULL)
			(*lst)->next = NULL;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	free(ptr);
}

//deletes and frees the given node and every
//successor of that node, using the func del
//and free().
//the pointer to the list set to NULL
