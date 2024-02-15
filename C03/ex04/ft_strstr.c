/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:22:34 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/15 16:01:37 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	if (to_find[count2] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		while (str[count + count2] == to_find[count2]
			&& (str[count + count2] != '\0'))
		{
			count2++;
		}
		if (to_find[count2] == '\0')
		{
			return (str + count);
		}
		count++;
		count2 = 0;
	}
	return (0);
}

/* int	main(void)
{
	char	str[] = "ru bens rubens";
	char	to_find[] = "rubens";

	printf("%s", ft_strstr(str, to_find));
	return (0);
} */



