#include <iostream>
#include <iomanip>
#include <fstream>

void	cat(int ac, char **av)
{
  int	i;
  char	c;

  i = 1;
  while (i < ac)
    {
      std::ifstream ifs (av[i], std::ifstream::in);
      std::fstream file;
      file.open(av[i]);
      if (file.is_open())
	{
	  c = ifs.get();      
	  while (ifs.good()) {
	    std::cout << c;
	    c = ifs.get();
	  }
	  ifs.close();
	}
      else
	std::cout << "my_cat: " << av[i] << ": No such file or directory" << std::endl;
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac == 1)
    {
      std::cout << "my_cat: Usage: ./my_cat file [...]" << std::endl;
      return (84);
    }
  cat(ac, av);
  return (0);
}
