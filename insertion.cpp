# include <iostream>

int * insertion_sort (int *,int);
void output (int *,int);


int main ()
{
   const int size = 10;
   int arr [size]= {11,15,98,41,32,74,5,64,18,3};

   insertion_sort (arr,size);


   output (arr,size);

   std::cout<<std::endl;


   return 0;



}

 
int * insertion_sort (int * arr,int size)
{
        int i,j,key;
	
	for  (int i=1;i<size;++i)
	{
	  key=arr[i];
	  j=i-1;
	  while (j>=0&&arr[j]>key)
	  {
	  
		  arr[j+1]=arr[j];
		  j=j-1;
	  }
	
	
	arr[j+1]=key;
	}

return arr;
}

void output (int * arr,int size)
{


	for (int i=0;i<size;++i)
	{
	
	
		std::cout<<arr[i]<< " ";
	}
}
