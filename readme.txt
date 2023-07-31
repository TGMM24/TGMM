export CLASSPATH="/bdata2/yyh/CTACC/antlr-4.11.1-complete.jar:$CLASSPATH"
alias antlr4='java -Xmx500M -cp "/bdata2/yyh/CTACC/antlr-4.11.1-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
alias grun='java -Xmx500M -cp "/bdata2/yyh/CTACC/antlr-4.11.1-complete.jar:$CLASSPATH" org.antlr.v4.gui.TestRig'
antlr4 -Dlanguage=Cpp T*.g4



nvcc main3.cpp ./utils/device_sa.cu ./data/*.cpp ./AllGrammar/javaGrammar/*.cpp ./utils/*.cpp -I ./include -I ./AllGrammar/javaGrammar -lantlr4-runtime -std=c++17 --extended-lambda -o main3
nvcc test2.cpp ./AllGrammar/javaGrammar/*.cpp  -I ./AllGrammar/javaGrammar -lantlr4-runtime -std=c++17 -o test2
nvcc test2.cpp ./AllGrammar/cppGrammar/*.cpp -I ./include -I ./AllGrammar/cppGrammar -lantlr4-runtime -std=c++17 -o test2
identifier=128
\n = 125
linecomment = 127
comment = 126
white space = 125
eof = -1

if channel=1 : this token can be discarded, 隐藏通道, 例如javaLexer.g4文件中第200-202行

统计代码行数（去除空行）:
find cpp/ -name "*.cpp" |xargs cat|grep -v ^$|wc -l
统计代码行数(保留空行)：
find c/ -name "*.c" |xargs cat|wc -l 
find kotlin/ -name "*.kt"|xargs cat|wc -l



#各语言entry point 和 克隆级别
java:
entry point : compilationUnit
method : methodDeclaration
class : classDeclaration
loop: statement, first child in [for, while, do]
condition: statement, first child in [try, if, switch]

c++:
entry point : translationUnit
method : functionDefinition
class : classSpecifier
condition: selectionStatement(包括if和switch)
loop: iterationStatement (包括while, do, for)

c:
entry point : translationUnit
method : functionDefinition
forDeclaration

csharp:
entry point : compilation_unit
method : local_function_declaration
for_initializer

go:
entry point : sourceFile
method : topLevelDecl
forStmt
selectStmt(类似switch), ifStmt, switchStmt, 



javascript:
entry point : program
functionDeclaration, methodDefinition
classDeclaration
iterationStatement: do, while, for(three types)
ifStatement, withStatement, switchStatement, tryStatement

typescript:
program
functionDeclaration
classDeclaration
iterationStatement: do, while, for(three types)
ifStatement, withStatement, switchStatement, tryStatement

kotlin:
entry point : kotlinFile
functionDeclaration
classDeclaration
conditionalExpression: if, when
loopExpression: for, while, do


python2:
entry point :  file_input
classdef
funcdef
if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | decorated

python3:
entry point :  file_input
classdef
funcdef
async_funcdef
if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | decorated | async_stmt

rust:
entry point: crate
fn_decl, method_decl, trait_method_decl, foreign_fn_decl
blocky_expr(看第一个孩子是不是if)

solidity:
entry point: sourceUnit
functionDefinition
contractDefinition(include contract, interface, library) | contract

swift:
entry point: top_level
function_declaration
class_declaration
loop_statement: for_in_statement | while_statement | repeat_while_statement
branch_statement: 	if_statement | guard_statement | switch_statement
labeled_statement: loop_statement | if_statement | switch_statement | do_statement

