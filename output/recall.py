import numpy as np
data1 = np.loadtxt(open("./label/astnn_MT3.csv","rb"),delimiter=",",skiprows=1,usecols=[0,1]) 
data2 = np.loadtxt(open("clonePairs.csv","rb"),delimiter=",",usecols=[0,1]) 
#funcName = np.loadtxt(open("allFunctions.csv","rb"),delimiter=",",skiprows=0,usecols=[0,3]) 
allFuncs = set()
yingshe = [int(0) for _ in range(60000)]
with open("allFunctions.csv") as f:
    for line in f:
        aa = line.split('/')[-1][:-6]
        allFuncs.add(int(aa))
        yingshe[int(line.split(',')[0])]=int(aa)
        
for i in range(len(data2)):
    data2[i][0] = yingshe[int(data2[i][0])]
    data2[i][1] = yingshe[int(data2[i][1])]
    if(data2[i][0] > data2[i][1]):
        tmp = data2[i][0]
        data2[i][0] = data2[i][1]
        data2[i][1] = tmp

idex1 =np.lexsort([data1[:,1], data1[:,0]])
idex2 =np.lexsort([data2[:,1], data2[:,0]])
sorted_data1 = data1[idex1, :]
sorted_data2 = data2[idex2, :]

res = 0
i,j = 0,0
len1 = len(sorted_data1)
len2 = len(sorted_data2)
par = len1
while (i < len1 and j < len2):
    if(sorted_data1[i][0] not in allFuncs or sorted_data1[i][1] not in allFuncs):
        par -= 1
        i += 1
        continue
    if(sorted_data1[i][0] == sorted_data2[j][0] and sorted_data1[i][1] == sorted_data2[j][1]):
        res += 1
        i += 1
        j += 1
    elif(sorted_data1[i][0] == sorted_data2[j][0] and sorted_data1[i][1] < sorted_data2[j][1]):
        i += 1
    elif(sorted_data1[i][0] == sorted_data2[j][0] and sorted_data1[i][1] > sorted_data2[j][1]):
        j += 1
    elif(sorted_data1[i][0] < sorted_data2[j][0]):
        i += 1
    else:
        j += 1
    
print(res/par)