#include <iostream>
double matrix_determinant(double matrix[],unsigned int n)
{
    double kef,det;
    det = 1;
    for (int i = 0; i < n*n; i+=n)
    {
        for (int j=i+1;j<n;j+=1)
        {
            kef = -1*matrix[j*n] / matrix[i*n];
            for (int k = 0; k <n;k++)
            {
                
                    matrix[n*j+k] += matrix[i*n+k] * kef;
            }

        }
    }
    for (int i = 0; i < n;i++)
    {
        det *= matrix[i*n+i];
    }
    return det;
}
int main() {
    //std::cout << FindFib(45);
    int n;
   
    std::cout << "введите размеры матрицы"<<std::endl;
    std::cin >> n;
    double* matrix = new double[n*n];
   
    std::cout << "¬ведите элемнты  в матрице:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i * n + j];
        }
    }
    std::cout<<matrix_determinant(matrix,n);
    delete(matrix);
    return 0;
}
