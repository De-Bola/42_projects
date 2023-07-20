/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:42:59 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/09 23:42:59 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>														  */
#include <unistd.h>
#define RADIX 10
#define CHAR_ZERO 48
#define CHAR_SPACE 32
#define CHAR_COMMA 44

void	ft_print_combn(int n);
void	ft_print_singular(void);
void	ft_putchar(char c);
void	ft_print_multiple(int n);
void	ft_putnbr(int nb);
int		ft_get_max(int digits);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_singular(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		ft_putchar(c);
		if (c < 57)
		{
			ft_putchar(CHAR_COMMA);
			ft_putchar(CHAR_SPACE);
		}
		c++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > RADIX - 1)
	{
		ft_putnbr(nb / RADIX);
	}
	ft_putchar(CHAR_ZERO + (nb % RADIX));
}

int	ft_ascending(int boundary, int digits, int multiplier)
{
	multiplier = RADIX * multiplier;
	if (boundary > multiplier) boundary = ((((boundary / multiplier) - 1) * RADIX) + (boundary % RADIX));
	digits--;
	if (digits > 0) ft_ascending(boundary, digits, multiplier * RADIX);
	return boundary;
}

int	ft_get_max(int digits)
{
	int max;
	int true_max;

	max = 1;
	while (digits > 0)
	{
		max = max * RADIX;
		digits--;
	}
	max = max - 1; // make it form 999...
	true_max = ft_ascending(max, digits, 1);
	ft_putnbr(max);
	ft_putchar(10);
	ft_putnbr(true_max);
	return (max);
}

void	ft_print_multiple(int n)
{
	int max;

	max = ft_get_max(n);
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < RADIX)
	{
		if (n == 1)
		{
			ft_print_singular();
			return ;
		}
		ft_print_multiple(n);
	}
}

int	main(void)
{
	ft_print_combn(3);
	ft_putchar(10);
	return (0);
}
