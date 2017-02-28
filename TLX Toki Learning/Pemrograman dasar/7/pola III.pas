var
k,j,a,i:byte;

begin
	readln(a);
	k:=0;
	for i:=1 to a do begin
		for j:=1 to i do begin
			write(k);
			inc(k);
			if(k=10) then k:=0;
		end;
		writeln();
	end;
end.