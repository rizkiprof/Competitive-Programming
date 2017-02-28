var
 tot, a : longint;

begin
	tot:=0;
	while not(eof(input)) do begin
		readln(a);
		tot+=a;
	end;
	writeln(tot);
end.