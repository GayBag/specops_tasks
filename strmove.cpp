# include <iostream>
# include <string>

std::string mstrmove (std::string str,int n);

int main ()
{

    
	std::string str;
	int n;
	std::cout<<" Enter the word "<<std::endl;
	std::cin>>str;
	std::cout<<" Enter the number"<<std::endl;
	std::cin>>n;


	std::cout<<mstrmove(str,n)<<std::endl;


	return 0;
}

std::string mstrmove (std::string str,int n)
{

  std::string newstr;
  int size=str.size();

  for (int i=size-n;i<size;++i)
  {
    newstr+=str[i];
  
  }
  for (int i=0;i<size-n;++i)
  {
  
  
	  newstr+=str[i];
  }



 return newstr;
}
