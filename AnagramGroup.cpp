class Solution {
  public:
    bool areAnagrams(string a, string b){
            if(a.size()!=b.size()) return false;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            return a==b;
    }
    vector<vector<string>> anagrams(vector<string>& arr) {
      int n = arr.size();
      vector<vector<string>> result;
      vector<bool> grouped(n, false);
      
      for(int i=0;i<n;i++){
          if(grouped[i]) continue;
          vector<string> group;
          group.push_back(arr[i]);
          grouped[i] = true;
          
          for(int j=i+1;j<n;j++){
              if(!grouped[j] && areAnagrams(arr[i], arr[j])){
                  group.push_back(arr[j]);
                  grouped[j] = true;
              }
          }
          result.push_back(group);
      }
      return result;
    }
};