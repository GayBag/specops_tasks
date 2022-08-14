# include <iostream>
# include <fstream>

int main ()
{
	std::string path ="one.txt";
	std::ifstream fin;
	fin.open (path);
	if (!fin.is_open())
	{
	
	
		std::cout<<"file isn't open"<<std::endl;
	}

      int count=0;
      std::string numbers;
      while (fin>>numbers)

      {
       
	std::cout<<numbers.size()<< " ";
      
      
      }
     std::cout<<std::endl;

      return 0;
}
