#include <iostream>
#include <vector>
#include "User.h"
#include "Admin.h"
#include "Member.h"

using namespace std;

int main() {
    Admin admin1("Budi", "budi@mail.com");

    vector<Member> members;
    members.push_back(Member("Ani", "ani@mail.com"));
    members.push_back(Member("Citra", "citra@mail.com"));
    members.push_back(Member("Dani", "dani@mail.com"));

    for (int i = 0; i < members.size(); i++) {
        members[i].showProfile();
    }

    admin1.showAllMember(members);

    admin1.toggleActivationMember(members, 3);
    admin1.showAllMember(members);

    return 0;
}