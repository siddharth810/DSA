void reverseArray(int x[], int start, int end){

  while(start< end){
    int temp = x[start];
    x[start] = x[end];
    x[end] = temp;
    start++;
    end--;
  }
}
// Using Recursion
void reverseArray(int x[], int start,int end){
  if(start>=end)
    return;
   int temp = x[start];
    x[start] = x[end];
    x[end] = temp;
  reverseArray(x, start+1,  end -1);
}
