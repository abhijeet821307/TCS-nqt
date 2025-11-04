#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c){
    
    if(a== b && b==c) return 0;
    
    
  vector<int> nums={a,b,c};
  sort(nums.begin(),nums.end());
  int count=0;
  while(!(nums[0]==nums[1] && nums[1]==nums[2])){
      nums[0]++;
      nums[1]++;
      nums[2]--;
      sort(nums.begin(),nums.end());
      count++;
      
      if(nums[0]==nums[1] && nums[1]==nums[2]){
          return count;
      }
      if((nums[0]==nums[1] && nums[1]+1==nums[2]) || (nums[1]==nums[2] && nums[0]+1==nums[1])){
          return -1;
      }
  }
    
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=solve(a,b,c);
    cout<<d;
    return 0;
}
