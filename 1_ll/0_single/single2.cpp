/*
    JUDUL   : SINGLE LINKED LIST DALAM C++
    TANGGAL : 11/2/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include "../../header.hpp"

typedef struct Member {
    int num;
    std::string name;
} m;

void print(const std::forward_list<m>& members) {
    std::cout << "Members = {";
    for (const Member& member : members) {
        std::cout << '(' << member.num << ", " << member.name << ") -> ";
    }
    std::cout << "}";
}

int main() {
    Member m1 = {1, "One"};
    Member m2= {2, "Two"};
    std::forward_list<m> members;

    members.push_front(m1);
    members.push_front(m2);
    print(members);
    
    return 0;
}
