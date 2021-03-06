/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:07:44 by aponomar          #+#    #+#             */
/*   Updated: 2019/03/31 22:32:57 by aponomar         ###   ########.fr       */
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
			if ((r == 1 && c == 1) || (r == y && c == 1) ||
					(r == 1 && c == x) || (r == y && c == x))
				ft_putchar('o');
			else if ((r == 1 && c > 1 && c < x) || (r == y && c > 1 && c < x))
				ft_putchar('-');
			else if ((c == 1 && r > 1 && r < y) || (c == x && r > 1 && r < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
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
