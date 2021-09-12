-module(soma). 
-import(string, [len/1, concat/2, chr/2, substr/3, str/2, to_lower/1, to_upper/1]).
-export([soma/0,add/2]).

soma() ->
	io:fwrite("A soma e\n").
add(A,B) ->
	soma(),
	A + B.
