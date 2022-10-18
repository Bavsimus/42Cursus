/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:02:34 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/17 14:03:47 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*s3;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = malloc(s1_len + s2_len + 1);
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

//allocates (with malloc()) and return a new string 
//result of the concatenation of s1 and s2
