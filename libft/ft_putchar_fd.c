/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <tyesilda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:18:58 by tyesilda          #+#    #+#             */
/*   Updated: 2022/10/14 13:19:54 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* outputs the c char to the file descriptor fd 
 * fd = filde descriptor
 * * 0 -> standart input (STDIN)
 * * 1 -> standart output (STDOUT)
 * * 2 -> standart error (STRERR)
 */
