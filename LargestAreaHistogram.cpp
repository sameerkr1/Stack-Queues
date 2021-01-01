void nextGreaterElement(long long a[],ll n){ 
    stack<int> s; 
  
    ll ans=0;
    ll tp;
    ll area_with_top; 
  
    ll i = 0; 
    while (i<n){ 
        if (s.empty()||a[s.top()]<=a[i]) 
            s.push(i++); 
        else{ 
            tp = s.top();
            s.pop();
            area_with_top = a[tp]*(s.empty()?i: i - s.top() - 1); 
            ans=max(ans,area_with_top);
        } 
    }
    while (!s.empty()){
         tp = s.top();
         s.pop();
         area_with_top = a[tp]*(s.empty()?i:i-s.top()-1);
         ans=max(ans,area_with_top); 
    } 
    return ans;
}
