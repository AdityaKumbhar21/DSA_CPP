  for(int col = 0;col<n;col++){
        int start = 0, end = n -1;
        while(start < end){
            swap(arr[start][col], arr[end][col]);
            start++;
            end--;
        }