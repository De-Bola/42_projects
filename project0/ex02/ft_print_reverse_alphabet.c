/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:13:58 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/09 22:13:58 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>														  */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c > 96)
	{
		ft_putchar(c);
		c--;
	}
}

/* int	main(void){
	ft_print_reverse_alphabet();
	return (0);
} */
