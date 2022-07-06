#include <Eigen/Dense>
#include <vector>
#include <fstream>
#include <iostream>
#include "csv_read.h"

int main()
{
    MatrixXd A = load_csv<MatrixXd>("IMU_data.csv");
    std::cout << typeid(A).name() << std::endl;

}