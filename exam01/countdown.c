/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:43:41 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/05 14:15:15 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char c;

	c = '9';
	while(c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}
