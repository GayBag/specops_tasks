# include <iostream>

int main ()
{
	int sum_mul;
	int mul_sum;
	int sub;

	for (int i=0;i<=5;++i)
	{
		mul_sum+=i*i;
                
		sum_mul+=i;

	}
        sub=mul_sum-(sum_mul*sum_mul);
	
	std::cout<<sub<<std::endl;

	return 0;
}
