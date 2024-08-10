#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    string initial="", attr_name;
    map<string, string>m;
    cin >> n >> q;
    cin.ignore();
    
    for (int i=0; i<n; i++) {
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);
        while (getline(ss, extract, ' ')) {
            if (extract[0]=='<') {
                if (extract[1]!='/') {
                    tag = extract.substr(1);
                    if (tag[tag.length() - 1] == '>') {
                        tag.pop_back();
                    }
                    if (initial.size() > 0) {
                        initial += "."+tag;
                    }
                    else{
                        initial = tag;
                    }
                }
                else{
                    tag = extract.substr(2, (extract.find('>') - 2));
                    size_t pos = initial.find("."+tag);
                    if (pos != string::npos) {
                        initial = initial.substr(0, pos);
                    }
                    else {
                        initial = "";
                    }
                }
            }
            else if (extract[0] == '"' ) {
                size_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1, pos-1);
                m[attr_name] = attr_value;
            }
            else {
                if (extract != "=") {
                    attr_name = initial + "~" + extract;
                }
            }
        }
    }
    string query;
    for (int i=0; i < q; i++) {
        getline(cin, query);
        map<string, string>::iterator itr = m.find(query);
        if (itr != m.end()) {
            cout << itr->second << endl;
        }
        else{
            cout << "Not Found!" << endl;
        }
    }
    
    return 0;
}
