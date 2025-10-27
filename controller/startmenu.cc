#include "startmenu.h"            
#include "../utils/proto.h"

  
#include <iostream>

using namespace std;
void start_ui() {
    cout << YELLOW << "hihihi!! 超级高兴遇见你！" << RESET << endl; 
    cout << YELLOW << "不管咋样，记录一下吧！" << RESET << endl;
    enter_c();
    system("clear");    

    cout << "[1]心情    [2]邮箱注册    [3]重置密码    [4]找回密码    [5]退出" << endl;
    cout << "请输入你的选择" << endl;

}
int main(){
    start_ui();
    int option;
    cin >> option;

    while(true) {
        switch(option){
            case state::CHOOSE_MOOD:
                ;
                break;
        }
    }
}
