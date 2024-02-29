#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    vector<std::string> v2;
    v2.push_back("maulana");
    v2.push_back("yusuf");

    cout << "v[0]: " << v[0] << endl;
    cout << "v[1]: " << v[1] << endl;
    cout << "v2[0]: " << v2[0] << endl;
    cout << v

    std::cout << "size v: " << v.size() << std::endl;
    std::cout << "size v2: " << v2.size() << std::endl;
    
    return 0;
}
