/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:45:52 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/06 11:03:11 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count2 = 0;
	while (dest[count2] != '\0')
	{
		count2++;
	}
	count = 0;
	while (src[count] != '\0')
	{
		dest[count2 + count] = src[count];
		count++;
	}
	dest[count2 + count] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	src[] = "ca va";
	char	dest[] = "comment ";

	printf("%s", ft_strcat(dest, src));
	return (0);
} */
