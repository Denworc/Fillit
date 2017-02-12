#include "fillit.h"

int	main(int ac, char **av)
{
  int	fd; // file descriptor

  if (ac != 2)
    return(); //error with arguments
  fd = open(av[1], O_RDONLY);
  if (fd < 0)
    return(); //error from file descriptor






  close(fd);
  return (0);
}
