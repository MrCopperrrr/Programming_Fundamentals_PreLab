int* zeros(int n) {
    if (n <= 0) {
        return nullptr; //trả về nullptr nếu số lượng phần tử <=0
    }

    //cấp bộ nhớ cho n và cho tất cả =0 
    int* arrayarray = new(nothrow) int[n](); // cái ngoặc () -> tạo các phần tử =0
                          //^~~~~~~ nothrow: dùng để trả về null khi không thể cấp bộ nhớ
    //kiểm tra có cấp bộ nhớ thành công ko 
    if (arrayarray == nullptr) {
        return nullptr; // ko thành công
    }

    return arrayarray; //return con trỏ trỏ tới mảng vừa cấp
}