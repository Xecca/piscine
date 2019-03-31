/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:07:44 by aponomar          #+#    #+#             */
/*   Updated: 2019/03/31 16:15:07 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	row;
	int	col;

	col = 1;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == 1) ||
					(row == 1 && col == x) || (row == y && col == x))
				ft_putchar('o');
			else if ((row > 1 && row < y && col == 1) ||
					(row > 1 && row < y && col == x))
				ft_putchar('|');
			else if ((row == y) || (row == 1))
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
