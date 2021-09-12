-module(areas).
-export([loop/0,start/0]).

loop() ->
	receive
		{retangulo, Base, Altura} ->
			io:fwrite("A area do retangulo e ~p~n", [Base*Altura]),
			loop();
		{circulo, Raio} ->
			io:fwrite("A area do circulo e ~p~n", [3.141592*Raio*Raio]),
			loop();
	other ->
		io:fwrite("Nao foi possivel calcular a area!\n"),
		loop()
	end.

start() ->
	Pid = spawn(fun() -> loop() end),
	Pid ! {retangulo, 5, 8}.
