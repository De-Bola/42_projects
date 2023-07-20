/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:21:33 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/09 23:21:33 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>														  */
#include <unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(78);
	}
	else
	{
		ft_putchar(80);
	}
}

/* int	main(void)
{
	ft_is_negative(19);
	return (0);
} */
