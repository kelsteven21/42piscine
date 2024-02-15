/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:48:21 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/03 17:39:33 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 90)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*  int	main(void)
{
	char	test[] = "RUBENS";
	char	test2[] = "yuri";
	char	test3[] = "";

	printf("%d\n", ft_str_is_uppercase(test));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d", ft_str_is_uppercase(test3));
	return (0);
} */
