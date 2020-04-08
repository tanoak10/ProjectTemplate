
#include <iostream>
#include "Service/StudentService.h"
#include "Dao/StudentDao.h"
using namespace std;
using namespace tanoak;

int main() {
    cout << "hello world "<< endl ;
    StudentService service ;
    StudentDao studentDao ;
    cout << service.add(1,4)<< endl ;
    cout << studentDao.add(1,4)<< endl ;
}
