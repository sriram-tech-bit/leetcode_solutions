   4. Find largest element with same of Negative in the Array;

     int findMaxK(int* nums, int numsSize) {
   for(int i=0;i<numsSize-1;i++){
    for(int j=0;j<numsSize-i-1;j++){
        if(nums[j]>nums[j+1]){
            int temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }

  }
      for(int i=0;i<numsSize;i++){
        for(int j=numsSize-1;j>=0;j--){
             if(nums[j]== -nums[i]){
                return nums[j];
             }
        }
      }
   return -1;
   
}