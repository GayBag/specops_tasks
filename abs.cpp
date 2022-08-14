# include <iostream>
# include <cmath>

int main ()
{
	int sum=0;
	int sum_mul=0;
	int mul_sum=0;
	for (int i=0;i<5;++i)
	{
	sum+=i;
	mul_sum+=i*i;  
	
	
	}
        sum_mul=sum*sum;
      
	std::cout<<abs(mul_sum-sum_mul)<<std::endl;


	return 0;
}
