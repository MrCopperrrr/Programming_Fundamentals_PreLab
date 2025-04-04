//1
void cutString(string s, int index) {
    if (index < 0 || index >= s.length()) {
        return;
    }
   
    string sub = s.substr(index);
   
    cout << sub << endl;
}

