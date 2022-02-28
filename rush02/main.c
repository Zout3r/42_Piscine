/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-p <jperez-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:09:57 by jperez-p          #+#    #+#             */
/*   Updated: 2022/02/26 13:09:58 by jperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <unistd.h>
#include    <fcntl.h>

int main    (int    argc, char  **argv)
{
    int     fd;
    int     count2;
    int     count;
    char    buf[700];
    ssize_t n_bytes;
    *argv[1] = *argv[1] +1;
    count = 0;
    if (argc < 2)
    {
        write(2, "Missing arguments\n", 18);
    }

    fd = open("numbers.dict", O_RDWR);
    if (fd == -1)
    {
        write(2, "Dict Error\n", 11);
    }
    else
    {
        n_bytes = read(fd, buf, 150000);
        if (n_bytes == 0)
        {
            write(2, "Empty\n", 6);
        }
        else
        {
            while (buf[count] != '\0')
            {
                if (buf[count] == ' ')
                {
                    buf[count] = 127;
                }
                count++;
            }
            count = 0;
            count2 = 0;
            while (buf[count] != '\0')
            {
                if (buf[count] == *argv[1])
                {
                    while (buf[count2] != *argv[1])
                    {
                        count2++;
                    }
                    while (buf[count2] != ':')
                    {
                        count2--;
                    }
                    count2 = count2 +1;
                    write(1, &buf[count2], 693);
                }
                count++;
            }
        }
    }
}