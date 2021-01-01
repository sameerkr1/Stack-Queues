int longestBalancedSubstring(string s){
   ll n=s.size(),ans=0;
   stack<int>st;
   st.push(-1);
   
   for(ll i=0;i<n;i++){
       if(s[i]=='(')st.push(i);
       else{
          if(!st.empty())st.pop();
          if(st.empty())st.push(i);
          else ans=max(ans,i-st.top());
       }
   }
   return ans;
}
