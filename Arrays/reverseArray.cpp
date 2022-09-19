void reverseArray(int x[], int start, int end){

  while(start< end){
    int temp = x[start];
    x[start] = x[end];
    x[end] = temp;
    start++;
    end--;
  }
}
