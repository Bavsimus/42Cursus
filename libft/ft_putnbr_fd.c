/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:15:49 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/17 14:01:37 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	a = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a = (unsigned int)(n * -1);
	}
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd((char)(a % 10 + '0'), fd);
}

//outputs the integer n to the given fd
