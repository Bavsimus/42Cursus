/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:46:40 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/14 15:32:28 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char )c != *s)
		s++;
	if ((char )c == *s)
		return ((char *)s);
	return (0);
}

//returns a pointer to the first occurrence of the c 
//in the string s
//return NULL if the character doesnt appear
