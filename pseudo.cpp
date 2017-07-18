
// parser
check logic errors
run commands
manipulate stack
throw errors related to logic

// lexer
check file content errors
format file contents into commands
throw errors related to syntax
call parser

// main
check params
loop:
	call lexer
	call parser
