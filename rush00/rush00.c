/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:07:44 by aponomar          #+#    #+#             */
/*   Updated: 2019/03/30 19:46:52 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush00(int h, int w)
{
	int nowX = 1;
	int nowY = 1;

	while(nowX <= w)
	{
		nowY = 1;
		while(nowY <= h)
		{
			if ((nowX == 1 && nowY == 1) ||	(nowX == w && nowY == 1) ||	(nowX == 1 && nowY == h) || (nowX == w && nowY == h))
				ft_putchar('o');
			else if ((nowX > 1 && nowX < w && nowY == 1) || (nowX > 1 && nowX < w && nowY == h))
				ft_putchar('|');
			else if ((nowX == 1 && nowY > 1 && nowY < h) ||	(nowX == w && nowY > 1 && nowY < h))
				ft_putchar('-');
			else
				ft_putchar(' ');
			nowY++;
		}
		ft_putchar('\n');
		nowX++;
	}
}
