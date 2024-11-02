/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:40:37 by isegura-          #+#    #+#             */
/*   Updated: 2024/10/23 11:42:56 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>      // Para usar open()
#include <stdio.h>      // Para usar printf()
#include <stdlib.h>     // Para usar free()
#include "get_next_line_bonus.h"  // Incluir tu header
int main(int argc, char *argv[])
{
    int     fd1, fd2, fd3;
    char    *line1, *line2, *line3;
    int     more_lines;
    // Verificar si se han pasado los archivos como argumentos
    if (argc != 4)
    {
        printf("Uso: %s <file1> <file2> <file3>\n", argv[0]);
        return (1);
    }
    // Abrir los tres archivos proporcionados por el usuario
    fd1 = open(argv[1], O_RDONLY);
    fd2 = open(argv[2], O_RDONLY);
    fd3 = open(argv[3], O_RDONLY);
    if (fd1 == -1 || fd2 == -1 || fd3 == -1)
    {
        printf("Error al abrir los archivos\n");
        return (1);
    }
    // Leer y mostrar las líneas alternativamente hasta que todos lleguen al final
    more_lines = 1;
    while (more_lines)
    {
        more_lines = 0;
        // Leer una línea del primer archivo
        if ((line1 = get_next_line(fd1)) != NULL)
        {
            printf("Archivo 1: %s", line1);
            free(line1);
            more_lines = 1; // Mientras haya líneas, seguimos
        }
        // Leer una línea del segundo archivo
        if ((line2 = get_next_line(fd2)) != NULL)
        {
            printf("Archivo 2: %s", line2);
            free(line2);
            more_lines = 1;
        }
        // Leer una línea del tercer archivo
        if ((line3 = get_next_line(fd3)) != NULL)
        {
            printf("Archivo 3: %s", line3);
            free(line3);
            more_lines = 1;
        }
    }
    // Cerrar los archivos
    close(fd1);
    close(fd2);
    close(fd3);
    return (0);
}
