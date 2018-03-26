#include <bits/stdc++.h>

using namespace std;

int main() {

  int n = 0;
  while(scanf("%d", &n)!=EOF){
    std::string tree(n-1, '*');
    for(int i= 0;  i<tree.size(); i++){
      tree.pop_back();
      tree.replace(i,1 ,1, ' ');


    }
    for(int i= tree.size();  i>=0; i--){
      tree.push_back('*');
      tree.replace(i,1 ,1, '*');
      cout << tree << "\n";
    }
    std::string tree_2(n-1, '*');

    for(int i= 0;  i<tree_2.size(); i++){
      tree_2.pop_back();
      tree_2.replace(i,1 ,1, ' ');
    }
    for(int i= tree_2.size();  i>=tree_2.size()-2; i--){
      tree_2.push_back('*');
      tree_2.replace(i,1 ,1, '*');
      cout << tree_2 << "\n";
    }
    cout << "\n";

  }



  return 0;
}
