# include <iostream>

int main ()
{

 int num=0;
 std::cin>>num;
 int sum=0;
 int mul=1;

 if (num<0)
 {
 
   num*=-1; 
 
 }

while (num)
{

  sum+=num%10;
  mul*=num%10;
 
  num/=10;

}

  std::cout<<mul-sum<<std::endl;

return 0;

}
