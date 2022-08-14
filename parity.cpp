# include <iostream>
# include <vector>
std::vector <int> sortArrayByParity (std::vector<int>&nums);

int main ()
{
	std::vector<int>nums={3,2,1,4};
        sortArrayByParity(nums);

	for (int i=0;i<nums.size();++i)
	{
	
		std::cout<<nums[i]<<" ";
	}

}
std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        for (int i=0,j=0;i<nums.size();++i)
        {
            if (nums[i]%2==0)
            {
                int tmp=nums[i];
                nums[i]=nums[j];
                nums[j]=tmp;

                ++j;

            }



        }
        return nums;
    }
