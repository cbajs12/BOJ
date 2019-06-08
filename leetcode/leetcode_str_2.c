
int dominantIndex(int* nums, int numsSize){
    int the_one = nums[0];
    int the_second = 0;
    int pivot = 0;

    for(int i = 1; i < numsSize; ++i){
        if(the_one < nums[i]){

            the_second = the_one;


            the_one = nums[i];
            pivot = i;
        }else{
            if(the_second < nums[i]){
                the_second = nums[i];
            }
        }
    }
    int left = the_one / 2;

    if(the_second == 0){
        return pivot;
    }

    if(left >= the_second){
        return pivot;
    }else{
        return -1;
    }
}


