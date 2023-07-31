// #include <stdio.h>
// #include <stdint.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <time.h> 
// #include <map>
// #include "device_sa.cuh"
// #include "host_sa.h"

// typedef std::map<int, std::map<int, int> > MultiCandidataMap;
// typedef std::map<int, int> CandidataMap;

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
//     vector<int> token_label(n);
// 	int nn = 100*n;
// 	vector<int> first_key(nn);
// 	vector<int> second_key(nn);
// 	vector<int> heights(nn);
// 	vector<int> current_index(1, 0);

//     for (int i = 0; i < n/3; i++)
//     {
//         token_label[i] = 1;
//     }
//     for (int i = n/3; i < 2*n/3; i++)
//     {
//         token_label[i] = 2;
//     }
//     for (int i = 2*n/3; i < n; i++)
//     {
//         token_label[i] = 3;
//     }



// 	Timer t;
// 	device_sa(data.data(), sa.data(), n, first_key.data(), second_key.data(), heights.data(), nn, current_index.data());
// 	char* cuda_suffix_array = (char*)"Cuda suffix array";
// 	t.printElapsed(cuda_suffix_array);

// 	// std::cout << "Data: ";
// 	// for (auto elem : data)
// 	// 	std::cout << " " << (int)elem;
// 	// std::cout << endl << "SA: ";
// 	// for (auto elem : sa)
// 	// 	std::cout << " " << (int)elem;
// 	// std::cout << endl << "token label: ";
// 	// for (auto elem : token_label)
// 	// 	std::cout << " " << (int)elem;
// 	// std::cout << endl << "first key: ";
// 	// for (auto elem : first_key)
// 	// 	std::cout << " " << (int)elem;
// 	// std::cout << endl << "second key: ";
// 	// for (auto elem : second_key)
// 	// 	std::cout << " " << (int)elem;
// 	// std::cout << endl << "height: ";
// 	// for (auto elem : heights)
// 	// 	std::cout << " " << (int)elem;
// 	std::cout << endl << "end index: " << current_index[0] << endl;
	
// }

// // int main()
// // {
// // 	//Size and alphabet size to test
// // 	int sizes[] = { 100000000 }; 
// // 	int mod[] = {4};
// // 	srand(0);

// // 	for (auto n : sizes)
// // 		for (auto m : mod)
// // 			test_sa(n, m);

// //     return 0;
// // }
