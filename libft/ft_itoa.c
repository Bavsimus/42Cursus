/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:42:48 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/17 13:52:01 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//this aux func counts the digits of the long nbr

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*arr;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	arr = malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	while (nbr > 0)
	{
		arr[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		arr[0] = '-';
	if (n == 0)
		arr[0] = '0';
	return (arr);
}

//this func converts int to str
