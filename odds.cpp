# include <iostream>

int count_of_odds (int,int);

int main ()
{
  
	int num1,num2;
	std::cin>>num1>>num2;

	std::cout<<count_of_odds (num1,num2)<<std::endl;


	return 0;



}

int count_of_odds (int num1,int num2)
{
       int count=0;
        
       
       for (int i=num1;i<=num2;i++)
	{
	
		if (i%2==1||i%2==-1)
	  {
	     
		  ++count;
	    
	  }
	
	
	}
  return count;

}
