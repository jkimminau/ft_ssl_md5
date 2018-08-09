/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:19:52 by jkimmina          #+#    #+#             */
/*   Updated: 2018/08/09 15:04:21 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ssl.h>

void	init(int (*s)[64], int (*K)[64])
{
	int		i;
	
	(void)K;
	i = 0;
	while (i < 16)
	{
		(*s)[i] = 7;
		(*s)[i + 1] = 12;
		(*s)[i + 2] = 17;
		(*s)[i + 3] = 22;
		(*s)[i + 16] = 5;
		(*s)[i + 17] = 9;
		(*s)[i + 18] = 14;
		(*s)[i + 19] = 20;
		(*s)[i + 32] = 4;
		(*s)[i + 33] = 11;
		(*s)[i + 34] = 16;
		(*s)[i + 35] = 23;
		(*s)[i + 48] = 6;
		(*s)[i + 49] = 10;
		(*s)[i + 50] = 15;
		(*s)[i + 51] = 21;
		i += 4;
	}
	i = 0;
	while (i < 64)
		(*K)[i] = ft_pow(2, 32);
}

void	md5(char *input)
{
	//int		i;
	int		s[64];
	int		K[64];

	init(&s, &K);
	ft_printf("creating hash for '%s'\n", input);
}