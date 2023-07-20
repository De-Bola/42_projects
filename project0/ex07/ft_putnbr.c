/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:42:48 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/11 12:29:08 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define CHAR_ZERO 48
#define RADIX 10
#define MAX 2147483647
#define MIN -2147483648
#define CHAR_MINUS 45

void	ft_putnbr(int nb);
int		ft_is_negative(int n);
int		ft_is_extrema(int number);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_negative(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_extrema(int number)
{
	if (number == MIN)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (number == MAX)
	{
		write(1, "2147483647", 10);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	if (ft_is_extrema(nb))
	{
		return ;
	}
	if (ft_is_negative(nb))
	{
		ft_putchar(CHAR_MINUS);
		nb = -nb;
	}
	if (nb > RADIX - 1)
	{
		ft_putnbr(nb / RADIX);
	}
	ft_putchar(CHAR_ZERO + (nb % RADIX));
}

/* int	main(void)
{
	ft_putnbr(999999999);
	ft_putchar(10);
	return (0);
} */
