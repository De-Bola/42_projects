/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:45:41 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/09 22:45:43 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>													  	  */
#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		ft_putchar(c);
		c++;
	}
}

/* int	main(void)
{
	ft_print_numbers();
	return (0);
} */
