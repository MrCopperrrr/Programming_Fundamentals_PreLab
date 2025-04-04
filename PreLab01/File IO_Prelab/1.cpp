//1
void calSum(string fileName) {
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        return;
    }

    int sum = 0;
    string line;
    while (getline(inputFile, line)) {
        string numStr;
        for (char c : line) {
            if (isdigit(c) || c == '-') { // Kiểm tra xem ký tự có phải là số hoặc dấu âm không
                numStr += c;
            } else if (!numStr.empty()) { // Nếu numStr không rỗng, đọc số đã tìm thấy
                sum += stoi(numStr); // Chuyển chuỗi số thành số nguyên và cộng vào sum
                numStr.clear(); // Xóa chuỗi số để đọc số tiếp theo
            }
        }
        // Xử lý số cuối cùng trên dòng
        if (!numStr.empty()) {
            sum += stoi(numStr);
        }
    }

    inputFile.close();

    cout  << sum << endl;
}