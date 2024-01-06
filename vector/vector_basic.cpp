#include <iostream>
#include <vector>

int main()
{
// Declaration.
    std::vector <int> data; //vector have 0 element.
    std::vector <int> data1(3); // {0,0,0} chỉ định số phần tử  thì xử lý vector sẽ nhanh hơn.
    std::vector <int> data2,data3;
    data1[0]=1;
//  data[1]=4; -->invalid.
    data.push_back(2);
    data[1] = 4; // --> valid.

// Initialization.
    std::vector <int> age(3,1); /// {1,1,1}.
    std::vector <std::string> name{"Hiep","Hong"};

// Truy xuất vector

// Khai báo vector 2 chiều.
    std::vector <std::vector <int> > data4 {data,data1,data2};

    std::cout << data[1] << std::endl;
    return 0;
}