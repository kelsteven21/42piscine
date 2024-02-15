/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:31:18 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/10 21:00:52 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 || nb == 1 || power < 1)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/* int	main(void)
{
	printf("%d", ft_recursive_power(6, -2));
	return (0);
} */
