/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:25:51 by jkimmina          #+#    #+#             */
/*   Updated: 2018/08/09 14:21:54 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ssl.h>

void	print_commands(void)
{
	ft_printf("Standard commands:\n\n");
	ft_printf("Message Digest commands:\n");
	ft_printf("\tmd5\n");
	ft_printf("\tsha256\n\n");
	ft_printf("Cipher commands:\n\n");
}

void	get_command(int ac, char **av)
{

	if (ac < 2)
		ft_printf("usage: ft_ssl [command] [options] [arguments]\n");
	else if (ft_strcmp(av[1], "md5") == 0)
		md5(av[2]);
	else if (ft_strcmp(av[1], "sha256") == 0)
		ft_printf("You entered sha256!\n");
	else
	{
		ft_printf("ft_ssl: Error: '%s' is an invalid command.\n\n", av[1]);
		print_commands();
	}
}

int		main(int ac, char **av)
{
	get_command(ac, av);
	return (0);
}
