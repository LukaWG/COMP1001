#include <iostream>
#include <chrono>

#define TIMES_TO_RUN 1000
#define N 1024

void row_wise();
void column_wise();

int main() {
    // Your code here
    
    auto start = std::chrono::high_resolution_clock::now();

    // Code block to be timed
    
    // row_wise();
    column_wise();

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Execution time: " << duration.count()/TIMES_TO_RUN << " microseconds" << std::endl;

    return 0;
}

void row_wise()
{
    int A[N][N];
    for (unsigned int a = 0; a < TIMES_TO_RUN; a++)
    {
        for (unsigned int i = 0; i < N; i++)
        {
            for (unsigned int j = 0; j < N; j++)
            {
                A[i][j] = 0;
            }
        }
    }
}

void column_wise()
{
    int A[N][N];
    for (unsigned int a = 0; a < TIMES_TO_RUN; a++)
    {
        for (unsigned int i = 0; i < N; i++)
        {
            for (unsigned int j = 0; j < N; j++)
            {
                A[j][i] = 0;
            }
        }
    }
}