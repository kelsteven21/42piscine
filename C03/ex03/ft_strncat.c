/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:25:47 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/07 19:20:24 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count2;

	count2 = 0;
	while (dest[count2] != '\0')
	{
		count2++;
	}
	count = 0;
	while (src[count] != '\0' && count < nb)
	{
		dest[count2] = src[count];
		count2++;
		count++;
	}
	dest[count2] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	src[] = "les gars";
	char	dest[] = "coucou ";

	printf("%s", ft_strncat(dest, src, 4));
	return (0);
} */
