/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:54:29 by mathis            #+#    #+#             */
/*   Updated: 2022/10/07 22:26:15 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putnbr_base(char *res, int nbr, char *base)
{
	unsigned int	dix;
	unsigned int	x;
	unsigned int	i;
	char			temp[34];

	dix = printf_strlen_unsigned(base);
	i = 0;
	if (nbr < 0)
		x = -nbr;
	if (nbr == 0)
		res[0] = base[0];
	if (nbr == 0)
		return ;
	if (nbr > 0)
		x = nbr;
	while (x > 0)
	{
		temp[i++] = base[x % dix];
		x = x / dix;
	}
	if (nbr < 0)
		temp[i++] = '-';
	while (i-- > 0)
		res[x++] = temp[i];
}
