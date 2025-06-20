//https://code.ptit.edu.vn/student/question/DSA08011
//KHOẢNG CÁCH XÂU KÝ TỰ

#include <bits/stdc++.h>
using namespace std;

vector<string> generatePatterns(string word) {
    vector<string> patterns;
    for(int i = 0; i < word.size(); i++){
        string pattern = word;
        pattern[i] = '*';
        patterns.push_back(pattern);
    }
    return patterns;
}

int BFS(string s, string t, unordered_set<string> dict){
    if(s == t) return 0;
    unordered_map<string, vector<string>> patternMap;
    for(auto word : dict){
        for(auto pat : generatePatterns(word)){
            patternMap[pat].push_back(word);
        }
    }
    unordered_map<string, int> step;
    queue<string> q;
    q.push(s);
    step[s] = 1;
    while (!q.empty()) {
        string cur = q.front(); 
        q.pop();
        for (auto pat : generatePatterns(cur)) {
            for (auto nei : patternMap[pat]) {
                if (!step.count(nei)) {
                    step[nei] = step[cur] + 1;
                    if (nei == t) return step[nei];
                    q.push(nei);
                }
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s, t;
        cin >> n >> s >> t;
        unordered_set<string> dict;
        for(int i = 0; i < n; i++){
            string word;
            cin >> word;
            dict.insert(word);
        }
        int res = BFS(s, t, dict);
        cout << res << endl;
    }
    return 0;
}