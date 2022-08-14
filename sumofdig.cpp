# include <iostream>

int main ()
{

  int num;
  std::cin>>num;
  int sum=0;
 if (num<0)
 {
 
  num*=-1;
 }
  while (num)
  {
  
   sum+=num%10;

   num/=10;
  
  }

  std::cout<<sum<<std::endl;
  
  return 0;

}
