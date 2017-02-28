var
arr:array[1..100] of longint;
i,j : longint;

begin
	i:=1;
	while not (eof(input)) do begin
		readln(arr[i]);
		inc(i);
	end;
	for j:=i-1 downto 1 do begin
		writeln(arr[j]);
	end
end.