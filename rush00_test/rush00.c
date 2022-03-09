/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:40:41 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/11 23:40:41 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush00.h"

void	ft_columns(int counter, int boundary)
{
	if (counter == 0 || counter == boundary - 1)
	{
		ft_putchar(CHAR_CIRCLE);
	}
	else
	{
		ft_putchar(CHAR_PIPE);
	}
}

void	ft_rows(int counter, int boundary)
{
	if (counter == 0 || counter == boundary - 1)
	{
		ft_putchar(CHAR_DASH);
	}
	else
	{
		ft_putchar(CHAR_SPACE);
	}
}

void	ft_print_stuff(int i, int j, int x, int y)
{
	if (j == 0 || j == y - 1)
	{
		ft_columns(i, x);
	}
	else
	{
		if (j > 0 || j < y - 1)
		{
			ft_rows(i, x);
		}
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			ft_print_stuff(i, j, x, y);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
