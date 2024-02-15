/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:05:00 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/10 12:12:34 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	sinal;
	int	res;

	count = 0;
	sinal = 1;
	res = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
	{
		count++;
	}
	while (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
		{
			sinal *= -1;
		}
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (str[count] - '0') + (res * 10);
		count++;
	}
	return (res * sinal);
}

/* int	main(void)
{
	char	str[] = " ---+--+1234ab567";

	printf("%d", ft_atoi(str));
	return (0);
}
 */
