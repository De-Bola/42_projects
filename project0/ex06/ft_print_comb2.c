/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:42:34 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/09 23:42:34 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>														  */
#include <unistd.h>
#define CHAR_ZERO 48
#define CHAR_SPACE 32
#define CHAR_COMMA 44
#define MAX 100
#define TEN 10

void	ft_print_comb2(void);
void	ft_print_numbers(int tenths, int units);
void	ft_print_formatter(int fst_nbr, int scnd_nbr, int flag);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int tenths, int units)
{
	ft_putchar(CHAR_ZERO + tenths);
	ft_putchar(CHAR_ZERO + units);
}

void	ft_print_formatter(int fst_nbr, int scnd_nbr, int flag)
{
	ft_print_numbers(fst_nbr / TEN, fst_nbr % TEN);
	ft_putchar(CHAR_SPACE);
	ft_print_numbers(scnd_nbr / TEN, scnd_nbr % TEN);
	if (flag)
	{
		ft_putchar(CHAR_COMMA);
		ft_putchar(CHAR_SPACE);
	}
}

void	ft_print_comb2(void)
{
	int	first_comb;
	int	second_comb;
	int	flag;

	flag = 1;
	first_comb = 0;
	while (first_comb < MAX)
	{
		second_comb = 0;
		while (second_comb < MAX)
		{
			if (first_comb < second_comb)
			{
				if (first_comb == (MAX - 2))
				{
					flag = 0;
				}
				ft_print_formatter(first_comb, second_comb, flag);
			}
			second_comb++;
		}
		first_comb++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
	ft_putchar(10);
	return (0);
} */
