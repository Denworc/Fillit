#include "fillit.h"

int	ft_error_check(int n)
{
  if (n == 1)
    ft_putstr("usage: ./fillit.a source_file");
  else if (n == 2)
    ft_putstr("error");
  

int	main(int ac, char **av)
{
  int	fd; // file descriptor

  if (ac != 2)
    return(ft_error_check(1)); //error with arguments
  fd = open(av[1], O_RDONLY);
  if (fd < 0)
    return(ft_error_check(2)); //error from file descriptor






  close(fd);
  return (0);
}
