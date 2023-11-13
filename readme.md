# TGMM: a Clone Detector
TGMM is a tree-based code clone detection tool that offers support for detecting clones at any granularity.

## Requirements
- C++ 17+
- Antlr 4.11.0+ (Installation address:`https://www.antlr.org/`)
- antlr4-cpp-runtime (Version needs to be consistent with ANTLR)

## Install & Usage
- Clone this repository (`git clone https://github.com/TGMM24/TGMM.git`)
- Compile Project (for example: `nvcc main.cpp ./utils/device_sa.cu ./data/*.cpp ./AllGrammar/javaGrammar/*.cpp ./utils/*.cpp -I ./include -I ./AllGrammar/javaGrammar -lantlr4-runtime -std=c++17 --extended-lambda -o main`)
- Compile Antlr grammar file (`antlr4 -Dlanguage=Cpp *.g4`)
- Run Project: We currently offer the following two running modes:
    - Without parameters: Directly modify the required parameter values in the program. These parameters are concentrated in the first few lines of `main.cpp` and `AllData.cpp`. (`./main`)
    - With parameter: You need to set the following four parameters simultaneously: 

	|Name|Description|Example|
	|:--:|:--|:--|
	|`filePath`|Path of the project to be tested.|`./data100k/`|
	|`cloneLV`|Clone granularity.|`methodDeclaration`|
	|`outputPath`|The path to save the clone detection results.|`./output`|
	|`format`|Suffix of the file.|`.java`|

- Output file format:
	- allFunctionMap.csv:
	`[function ID, function path, start line, end line]`
  	- clonePairs.csv:
	`[function_index_A, function_index_B]`
	- cloneLV.txt:
	`[code block number, clone pair number, file origination rate, code autonomy rate, execution time.]`
## Notes
- Multilingual settings: Grammar files for all programming languages are stored in the `./AllGrammar/` folder. We have unified the grammar files for the 9 popular languages: "myLexer.g4" and "myPrser.g4". If you want to detect clones for other programming languages, you can change the name of its corresponding grammar file or modify the `#include` section in the `preprocess.cpp` file.
- CloneLV setting: The specific value of `cloneLV` should refer to different Antlr `xxParser.g4` files. For example, in the `javaParser.g4`, Function-level code blocks are subtrees rooted at methodDeclaration. `methodDeclaration
    : typeTypeOrVoid identifier formalParameters ('[' ']')*
      (THROWS qualifiedNameList)?
      methodBody
    ;`
