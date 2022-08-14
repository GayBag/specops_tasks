# include <iostream>
int * selection_sort (int *,int);
void output (int * ,int);
void my_swap (int &,int &);
int main ()
{
 const int size = 10 ;

 int arr [size]= {45,9,84,56,12,3,147,-10,-74,1};


 selection_sort (arr,size);
 output (arr,size);


 std::cout<<std::endl;

 return 0;
 
}

void my_swap (int & num1,int & num2)
{

	int tmp = num1;
	num1=num2;
	num2=tmp;

}
int * selection_sort (int * arr,int size)
{
 
	int i,j,minind;


	for (int i=0;i<size-1;++i)
	{
	
		minind=i;
		for (j=i+1;j<size;++j)
		{
		
		 
			if (arr[j]<arr[minind])
			{
			
			
				minind=j;
			
			}
		
		
		}
	   my_swap (arr[minind],arr[i]);
	
	}


return arr;



}

void output (int * arr,int size)
{


	for (int i=0;i<size;++i)
	{
	
		std::cout<<arr[i]<<" ";
	}
}
