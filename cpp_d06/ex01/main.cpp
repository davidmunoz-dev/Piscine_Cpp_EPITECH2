#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string>

void	temp()
{
  float	num;
  float	result;
  std::string temp;
  std::getline(std::cin,temp);

  std::size_t celc = temp.find("Celsius");
  std::size_t fahr = temp.find("Fahrenheit");
  num = atof(temp.c_str());
  if (celc!=std::string::npos)
    {
      result = num * 9.0 / 5.0 + 32;
      std::cout << std::setfill(' ') << std::setw(16) << std::fixed << std::setprecision(3) << result << std::setfill(' ') << std::setw(16) << "Fahrenheit" << std::endl;
    }
  if (fahr!=std::string::npos)
    {
      result = 5.0 / 9.0 * (num - 32.0);
      std::cout << std::setfill(' ') << std::setw(16) << std::fixed << std::setprecision(3) << result << std::setfill(' ') << std::setw(16) << "Celsius" << std::endl;
    }
}

int	main()
{ 
  temp();
  return (0);
}
