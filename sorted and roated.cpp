check if array is rotated and sorted  
       

bool check(int* nums, int numsSize) {
    int arr[numsSize];
    for(int i=0;i<numsSize;i++){
        arr[i]=nums[i];
    }
// sorted arr in ascending order
  for(int i=0;i<numsSize-1;i++){
    for(int j=0;j<numsSize-1-i;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
    }
  }
  int k=numsSize;
  for(int i=0;i<k;i++){
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==arr[i]){
           count++;
        }
        if(count==numsSize){
            return true;
        }
    }
    for(int j=0;j<numsSize;j++){
        int temp=arr[j];
         arr[j]= arr[numsSize-1];
        arr[numsSize-1]=temp;
        

    }

  }

    return false;
}