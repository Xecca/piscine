/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:45:35 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/17 20:32:34 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int up;
	int low;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			up = argv[1][i] - 64;
			low = argv[1][i] - 96;
			if (argv[1][i] > 64 && argv[1][i] < 91)
				while (up > 0)
				{
					write(1, &argv[1][i], 1);
					up--;
				}
			else if (argv[1][i] > 96 && argv[1][i] < 123)
				while (low  > 0)
				{
					write(1, &argv[1][i], 1);
					low--;
				}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
