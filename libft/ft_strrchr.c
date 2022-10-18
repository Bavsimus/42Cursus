/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:40 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/15 13:33:43 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*holds;

	holds = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *holds && (char )c != *s)
		s--;
	if ((char )c == *s)
		return ((char *)s);
	return (0);
}

//returns a pointer to the last occurrence of the character
//c in the string s
