double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    int arr[nums1Size + nums2Size];


    int i = 0; 
    int j = 0;
    int k = 0;

  
    while (i < nums1Size && j < nums2Size) {
          if (nums1[i] <= nums2[j]) {
          arr[k] = nums1[i];
          i++;
          } 
        else {
            arr[k] = nums2[j];
            j++; 
        }
        k++;
    }


    while (i < nums1Size) {
         arr[k] = nums1[i];
         i++;
         k++;
    }


    while (j < nums2Size) {
        arr[k] = nums2[j];
        j++;
        k++;
    }

    if((nums1Size + nums2Size) % 2 == 0){
        int mid = (nums1Size + nums2Size)/2;
        int mid_2 = mid-1;

        float ans = (double)(arr[mid] + arr[mid_2]) / 2.0;;

        return ans;
    }

    else{
        int mid = (nums1Size + nums2Size)/2;

        float ans = (double)arr[mid]/1.0;

        return ans;
        
    }



}