void findAllIndex(string s1, string s2) {
    size_t pos = s1.find(s2); // Tìm vị trí đầu tiên của chuỗi s2 trong chuỗi s1

    
    while (pos != string::npos) {
        cout << pos << " "; // In ra vị trí tìm thấy

        
        pos = s1.find(s2, pos + 1);
    }

    
    if (pos == string::npos) {
        cout << -1;
    }
}