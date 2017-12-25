
#include <iostream>
#include <vector>


class foo {
	public:
  int func(){
    return 11;
  } 
};

int main() {
  using namespace std;
  cout << "test\n";  
  foo f;
  f.func();
  f.func();
  f.func();
  std::cout << "very" << std::endl;
  std::vector<int> v;
  v.push_back(14);

	  
}
