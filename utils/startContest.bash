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
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}
EOF
    fi
done
code .
