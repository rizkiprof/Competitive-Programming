var
j,a,i:byte;

begin
	readln(a);
	for i:=1 to a do begin
		for j:=1 to a do begin
			if(j>a-i) then write ('*')
			else write(' ');
		end;
		writeln();
	end;
end.