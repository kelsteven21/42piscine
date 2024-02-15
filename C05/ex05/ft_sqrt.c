/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:05:01 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/12 14:42:23 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (n * n < nb)
	{
		if (n == 46341)
			return (0);
		n++;
	}
	if (n * n == nb)
	{
		return (n);
	}
	return (0);
}

/* int	main(void)
{
	printf("%d", ft_sqrt(144));
	return (0);
}
 */
