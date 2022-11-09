#include <Eigen/Eigen>
#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char **argv){
    Eigen::Vector3d coord1;
    Eigen::Vector3d coord2;
    coord1<<1,2,3;
    coord2<<2,2,2;

    double heucost, heumid;
    for(int i=0;i<3;i++){
        heumid = pow((coord1(i,0)-coord2(i,0)),2);
        heucost =sqrt( heucost+heumid);
   }

   printf("%f",heucost);
//     int a;
//     a =coord1(2,0);
//     a = pow(a,2);
//     cout << (a) <<endl;
//    return 0;
}
