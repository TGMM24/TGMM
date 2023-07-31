// #include <stdio.h>
// #include <stdint.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <time.h> 

// #include "device_sa.cuh"
// #include "host_sa.h"

// using namespace std;

// struct Timer{
// 	size_t start;
// 	Timer(){
// 		reset();
// 	}
// 	void reset(){
// 		start = clock();
// 	}
// 	double elapsed(){
// 		return ((double)clock() - start) / CLOCKS_PER_SEC;
// 	}
// 	void printElapsed(char * label){
// 		cout << label << ": " << elapsed() << "s\n";
// 	}
// };


// template <typename T>
// void print(char *label, const vector<T>& v)
// {
// 	std::cout << label << ":\n";
// 	for (auto elem : v)
// 		std::cout << " " << (int)elem;
// 	std::cout << "\n";
// }

// void test_sa(int n, int mod){
		
// 	std::cout << "Testing size " << n << ", mod " << mod << std::endl;

// 	vector<unsigned char> data(n);

// 	//Generate random data with an alphabet size of 5
// 	generate(data.begin(), data.end(), [mod]() { return rand() % mod; });

// 	vector<int> sa(n);
	
// 	Timer t;
// 	device_sa(data.data(), sa.data(), n);
// 	char* cuda_suffix_array = (char*)"Cuda suffix array";
// 	t.printElapsed(cuda_suffix_array);

// 	vector<int> cpu_sa(n); 
	
// 	t.reset();
// 	//Get reference suffix array
// 	host_sa((const unsigned char*)data.data(), cpu_sa.data(), n);
// 	char* cpu_suffix_array = (char*)"Cpu suffix array";
// 	t.printElapsed(cpu_suffix_array);

// 	//Compare
// 	if (sa == cpu_sa)
// 		cout << "Success. SA is correct.\n";
// 	else
// 		cout << "Error. SA is incorrect.\n";
// }

// // int main()
// // {
// // 	//Size and alphabet size to test
// // 	int sizes[] = { 10, 30, 100000000 };
// // 	int mod[] = { 4, 26, 255 };
// // 	srand(0);

// // 	for (auto n : sizes)
// // 		for (auto m : mod)
// // 			test_sa(n, m);

// //     return 0;
// // }
