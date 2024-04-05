#!/bin/bash

contest="$1"
cd ../contests || exit 1
mkdir "$contest" || exit 1
cd "$contest" || exit 1

for problem in $(eval echo {$2..$3}); do
    if [ -f "$problem.cpp" ]; then
        continue
    else
        touch "$problem".cpp
        cat <<EOF > "$problem".cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
}
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    solve();
}
EOF
    fi
done
code .
