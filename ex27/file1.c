/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:27:47 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/04 17:45:33 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display(int fd, char *file_name)
{
	char	buf[2];

	fd = open(file_name, O_RDONLY, S_IREAD);
	if (fd == -1)
	{
		write(2, "open() error\n", 13);
		return (1);
	}
	while (read(fd, buf, 1))
	{
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		write(2, "close() failed\n", 14);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc == 2)
		return (ft_display(0, argv[1]));
	return (0);
}
