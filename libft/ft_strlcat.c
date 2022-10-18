/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:30:42 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/15 13:11:29 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && (a + 1 < size))
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

//adds src string to dst string
//dstsize argument is equel to the size of dst buffer
//returns the total len of the string created
