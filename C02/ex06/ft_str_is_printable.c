/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:53:23 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/03 17:44:41 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/* int	main(void)
{
	char	test[] = "";
	char	test2[] = "€";
	char	test3[] = "21";

	printf("%d\n", ft_str_is_printable(test));
	printf("%d\n", ft_str_is_printable(test2));
	printf("%d\n", ft_str_is_printable(test3));
	return (0);
} */
