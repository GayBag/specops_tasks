# include <iostream>
int sum_of_multiples (int);


int main ()
{
	int num;

	std::cout<<"Please enter a natural number  "<<std::endl;
   
        std::cin>>num;
      
	std::cout<<"The sum of all multiples of 3 or 5 bellow "<<num<<" "<<"is "<<sum_of_multiples (num)<<std::endl;


	return 0;
}

int sum_of_multiples (int num)
{

  int sum=0;
  for (int i=0;i<num;++i)
  {
     if (i%3==0||i%5==0)
  
      sum+=i;
  
  }


return sum;

}
