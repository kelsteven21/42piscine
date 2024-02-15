/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:39:58 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/03 17:34:00 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 'A' || str[count] > 'Z')
			&& (str[count] < 'a' || str[count] > 'z'))
			return (0);
		count++;
	}
	return (1);
}

/* int main()
{
	char	a[] = "aasdas4sdv";
	printf("%d", ft_str_is_alpha(a));
	return 0;
} */
