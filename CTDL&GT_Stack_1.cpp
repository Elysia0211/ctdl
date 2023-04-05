//https://howkteam.vn/course/cau-truc-du-lieu-va-giai-thuat/stack-cau-truc-du-lieu-ngan-xep-4271
struct CustomStack{
    int sz = 0; // Kích thước stack
    int a[int(1e6 + 1)]; // Mảng được giả làm stack với kích thước tối đa 1e6
 
    // Thêm phần tử vào stack
    void push(int element){
        a[sz] = element;
        sz++;
    }
 
    // Xoá phần tử khỏi stack
    void pop(){
        if(sz) sz--;
    }
 
    // Lấy giá trị cuối cùng trong stack
    int top(){
        if(sz) return a[sz - 1];
    }
 
    // Lấy kích thước stack
    int getSize(){
        return sz;
    }
};
