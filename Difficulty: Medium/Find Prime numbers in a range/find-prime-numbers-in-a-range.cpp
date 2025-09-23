// User function Template for C++

class Solution {
  public:
  bool isprime(int n) {
      if (n < 2) return false;
      if (n == 2) return true;
      if (n % 2 == 0) return false; 
      
      for (int i = 3; i * i <= n; i += 2) {
          if (n % i == 0) return false;
      }
      return true;
  }

  vector<int> primeRange(int M, int N) {
      vector<int> vec;
      for (int i = M; i <= N; i++) {
          if (isprime(i)) vec.push_back(i);
      }
      return vec;
  }
};
