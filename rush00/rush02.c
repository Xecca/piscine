/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:55:24 by aponomar          #+#    #+#             */
/*   Updated: 2019/03/31 22:40:10 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	negative_rush(int x, int y)
{
	int	r;
	int	c;

	c = 1;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == 1 && c == x))
				ft_putchar('A');
			else if ((r == y && c == 1 && r > 1) ||
					(r == y && c == x && c != 1))
				ft_putchar('C');
			else if (r > 1 && r < y && c > 1 && c < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		negative_rush(x, y);
	else
		write(1, "Enter a value greater than 0!\n", 30);
}
