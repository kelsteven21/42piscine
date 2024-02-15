/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:43:51 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/07 10:51:52 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] != '\0' || s2[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

/* int	main(void)
{
	printf("%d\n", ft_strcmp("salut", "salut"));
	printf("%d\n", ft_strcmp("salu0", "salut"));
	printf("%d\n", ft_strcmp("salut", "sa"));
	return (0);
} */
