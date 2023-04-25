#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> anagrams(string word, vector<string> word_list) {
    vector<string> output;
    sort(word.begin(), word.end());
    for (string w : word_list) {
        string sorted_w = w;
        transform(sorted_w.begin(), sorted_w.end(), sorted_w.begin(), ::tolower);
        sort(sorted_w.begin(), sorted_w.end());
        if (sorted_w == word) {
            output.push_back(w);
        }
    }
    return output;
}

int main() {
    string word = "listen";
    vector<string> word_list = {"enlists", "google", "inlets", "orange"};
    vector<string> result = anagrams(word, word_list);
    for (string w : result) {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}
