var
a,i:byte;

begin
	readln(a);
	for i:=1 to a do begin
		if(i mod 10 =0) then continue;
		if(i = 42) then begin
			writeln('ERROR');
			break;
		end;
		writeln(i);
	end;
end.