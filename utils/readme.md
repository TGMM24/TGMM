nvcc -o main  main.cpp device_sa.cu host_sa.cpp --extended-lambda

typedef std::map<int, std::map<int, int> > MultiCandidataMap;
typedef std::map<int, int> CandidataMap;

int id1 = token_label_r[ sa_r[i-1] ], id2 = token_label_r[ sa_r[i] ];
			int id3 = token_label_r[ sa_r[i-1] + step-1], id4 = token_label_r[ sa_r[i] + step-1];
			//Token sequence come from the same method
			if (id1 != id2 && id1 == id3 && id2 == id4) {
				MultiCandidataMap::iterator multi_r = candidatas.find(id1);
				if(multi_r == candidatas.end()) {
					CandidataMap temp;
					temp[id2] = step;
					candidatas[id1] = temp;
				} 
				else {
					CandidataMap::iterator inter_r = multi_r->second.find(id2);
					if (inter_r == multi_r->second.end()) {
						multi_r->second[id2] = step;
					}
					else {
						multi_r->second[id2] = step + multi_r->second[id2];
					}
				}
			}