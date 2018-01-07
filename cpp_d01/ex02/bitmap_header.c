/*
** bitmap_header.c for  in /home/munoz_d/piscine_cpp/cpp_d01/ex02
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Wed Jan  4 16:08:11 2017 David Munoz
** Last update Thu Jan  5 08:43:29 2017 David Munoz
*/

#include "bitmap.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	make_bmp_header(t_bmp_header *header, size_t size)
{
  header->magic = 0x4D42;
  header->size = size * size * sizeof(int) + sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
  header->_app1 = 0;
  header->_app2 = 0;
  header->offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
}

void	make_bmp_info_header(t_bmp_info_header *header, size_t size)
{
  header->size = sizeof(t_bmp_info_header);;
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = size * size * sizeof(int);
  header->h_resolution = 0;
  header->v_resolution = 0;
  header->palette_size = 0;
  header->important_colors = 0;
}
