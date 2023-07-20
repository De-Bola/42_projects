/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbiri <agbiri@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:45:31 by agbiri            #+#    #+#             */
/*   Updated: 2022/02/11 23:45:31 by agbiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH00_H
# define RUSH00_H

# include <unistd.h>
# define CHAR_SPACE 32
# define CHAR_DASH 45
# define CHAR_PIPE 124
# define CHAR_CIRCLE 111

void	ft_putchar(char c);
void	rush(int x, int y);
void	ft_print_stuff(int i, int j, int x, int y);
void	ft_columns(int counter, int boundary);
void	ft_rows(int counter, int boundary);

#endif
