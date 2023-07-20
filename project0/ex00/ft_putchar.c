/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:58:55 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/09 20:59:01 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>										/*				  */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int	main(void)
{
	ft_putchar(100);
	ft_putchar(10);
	return (0);
} */
