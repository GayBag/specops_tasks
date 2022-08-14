# include <iostream>
# include <fstream>

int main ()
{
    std::string path = "2.txt";

    std::ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
    
	    std::cout<<" The file isn't open."<<std::endl;
    
    }
    char ch;
    int count=0;
    while (!fin.eof())

    {
     
      fin.get (ch); 
      
      count++;
   
    }

  std::cout<<count<<std::endl;

  fin.close ();
  return 0;



}
