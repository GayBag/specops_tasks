# include <iostream>
# include <fstream>

int main ()
{
   std::ifstream fin;
   std::string path="1.txt";
   int  num=0;
   int sum=0;
   fin.open (path);

   if (!fin.is_open ())
   {
	   std::cout<<"The file isn't open"<<std::endl;
   
   }
  else 
  {
  
  while (fin>>num)
  {
  
   sum+=num;
  
  }
  
  }


  std::cout<<sum<<std::endl;

fin.close ();
  return 0;
}
