# include <iostream>
 
int main ()
{

	int k=4000000;
        int sum=0;
        int fib1=0;
	int fib2=1;
	int fib=0;
        

       for (int i=0;i<=k ;++i)
      {
        if (i==1)
	{
	
		fib=1;
	}
        if (i==2)
	{
	 
		fib=2;
	
	
	}
 
     fib=fib1+fib2;
     fib1=fib2;
     fib2=fib;
      if (fib%2==0)
      {
      
      sum+=fib;
      }

      
      }
      
       std::cout<<sum<<std::endl;
}
