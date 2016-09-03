#include<iostream>

using namespace std;

void moveZeroes(int* nums, int numsSize) {
    int i;
    int j=0;

    for(j=0;j<numsSize;j++) //重复多次 
    {
        for(i=0;i<numsSize-1;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=nums[i+1];
                nums[i+1]=0;
            }
        }//去掉中间的0
    }
}

int main()
{
	int nums[] = {4,0,4,4,4,4,0,0,0,0,4,4,0};
	
	moveZeroes(nums, 13);
	
	for(int i = 0; i < 13;i++)
	{
		cout << nums[i] << " " ;
	}
	
	return 0;
}
