/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:10:15 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/06 21:46:02 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 != '\0' && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if (*s2 != '\0' && *s1 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if ((*s2 == '\0') && (*s1 == '*'))
		return (match(s1 + 1, s2));
	else if (*s1 && *s2 && *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}