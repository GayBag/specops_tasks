 # include <iostream>
# include <string>

std::string erase_3th (std::string str)
{
   
	std::string newstr={};
	
   for (int i=0,k=2;i<str.size();++i) 
    {
      if (i==k)
      {
         k+=3;
      ++i;
      
      }
      
      newstr+=str[i];
      
    }
   
   
  return newstr;
}


int main ()

{

  std::string line;
  std::cin>>line;


  std::cout<<erase_3th (line)<<std::endl;


 return 0;
}
