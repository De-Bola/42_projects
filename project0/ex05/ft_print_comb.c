/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:40:32 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/10 11:23:20 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>														  */
#include <unistd.h>
#define CHAR_ZERO 48
#define MIN 12
#define MAX 789
#define HUNDRED 100
#define TEN 10
#define CHAR_SPACE 32
#define CHAR_COMMA 44

void	ft_print_comb(void);
void	ft_print_numbers(int number, int hundredths, int tenths, int units);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int number, int hundredths, int tenths, int units)
{
	ft_putchar(CHAR_ZERO + hundredths);
	ft_putchar(CHAR_ZERO + tenths);
	ft_putchar(CHAR_ZERO + units);
	if (number < MAX)
	{
		ft_putchar(CHAR_COMMA);
		ft_putchar(CHAR_SPACE);
	}
}

void	ft_print_comb(void)
{
	int	nbr;
	int	hundredths;
	int	tenths;

	nbr = MIN;
	while (nbr < MAX + 1)
	{
		hundredths = nbr / HUNDRED;
		tenths = nbr - (hundredths * HUNDRED);
		if ((nbr < HUNDRED) && ((nbr / TEN) < (nbr % TEN)))
		{
			ft_print_numbers(nbr, 0, nbr / TEN, nbr % TEN);
		}
		else
		{
			if (((nbr / HUNDRED) < (tenths / TEN))
				&& ((tenths / TEN) < (tenths % TEN)))
			{
				ft_print_numbers(nbr, nbr / HUNDRED,
					tenths / TEN, tenths % TEN);
			}
		}
		nbr++;
	}
}

/* int	main(void)
{
	ft_print_comb();
	ft_putchar(10);
	return (0);
} */
