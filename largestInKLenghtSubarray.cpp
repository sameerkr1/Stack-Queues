int largestInKLenghtSubarray(int a[],int n,int k){
   deque<int>dq;
   
   for(ll i=0;i<k;i++){
      while(!dq.empty()&&a[dq.back()]<=a[i])dq.pop_back();
      dq.push_back(i);
   }
   
   for(ll i=k;i<n;i++){
      cout<<a[dq.front()];
      while(!dq.empty()&&dq.front()<=i-k)dq.pop_front();  /// removing all the elements which are not in the current window
      while(!dq.empty&&a[dq.back()]<=a[i])dq.pop_back();  /// removing all the elements which are greater then preview elements from backside
      dq.push_back(i);
   }
   cout<<a[dq.front()];
}
