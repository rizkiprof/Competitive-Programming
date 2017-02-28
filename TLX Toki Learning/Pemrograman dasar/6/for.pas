var
j,a,i,tot : longint;

begin
	readln(a);
	//tot:=0;
	for i:= 1 to a do begin
		read(j); 
		inc(tot,j);
	end;
	writeln(tot);
end.