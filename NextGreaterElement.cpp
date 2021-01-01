vector<ll> nextGreaterElement(ll a[],ll n){
    stack<ll>st;
    st.push(0);                  /// think of decreasing stack and store index of every element
    vector<ll>ans(n);
    
    for(ll i=1;i<n;i++){
        while(!st.empty()&&a[st.top()]<a[i]){
            ll idx=st.top();
            ans[idx]=a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
       ans[st.top()]=-1;
       st.pop();
    }
    return ans; 
}
